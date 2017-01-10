//
//  UserChallengeViewController.m
//  Unity-iPhone
//
//  Created by mxkulik on 2017-01-04.
//
//

#import "UserChallengeViewController.h"
#import "UIView+LayoutUtils.h"
#import "ChallengeItemTableViewCell.h"
#import "CallengePlugin.h"

@interface UserChallengeViewController ()
    @property (weak, nonatomic) IBOutlet UINavigationBar *navigationBar;
    @property (weak, nonatomic) IBOutlet UITextView *textView;
    @property (weak, nonatomic) IBOutlet UIView *containerView;
    
    @property (strong, nonatomic) UIToolbar *inputAccessoryView;
    @property (strong, nonatomic) UITableView *tableView;
    
    @property (weak, nonatomic) IBOutlet UIView *bottomPanel;
    @property (weak, nonatomic) IBOutlet UILabel *errorLabel;

@end

@implementation UserChallengeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.alpha = 0;
    
    [self setupHeader];
    [self setupTextView];
    [self setupResultView];
    [self setupErrorLabel];
    [self registerForKeyboardNotifications];
}
    
- (void)registerForKeyboardNotifications{
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWasShown:)
                                                 name:UIKeyboardDidShowNotification object:nil];
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillBeHidden:)
                                                 name:UIKeyboardWillHideNotification object:nil];
    
}
    
- (void)keyboardWasShown:(NSNotification*)aNotification{
    NSDictionary* info = [aNotification userInfo];
    CGSize kbSize = [[info objectForKey:UIKeyboardFrameBeginUserInfoKey] CGRectValue].size;
    
    UIEdgeInsets contentInsets = UIEdgeInsetsMake(0.0, 0.0, kbSize.height - self.bottomPanel.frame.size.height, 0.0);
    self.tableView.contentInset = contentInsets;
    self.tableView.scrollIndicatorInsets = contentInsets;
}

- (void)keyboardWillBeHidden:(NSNotification*)aNotification {
    UIEdgeInsets contentInsets = UIEdgeInsetsZero;
    self.tableView.contentInset = contentInsets;
    self.tableView.scrollIndicatorInsets = contentInsets;
}
    
- (void) showChallengeError:(NSString *)error {
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    paragraphStyle.headIndent = 15.0;
    paragraphStyle.firstLineHeadIndent = 15.0;
    paragraphStyle.tailIndent = -15.0;
    
    NSDictionary *attrsDictionary = @{NSParagraphStyleAttributeName: paragraphStyle};
    self.errorLabel.attributedText = [[NSAttributedString alloc] initWithString:[NSString stringWithFormat:@"\n%@\n", error] attributes:attrsDictionary];
}

- (void) setupErrorLabel {
    self.errorLabel.layer.masksToBounds = YES;
    self.errorLabel.layer.cornerRadius = 8.0;
    self.errorLabel.layer.borderColor = [UIColor redColor].CGColor;
    self.errorLabel.layer.borderWidth = 1;
    self.errorLabel.hidden = YES;
}
    
- (void) setupHeader {
    self.navigationController.navigationBar.barTintColor = [UIColor blueColor];
    self.navigationController.navigationBar.tintColor = [UIColor blueColor];
    
    UIButton *button =  [UIButton buttonWithType:UIButtonTypeCustom];
    [button setImage:[UIImage imageNamed:@"settings_button.png"] forState:UIControlStateNormal];
    [button addTarget:self action:@selector(settingAction:) forControlEvents:UIControlEventTouchUpInside];
    [button setFrame:CGRectMake(0, 0, 30, 33)];
    
    UINavigationItem *navigationItem = [[UINavigationItem alloc] init];
    navigationItem.hidesBackButton = YES;
    navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:button];
    navigationItem.title = @"BetPalz";
    [self.navigationBar pushNavigationItem:navigationItem animated:NO];
    
}
    
- (void) setupTextView {
    self.textView.delegate = self;
    self.textView.autocorrectionType = UITextAutocorrectionTypeNo;
    self.textView.layer.masksToBounds = YES;
    self.textView.layer.cornerRadius = 8.0;
    [self createInputAccessoryView];
    [self.inputAccessoryView removeFromSuperview];
}
    
- (void) setupResultView {
    self.tableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStylePlain];
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    [self.containerView addSubview:self.tableView];
    self.tableView.translatesAutoresizingMaskIntoConstraints = NO;
    [self.tableView addConstraintsToFillSuperview];
    
    UINib *cellNib = [UINib nibWithNibName:NSStringFromClass([ChallengeItemTableViewCell class]) bundle:nil];
    [self.tableView registerNib:cellNib forCellReuseIdentifier:NSStringFromClass([ChallengeItemTableViewCell class])];
    
    self.tableView.backgroundColor = [UIColor clearColor];
    self.tableView.separatorColor = [UIColor clearColor];
    self.tableView.hidden = YES;
}
    
- (void) showResultView {
    self.tableView.hidden = NO;
}
    
- (void) hideResultView {
    self.tableView.hidden = YES;
}

- (IBAction)createChallengeAction:(id)sender {
    [[CallengePlugin instance] createChallenge:self.textView.text];
    
    [self dismissViewControllerAnimated:NO completion:^{}];
}
    
- (void) settingAction:(id)sender {
    [[CallengePlugin instance] createChallenge:self.textView.text];
    
    [self dismissViewControllerAnimated:NO completion:^{}];
}
    
- (void) dismissKeyBoard:(id)sender {
    [self.textView resignFirstResponder];
    [self.inputAccessoryView removeFromSuperview];
}
    
- (void)viewDidAppear:(BOOL)animated {
    self.view.backgroundColor = [UIColor clearColor];
    
    [UIView animateWithDuration:0.4 animations:^() {self.view.alpha = 1;}
                     completion:^(BOOL finished){}];
}
    
- (void)textViewDidBeginEditing:(UITextView *)textView {
    [self createInputAccessoryView];
}
    
- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text {
    NSLog(@"text: %@", text);
    
    self.errorLabel.hidden = YES;
    
    if ([self.challengeSet hasFilter]) {
        [self.challengeSet appendFilter:text];
    }
    
    if ([text isEqualToString:@"@"]) {
        [self.challengeSet switchToPlayers];
    }
    
    if ([text isEqualToString:@"!"]) {
        [self.challengeSet switchToGames];
    }
    
    if ([text isEqualToString:@"$"]) {
        [self.challengeSet switchToBets];
    }
    
    if ([self.challengeSet hasFilter]) {
        [self showResultView];
        [self.tableView reloadData];
    }
    else {
        [self hideResultView];
    }
    
    
    return YES;
}
    
- (void)textViewDidChange:(UITextView *)textView {
    [[CallengePlugin instance] challengeTextChanged: self.textView.text];
}
    
-(void)createInputAccessoryView {
    self.inputAccessoryView = [[UIToolbar alloc] init];
    self.inputAccessoryView.barStyle = UIBarStyleBlackTranslucent;

    
    UIBarButtonItem *doneItem = [[UIBarButtonItem alloc] initWithTitle:@"Done"
                                                                 style:UIBarButtonItemStyleDone
                                                                target:self action:@selector(dismissKeyBoard:)];
    
    NSArray *items = [NSArray arrayWithObjects:doneItem, nil];
    [self.inputAccessoryView setItems:items animated:YES];
    [self.inputAccessoryView sizeToFit];
    [self.view addSubview:self.inputAccessoryView];
}
    
    
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}
    
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    NSArray<ChallengeItem *> *result = [self.challengeSet filteredItems];
    return [result count];
}
    
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    ChallengeItemTableViewCell *cell = [self.tableView dequeueReusableCellWithIdentifier:NSStringFromClass([ChallengeItemTableViewCell class]) forIndexPath:indexPath];
    
    cell.backgroundColor = [UIColor clearColor];
    cell.nameLabel.layer.masksToBounds = YES;
    cell.nameLabel.layer.cornerRadius = 8.0;
    
    if ([[self.challengeSet filteredItems] count] > indexPath.row) {
        ChallengeItem *item = [[self.challengeSet filteredItems] objectAtIndex:indexPath.row];
        
        cell.nameLabel.text = [NSString stringWithFormat:@"  %@", item.name];
    }
    
    return cell;
}
    
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return 70;
}
    
    
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    ChallengeItem *item = [[self.challengeSet filteredItems] objectAtIndex:indexPath.row];
    [self.textView replaceRange:self.textView.selectedTextRange withText:item.name];
    [self.challengeSet clearFilter];
    [self.challengeSet clearSet];
    [self hideResultView];
}

@end

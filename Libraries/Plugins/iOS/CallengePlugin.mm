//
//  CallengePlugin.m
//  Unity-iPhone
//
//  Created by Andrey Oleynik on 12/7/16.
//
//

#import "CallengePlugin.h"
#import "UserChallengeViewController.h"
#import "ChallengeSet.h"

@interface CallengePlugin ()
    
@property(nonatomic, strong) UserChallengeViewController *challengeViewController;
    
@end


@implementation CallengePlugin

+ (id)instance {
    static CallengePlugin *sharedMyManager = nil;
    @synchronized(self) {
        if (sharedMyManager == nil)
            sharedMyManager = [[self alloc] init];
    }
    return sharedMyManager;
}

- (void)showChallengeUI:(ChallengeSet *)set {
    UIViewController *rootViewController = [UIApplication sharedApplication].keyWindow.rootViewController;
    
    self.challengeViewController = [[UserChallengeViewController alloc] initWithNibName:@"UserChallengeViewController" bundle:nil];
    
    self.challengeViewController.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    self.challengeViewController.view.alpha = 0.99f;
    self.challengeViewController.challengeSet = set;
    [rootViewController presentViewController:self.challengeViewController animated:YES completion:NULL];
}
    
- (void)showChallengeError:(NSString *)error {
    [self.challengeViewController showChallengeError: error];
}
    
- (void) createChallenge:(NSString *)challengeText {
    self.challengeViewController = nil;
    UnitySendMessage("ChallengePluginListener", "CreateChallenge", [challengeText cStringUsingEncoding:NSUTF8StringEncoding]);
}
    
- (void) challengeTextChanged:(NSString *)challengeText {
    UnitySendMessage("ChallengePluginListener", "ChallengeTextChanged", [challengeText cStringUsingEncoding:NSUTF8StringEncoding]);
}
    

@end

extern "C"
{
    void showCallengeCreatorView(const char* jsonParams){
        NSError *jsonError;
        NSData *objectData = [[NSString stringWithUTF8String:jsonParams] dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary *json = [NSJSONSerialization JSONObjectWithData:objectData
                                                             options:NSJSONReadingMutableContainers
                                                               error:&jsonError];
        NSLog(@"%s", jsonParams);
        NSLog(@"%@", json);
        
        ChallengeSet *set = [ChallengeSet createWithDictionary:json];
        
        [[CallengePlugin instance] showChallengeUI:set];
    }
    
    void showChallengeError(char* jsonParams) {
        [[CallengePlugin instance] showChallengeError:[NSString stringWithUTF8String:jsonParams]];
    }
}


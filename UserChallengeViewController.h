//
//  UserChallengeViewController.h
//  Unity-iPhone
//
//  Created by mxkulik on 2017-01-04.
//
//

#import <UIKit/UIKit.h>
#import "ChallengeSet.h"

@interface UserChallengeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>
    
@property(nonatomic, strong) ChallengeSet *challengeSet;
    
- (void) showChallengeError:(NSString *)error;

@end

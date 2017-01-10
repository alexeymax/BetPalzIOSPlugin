//
//  CallengePlugin.h
//  Unity-iPhone
//
//  Created by Andrey Oleynik on 12/7/16.
//
//

#import <Foundation/Foundation.h>

@interface CallengePlugin : NSObject
    
+ (id)instance;
    
- (void) createChallenge:(NSString *)challengeText;
- (void) challengeTextChanged:(NSString *)challengeText;

@end

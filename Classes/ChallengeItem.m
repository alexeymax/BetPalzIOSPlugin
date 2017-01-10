//
//  ChallengeItem.m
//  Unity-iPhone
//
//  Created by mxkulik on 2017-01-04.
//
//

#import "ChallengeItem.h"

@implementation ChallengeItem

- (NSString *)description {
    return [NSString stringWithFormat:@"[name: %@, icon: %@]", self.name, self.icon];
}
    
@end

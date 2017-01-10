//
//  ChallengeSet.h
//  Unity-iPhone
//
//  Created by mxkulik on 2017-01-04.
//
//

#import <Foundation/Foundation.h>
#import "ChallengeItem.h"

@interface ChallengeSet : NSObject
    
@property(strong, nonatomic) NSArray<ChallengeItem *> *bets;
@property(strong, nonatomic) NSArray<ChallengeItem *> *games;
@property(strong, nonatomic) NSArray<ChallengeItem *> *players;
    
@property(strong, nonatomic) NSArray<ChallengeItem *> *currentSet;
    
@property(strong, nonatomic) NSString *filter;

+ (id) createWithDictionary:(NSDictionary *)dictionary;
    
- (void) switchToBets;
- (void) switchToGames;
- (void) switchToPlayers;
    
- (void) clearSet;
    
- (void) appendFilter:(NSString *)filter;
- (void) clearFilter;
- (BOOL) hasFilter;
    
- (NSArray<ChallengeItem *> *)filteredItems;
    
@end

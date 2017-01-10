//
//  ChallengeSet.m
//  Unity-iPhone
//
//  Created by mxkulik on 2017-01-04.
//
//

#import "ChallengeSet.h"


@implementation ChallengeSet
    
+ (id) createWithDictionary:(NSDictionary *)dictionary {
    ChallengeSet *set = [[ChallengeSet alloc] init];
    
    NSArray<ChallengeItem *> *bets = [self items:dictionary forKey:@"bets"];
    set.bets = bets;
    
    NSArray<ChallengeItem *> *games = [self items:dictionary forKey:@"games"];
    set.games = games;
    
    NSArray<ChallengeItem *> *players = [self items:dictionary forKey:@"players"];
    set.players = players;
    
    return set;
}
    
+ (NSArray<ChallengeItem *> *) items:(NSDictionary *)dictionary forKey:(NSString *)key {
    NSArray<ChallengeItem *> *itemsArray = [dictionary objectForKey:key];
    
    NSMutableArray<ChallengeItem *> *result = [[NSMutableArray alloc] init];
    
    for (NSDictionary *itemDictionary in itemsArray) {
        ChallengeItem *item = [[ChallengeItem alloc] init];
        item.icon = itemDictionary[@"icon"];
        item.name = itemDictionary[@"name"];
        
        [result addObject:item];
    }
    
    return result;
}

    
- (void) switchToBets {
    self.currentSet = self.bets;
    
    NSLog(@"switchToBets: %@", self.currentSet);
    
    [self resetFilter];
}
    
- (void) switchToGames {
    self.currentSet = self.games;
    
    NSLog(@"switchToGames: %@", self.currentSet);
    
    [self resetFilter];
}
    
- (void) switchToPlayers {
    self.currentSet = self.players;
    
    NSLog(@"switchToPlayers: %@", self.currentSet);
    
    [self resetFilter];
}
    
- (void) clearSet {
    self.currentSet = nil;
}
    
- (void) resetFilter {
    self.filter = @"";
}
    
- (void) clearFilter {
    self.filter = nil;
}
    
- (BOOL) hasCurrentSet {
    return self.currentSet != nil;
}
    
- (BOOL) hasFilter {
    BOOL hasFilter = self.filter != nil;
    
    NSLog(@"hasFilter: %d", hasFilter);
    
    return hasFilter;
}
    
- (void) appendFilter:(NSString *)filter {
    NSLog(@"appendFilter: %@", filter);
    
    if ([filter isEqualToString:@"@"]) {
        return;
    }
    
    if ([filter isEqualToString:@"!"]) {
        return;
    }
    
    if ([filter isEqualToString:@"$"]) {
        return;
    }
    
    if (![filter isEqualToString:@" "]) {
        self.filter = [NSString stringWithFormat:@"%@%@", self.filter, filter];
    }
    else {
        self.filter = nil;
    }
}
    
- (NSArray<ChallengeItem *> *)filteredItems {
    NSMutableArray<ChallengeItem *> *result = [[NSMutableArray alloc] init];
    
    NSString *extraFilter = @"";
    
    if (self.currentSet == self.bets) {
        extraFilter = @"$";
    }
    
    if (self.currentSet == self.games) {
        extraFilter = @"!";
    }
    
    if (self.currentSet == self.players) {
        extraFilter = @"@";
    }
    
    extraFilter = [NSString stringWithFormat:@"%@%@", extraFilter, self.filter];
    
    if (self.currentSet) {
        for (ChallengeItem *item in self.currentSet) {
            NSLog(@"filteredItems: %@", item);
            NSLog(@"extraFilter: %@", extraFilter);
            NSLog(@"filter: %@", self.filter);
            
            if ([self.filter length] == 0 || [item.name hasPrefix:self.filter] || [item.name hasPrefix:extraFilter]) {
                [result addObject:item];
            }
        }
    }
    
    return result;
}

@end

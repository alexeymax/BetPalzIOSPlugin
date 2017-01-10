//
//  UIView+LayoutUtils.m
//  TodaysParent
//
//  Created by Maxim Kulik on 10/28/16.
//  Copyright © 2016 Briskmobile. All rights reserved.
//

#import "UIView+LayoutUtils.h"

@implementation UIView (LayoutUtils)

- (void)addConstraintsToFillSuperview {
  NSDictionary *views = @{@"self": self};
  
  NSMutableArray *constraints = [NSMutableArray array];
  
  [constraints addObjectsFromArray:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|[self]|" options:0 metrics:nil views:views]];
  [constraints addObjectsFromArray:[NSLayoutConstraint constraintsWithVisualFormat:@"V:|[self]|" options:0 metrics:nil views:views]];
  
  [NSLayoutConstraint activateConstraints:constraints];
}

- (void)addConstraintsToFillViewWithTopLayoutGuide:(id<UILayoutSupport>)topLayoutGuide bottomLayoutGuide:(id<UILayoutSupport>)bottomLayoutGuide {
  NSDictionary *views = @{@"self": self,
                          @"topLayoutGuide": topLayoutGuide,
                          @"bottomLayoutGuide": bottomLayoutGuide};
  
  NSMutableArray *constraints = [NSMutableArray array];
  
  [constraints addObjectsFromArray:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|[self]|" options:0 metrics:nil views:views]];
  [constraints addObjectsFromArray:[NSLayoutConstraint constraintsWithVisualFormat:@"V:[topLayoutGuide][self][bottomLayoutGuide]" options:0 metrics:nil views:views]];
  
  [NSLayoutConstraint activateConstraints:constraints];
}


@end

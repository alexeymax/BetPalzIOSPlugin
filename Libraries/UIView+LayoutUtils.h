//
//  UIView+LayoutUtils.h
//  TodaysParent
//
//  Created by Maxim Kulik on 10/28/16.
//  Copyright © 2016 Briskmobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (LayoutUtils)

- (void)addConstraintsToFillSuperview;

- (void)addConstraintsToFillViewWithTopLayoutGuide:(id<UILayoutSupport>)topLayoutGuide bottomLayoutGuide:(id<UILayoutSupport>)bottomLayoutGuide;

@end

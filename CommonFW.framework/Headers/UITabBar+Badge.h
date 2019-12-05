//
//  UITabBar+Badge.h
//  NewRefactorEasyCar
//
//  Created by 张凯翔 on 2018/3/21.
//  Copyright © 2018年 张凯翔. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBar (Badge)
/**
 显示小红点
 
 @param index item
 */
- (void)showBadgeOnItemIndex:(int)index;

/**
 隐藏小红点
 
 @param index item
 */
- (void)hidenBadgeOnItemIndex:(int)index;

@end

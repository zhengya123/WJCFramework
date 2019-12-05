//
//  WJC_SpaceLoadingView.h
//  baseapp
//
//  Created by zkml on 2018/4/26.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WJC_SpaceLoadingView : UIView

@property (nonatomic, strong) UILabel     * messageLabel;

+ (WJC_SpaceLoadingView *)shareView;

- (void)showWithMessage:(NSString *)message;
- (void)hidens;
@end

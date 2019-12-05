//
//  ExitView.h
//  baseapp
//
//  Created by zkml on 2018/5/10.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ExitDelegate <NSObject>
- (void)exitClicks:(NSString *)types;

@end
@interface ExitView : UIView

@property (nonatomic, strong) UIView   * baseView;
@property (nonatomic, strong) UILabel  * titlelabel;
@property (nonatomic, strong) UILabel  * describeLabel;
@property (nonatomic, strong) UIButton * cacelBtn;
@property (nonatomic, strong) UIButton * exitBtn;
@property (nonatomic, assign) id<ExitDelegate>delegate;

+ (ExitView *)shareView;
- (void)show:(id<ExitDelegate>)delegate
       title:(NSString *)titleStr
 describeStr:(NSString *)describe
  leftBtnStr:(NSString *)leftStr
 rightBtnStr:(NSString *)rightStr
        type:(NSString *)types;

- (void)hidens;
@end

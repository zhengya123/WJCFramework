//
//  verificationLabelView.h
//  baseapp
//
//  Created by zkml on 2018/5/10.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol verificationLabelDelegate <NSObject>

- (void)verificationBtnClicks;
- (void)verificationTextFields:(UITextField *)textField;

@end
@interface verificationLabelView : UIView

@property (nonatomic, strong) UITextField  * textField;
@property (nonatomic, strong) UILabel      * leftLabel;
@property (nonatomic, strong) UIView       * lineView;
@property (nonatomic, strong) UIButton     * rightBtn;
@property (nonatomic, strong) UIView       * endwaylineView;
@property (nonatomic, assign) id<verificationLabelDelegate>delegate;

- (instancetype)initWithFrame:(CGRect)frame
                   PlaceHodel:(NSString *)placeholder
                         Font:(CGFloat)font
                         left:(NSString *)leftlabel
                        right:(NSString *)rightImg
                         type:(NSString *)pressType
                     delegate:(id<verificationLabelDelegate>)delegate;

- (void)beginCountDowns:(NSInteger)countDown;
@end

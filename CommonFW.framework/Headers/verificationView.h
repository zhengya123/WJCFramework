//
//  verificationView.h
//  baseapp
//
//  Created by zkml on 2018/4/24.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol verificationDelegate <NSObject>

- (void)verificationBtnClick;
- (void)verificationTextField:(UITextField *)textField;

@end

@interface verificationView : UIView

@property (nonatomic, strong) UITextField  * textField;
@property (nonatomic, strong) UIImageView  * leftImg;
@property (nonatomic, strong) UIView       * lineView;
@property (nonatomic, strong) UIButton     * rightBtn;
@property (nonatomic, strong) UIView       * endwaylineView;
@property (nonatomic, assign) id<verificationDelegate>delegate;

- (instancetype)initWithFrame:(CGRect)frame
                   PlaceHodel:(NSString *)placeholder
                         Font:(CGFloat)font
                         left:(NSString *)leftImg
                        right:(NSString *)rightImg
                         type:(NSString *)pressType
                     delegate:(id<verificationDelegate>)delegate;

- (void)beginCountDown:(NSInteger)countDown;
@end

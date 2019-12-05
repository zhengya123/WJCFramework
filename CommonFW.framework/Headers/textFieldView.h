//
//  textFieldView.h
//  baseapp
//
//  Created by zkml on 2018/4/23.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol textFieldDelegateLength <NSObject>

- (void)StrLength:(UITextField *)textField;

@end

@interface textFieldView : UIView

@property (nonatomic, strong) UITextField  * textField;
@property (nonatomic, strong) UIImageView  * leftImg;
@property (nonatomic, strong) UIView       * lineView;
@property (nonatomic, strong) UIButton     * rightBtn;
@property (nonatomic, assign) id<textFieldDelegateLength>delegate;

- (instancetype)initWithFrame:(CGRect)frame
                   PlaceHodel:(NSString *)placeholder
                         Font:(CGFloat)font
                         left:(NSString *)leftImg
                        right:(NSString *)rightImg
                         type:(NSString *)pressType
                   righthiden:(BOOL)ishiden
                     delegate:(id<textFieldDelegateLength>)delegate;
@end

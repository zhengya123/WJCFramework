//
//  UITextField+LimitLength.h
//  WJC_User_APP
//
//  Created by 郑亚 on 2018/8/23.
//  Copyright © 2018年 郑亚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (LimitLength)

/** 最大输入长度 */
@property (nonatomic, assign) NSInteger maxInputLenght;
/**
 *  使用时只要调用此方法，加上一个长度(int)，就可以实现了字数限制,配合tools中的方法  可以支持汉字。汉字占2个长度
 *
 *  @param length
 */
- (void)limitTextLength:(int)length;
/**
 *  uitextField 抖动效果
 */
- (void)shake;
@end

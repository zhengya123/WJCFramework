//
//  NSString+AttribuString.h
//  WJC_User_APP
//
//  Created by 郑亚 on 2018/12/13.
//  Copyright © 2018 郑亚. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSString (AttribuString)

/*************************
 * 创建富文本
 */
- (NSMutableAttributedString *)stringWithParaphlineSpeaceSelf;
/********************************************************************
 *  设置段落样式
 *  lineSpacing 行高
 *  textcolor      字体颜色
 *  font              字体
 *
 *  返回富文本字体
 *******************************************************************/
-(NSAttributedString *)stringWithParagraphlineSpeace:(CGFloat)lineSpacing
                                           textColor:(UIColor *)textcolor
                                            textFont:(UIFont *)font ;




/********************************************************************
 *  返回包含关键字的富文本编辑
 *
 *  @param lineSpacing 行高
 *  @param textcolor   字体颜色
 *  @param font        字体
 *  @param KeyColor    关键字字体颜色
 *  @param KeyFont     关键字字体
 *  @param KeyWords    关键字数组
 *
 *  @return
 ********************************************************************/
-(NSAttributedString *)stringWithParagraphlineSpeace:(CGFloat)lineSpacing
                                           textColor:(UIColor *)textcolor
                                            textFont:(UIFont *)font
                                    withKeyTextColor:(UIColor *)KeyColor
                                             keyFont:(UIFont *)KeyFont
                                            keyWords:(NSArray *)KeyWords;

//"使用stringWithParagraphlineSpeace: NormalAttributeFC: withKeyTextColor:KeyAttributeFC:");

/********************************************************************
 *  返回包含关键字的富文本编辑
 *
 *  @param lineSpacing 行高
 
 *
 *  @return
 ********************************************************************/
-(NSAttributedString *)stringWithParagraphlineSpeace:(CGFloat)lineSpacing
                                   NormalAttributeFC:(NSDictionary *)NormalFC
                                    withKeyTextColor:(NSArray *)KeyWords
                                      KeyAttributeFC:(NSDictionary *)keyFC ;



/********************************************************************
 *  计算富文本字体高度
 *
 *  lineSpeace 行高
 *  param font              字体
 *  param width            字体所占宽度
 *
 *  @return 富文本高度
 ********************************************************************/
-(CGFloat)HeightParagraphSpeace:(CGFloat)lineSpeace withFont:(UIFont*)font AndWidth:(CGFloat)width;


- (NSString *)URLEncodedString;
-(CGFloat)getSpaceLabelHeightwithSpeace:(CGFloat)lineSpeace withFont:(UIFont*)font withWidth:(CGFloat)width;
@end

NS_ASSUME_NONNULL_END

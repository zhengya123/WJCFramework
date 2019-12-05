//
//  CommonTool.h
//  Agriculture
//
//  Created by zkml on 2018/4/20.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
//#import "UserProductListModel.h"
typedef NS_ENUM(NSUInteger, GradientType)
{
    GradientTypeTopToBottom = 0,//从上到下
    GradientTypeLeftToRight = 1,//从左到右
};

@interface CommonTool : NSObject

//RGB颜色
UIColor * colorWithRGBString(NSString *stringToConvert);

//由颜色生成图片
UIImage * createImageWithColor(UIColor* color,CGFloat height);

//将两个图片合成一张图片
UIImage * addImage(UIImage * image1,UIImage * image2);

//将两种颜色合并成一张渐变的图片
UIImage * getGradientImageFromColors(NSArray* colors,GradientType gradientType,CGSize imgSize);
//根据URL获取某一帧的图片
UIImage * thumbnailImageForVideo(NSURL * videoURL,NSTimeInterval time);
UIImage * getVideoPreViewImage(NSString * url);
//根据字体获取字符串宽度
CGFloat stringWithSize(NSString * string,CGFloat font);

//获取字符串高度
CGFloat heightWithString(NSString * string,CGFloat fontSize,CGFloat width,CGFloat lineheight);

CGFloat PhoneNavHeigh(void);
 //状态栏高度
CGFloat NavStateHeight(void);

//tableView iphoneX 需减掉 底部高度
CGFloat IphoneXBottomHeight(void);
//获取视频时长
CGFloat getVideoLength(NSURL * URL);
CGFloat getFileSize(NSString * path);
int * dateTimeDifferenceWithStartTime(NSString *startTime,NSString *endTime);
//将数组转JSON
NSString * arrayToJSONString(NSArray *array);
//过滤掉空白字符串和回车
NSString * stringWithSpaceOrChange(NSString * inputStr);

NSInteger getNowWeek(void);

//获取当前时间（根据时间格式）
NSString * getNowDateWithStyle(NSString * style);
//日期转NSDate
NSDate * nsstringConversionNSDate(NSString * dateStr,NSString * style);
//NSDate转字符串
NSString * dateConversionNSString(NSDate * date,NSString * style);
//获取到计算机元年的时间
NSString * timeSince1970(NSString * timeStr,NSString * style);
//将时间戳转成时间格式
NSString * timeTo1970(NSString * timeStr,NSString * style);

#pragma mark - 获取时-分-秒
NSString * transformToShortTime(NSString * time);
#pragma mark - 获取年-月-日
NSString * transfortToDate(NSString * time);
//时间转时分秒
NSString * dealTheTime(NSString * duration);
NSString * getRegistrationID(void);
NSString * reviseString(NSString *string);
id isEmptyNum(NSNumber * num);
//判断字段是否为空
id isEmpty(NSString * str);
//判断手机号码格式是否正确
BOOL isValidateMobile(NSString *mobile);
//判断身份证号是否正确
BOOL checkIDCard(NSString * identityCard);
//是否是6-19位数字和字母
BOOL judgePassWordLegal(NSString * pass);
//是否只含有数字和字母
BOOL deptIdInputShouldAlphaNum(NSString * inputText);
//字符数长度
int convertToInt(NSString * strtemp);
//是否为空
BOOL notNull(id val);
//汉子或英文
BOOL isChinesecharacter(NSString *string);
CGFloat countW(NSString * s);
//是否含有表情
BOOL stringContainsEmoji(NSString * string);

//阴影
void addShadowToView(UIView * view,float shadowOpacity,CGFloat shadowRadius,CGFloat cornerRadius);
void addShadow(UIView * view);
//抛物线
void throwObject(UIView * obj,CGPoint start,CGPoint end,CGFloat height,CGFloat duration);

NSDictionary * readLocalFileWithName(NSString * name);
NSDictionary * StringToDic(NSString * jsonString);
NSString * objArrayToJSON(NSArray * array);
NSString * dictionaryToJSONString(NSDictionary * dictionary);

void shakerAnimation (UIView *view ,NSTimeInterval duration,float height);

//设置label富文本展示（字体、行间距）
NSAttributedString * attributeSetContent(NSString * contentStr, CGFloat SizeFont, CGFloat Lineheight,NSTextAlignment aliment);

//UILabel更改某些字颜色
NSMutableAttributedString  * changeSomeText(NSString * result,NSString * str,UIColor * color );


//model 转 dic
NSDictionary *dicFromObject(NSObject * object);
id arrayOrDicWithObject(id origin);

//获取当前日期所在周次开始与截止时间
void getMonthBeginAndEndWith(NSDate * newDate,NSString ** startT,NSString ** endT);
//获取从开始日期往后的q日期集合
NSArray * getDatesWithStartDate(NSString * startDate,int DayNum);

NSString * getTheDayOfTheWeekByDateString(NSString * dateString);
@end

//
//  UserInfoModel.h
//  baseapp
//
//  Created by 郑亚 on 2018/10/23.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserInfoModel : NSObject

-(void)setParameter:(NSDictionary *)userData;
+ (void)clearUserInfo;


//token
+ (NSString *)token;
//用户名
+ (NSString *)UserName;
//password
+ (NSString *)Password;
//用户ID
+ (NSString *)UserID;
//真实姓名
+ (NSString *)RealName;
//昵称
+ (NSString *)NickName;
//手机号
+ (NSString *)UserPhone;
//头像
+ (NSString *)UserIcon;
//账户状态 USEABLE(可用)/FREEZE(冻结)
+ (NSString *)Status;
//是否是企业管理员账号
+ (NSString *)isMajor;
//是否是基地管理员
+ (NSString *)isBaseManager;
//是否是农户
+ (NSString *)isFarmer;
//单位代码
+ (NSString *)OrganNo;
//地区ID
+ (NSString *)AreaId;
//单位/基地主键
+ (NSString *)OrganId;
//单位角色类型
+ (NSString *)RoleType;
//是否登录
+ (NSString *)isLogin;

+ (NSArray *)rolesArr;



//剪切板存储的数据
+ (NSString *)UIPasteboardString;


@end

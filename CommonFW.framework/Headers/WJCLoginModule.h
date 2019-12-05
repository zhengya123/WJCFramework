//
//  WJCLoginModule.h
//  CanteenFW
//
//  Created by 郑亚 on 2019/12/3.
//  Copyright © 2019 郑亚. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^SuccessLoginBlock) (id responseObject);

typedef void (^FailedLoginBlock) (id error);

@interface WJCLoginModule : NSObject

/*
@parameter
 未登录时调用模块需要调此接口获取登录信息
 authId     authId
 icon       用户头像地址
 realName   真实姓名
 organName  单位名称
 deptName   部门名称
*/
+ (void)setparameter:(NSDictionary *)dic
             success:(SuccessLoginBlock)successBlocks
              failed:(FailedLoginBlock)failedBlocks;


//清除用户数据
+ (void)clearUserInfo;

@end

NS_ASSUME_NONNULL_END

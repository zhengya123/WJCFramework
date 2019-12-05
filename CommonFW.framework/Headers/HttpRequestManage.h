//
//  HttpRequestManage.h
//  YingshiVideo
//
//  Created by 中商国际 on 2018/2/28.
//  Copyright © 2018年 中商国际. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WJC_LoadingView.h"

typedef NS_ENUM(NSInteger,loadingType){
    loadingDefault = 0,//没用
    loadingimage,
    loadingCoding
};
typedef void (^SuccessBlock) (id responseObject);

typedef void (^FailedBlock) (id error);
@interface HttpRequestManage : NSObject

/** 判断当前网络是否可用 **/
+ (BOOL)networkIsOK;

/** Post 请求 */
+(void)PostHttpDataWithUrlStr:(NSString *)url
                          Dic:(NSDictionary *)dicArr
                  ShowLoading:(BOOL)showLoading
                  LoadingType:(loadingType)loadingType
                 SuccessBlock:(SuccessBlock)successBlock
                 FailureBlock:(FailedBlock)failureBlock;

/** Post 请求 */
+(void)UpVersionPostHttpDataWithUrlStr:(NSString *)url
                          Dic:(NSDictionary *)dicArr
                  ShowLoading:(BOOL)showLoading
                  LoadingType:(loadingType)loadingType
                 SuccessBlock:(SuccessBlock)successBlock
                 FailureBlock:(FailedBlock)failureBlock;

/** Get 请求 */
+(void)GetHttpDataWithUrlStr:(NSString *)url
                         Dic:(NSDictionary *)dic
                 ShowLoading:(BOOL)showLoading
                 LoadingType:(loadingType)loadingType
                SuccessBlock:(SuccessBlock)successBlock
                FailureBlock:(FailedBlock)failureBlock;


/** Post 上传图片,视频 */
+(void)PostHttpDataWithPicInfo:(NSArray *)picinfo
                        UrlStr:(NSString *)url
                           Dic:(NSDictionary *)dic
                   ShowLoading:(BOOL)showLoading
                   LoadingType:(loadingType)loadingType
                  SuccessBlock:(SuccessBlock)successBlock
                  FailureBlock:(FailedBlock)failureBlock;



@end

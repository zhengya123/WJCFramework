//
//  gloable.h
//  baseapp
//
//  Created by 郑亚 on 2018/6/27.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#ifdef DEBUG
#define ZYLog(format, ...) printf("[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#else
#define ZYLog(format, ...)
#endif

//计算视图大小
#define kSize(r) (([UIScreen mainScreen].bounds.size.width < 400)?(375.0/1080.0*(r)):(412.0/1080.0*(r)))
//屏幕的宽度
#define ScreenWidth  [UIScreen mainScreen].bounds.size.width
//屏幕的高度
#define ScreenHeight [UIScreen mainScreen].bounds.size.height

//适配比例
#define proportion(r) [UIScreen mainScreen].bounds.size.width/320 * r
#define PROPORTION [UIScreen mainScreen].bounds.size.width/320
//由px到pt
#define kFont(r) (([UIScreen mainScreen].bounds.size.width < 400)?(375.0/1080.0*(r)):(412.0/1080.0*(r)))

#define BaseBGColor   @"#f5f5f5"
//字体颜色
#define TextColorSix  @"#666666"
#define TextColor     @"#202020"
#define TextnameColor @"#404040"
#define grayTextColor @"#999999"
#define TextViewColor @"#c3c3c8"
#define GrayColor     @"#cccccc"
//按钮颜色
#define BtnColor      @"#00b868"
#define BtnPressColor @"#07ac64"
#define BtnNotClickColor     @"#ddffee"
#define BtnNotClickTextColor @"#b1ecd2"
//字体颜色
#define navColor       @"#ffffff"
#define GardenNavColor @"#0ed9a2"
#define RedColor       @"#ff4400"
#define YellowColor    @"#FFA200"
//线的颜色
#define OnelineColor   @"#dddddd"
//cell线条颜色
#define cellLineColor [UIColor colorWithRed:239/255.0 green:238/255.0 blue:234/255.0 alpha:1.0]
//验证码长度
#define VerificationNumLength 6
//手机号长度
#define PhoneNumLength 11
//密码最长
#define PasswordNumLengthMax 19
//密码最短
#define PasswordNumLengthMin 6
//行间距
#define labellingHeight 5
//网络请求时间
#define API_netTime 20.0f
#define tabbarHeight ((KIsiPhoneXS_MAX==YES || KIsiPhoneX ==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs == YES) ? 83.0 : 49.0)
#define IphoneXBottom 34

#define FontS(A) ((A) <= (320) ? (14) : (16))
#define LoginOutMsg     @"您的账号已在其他另一台设备登录，如非本人操作，请尽快登录修改密码"
#define NetConnectBed   @"当前网络不可用"
#define NetRequestBed   @"请求出错"
#define BuyNumOut       @"数量超出范围"

#define WJC_PlaceImg             @"CommonImg.bundle/zkml_error_imgScan_New"
#define WJC_UserPasteStr_Left    @"<￥"
#define WJC_UserPasteStr_right   @"￥>"
//通知
#define NotesLoginClick           @"NotesLoginClick"
#define NotesAddressList          @"NotesAddressList"
#define NotesAddressListFresh     @"NotesAddressListFresh"
#define NotesUserMeList           @"NotesUserMeList"
#define NotesUserPoverty          @"NotesUserPoverty"
#define NotesUserOrderPayList     @"NotesUserOrderPayList"
#define NotesUserOrderSureGoods   @"NotesUserOrderSureGoods"
#define NotesUserOrderAllList     @"NotesUserOrderAllList"
#define NotesUserCountryList      @"NotesUserCountryList"
#define NotesUserPush             @"NotesUserPush"
#define NotesUserPushMainVC       @"NotesUserPushMainVC"
#define NotesUserLoginLost        @"NotesUserLoginLost"
#define NotesUserCountryAttention @"NotesUserCountryAttention"
#define NotesUserJumpAPPWithParameter @"NotesUserJumpAPPWithParameter"
#define NotesUserPastedboard      @"NotesUserPastedboard"
#define APPDelegateDefaultNotes @"APPDelegateDefaultNotes"//app在没启动的情况下存储推送信息dic

#define NotesUserAlipay_result    @"NotesUserAlipay_result"
#define NotesUserWeChatpay_result @"NotesUserWeChatpay_result"
#define NotesUserOrderChange      @"NotesUserOrderChange"//我的订单界面同界面之间跳转
#define NotesLoginOut             @"NotesLoginOut"
#define NotesUserOrderRefundApply @"NotesUserOrderRefundApply"

#define NotesUserSearchResult     @"NotesUserSearchResult"
#define NotesUserPayResult        @"NotesUserPayResult"
#define NotesThreeTouch           @"NotesThreeTouch"//3DTouch
#define NotesMerchantDataResult   @"NotesMerchantDataResult"
#define NotesMerchantScrollNotes  @"NotesMerchantScrollNotes"
#define NotesMerchantScrollNotesTWO @"NotesMerchantScrollNotesTWO"
#define NotesMerchantCartNum      @"NotesMerchantCartNum"
#define NotesMerchantDataSource   @"NotesMerchantDataSource"//购物车隐藏时同步数据
#define NotesMerchantSubZero      @"NotesMerchantSubZero"//购物车数量减为0时的通知
#define NotesMerchantThrowImg     @"NotesMerchantThrowImg"//购物车抛物线通知
#define NotesMerchantDetail       @"NotesMerchantDetail"//订餐详情点击通知
#define NotesMerchantDetailDate   @"NotesMerchantDetailDate"

#define NotesOrderJumpType        @"NotesOrderJumpType"//支付成功后跳转到某种订单分类
#define KIsiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define KIsiPhoneXS_MAX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)

#define IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO)
//判断iPhoneXs
#define IS_IPHONE_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define NavHeight

#import "CommonTool.h"
#import "IQKeyboardManager.h"
#import "UIButton+EnlargeTouchArea.h"
#import "WJC_LoadingView.h"
#import "WJC_SpaceLoadingView.h"
#import "MessageView.h"
#import "UIImageView+WebCache.h"
#import "TableViewRefreshMethod.h"
#import "MJRefresh.h"
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "wjcYFLookImageView.h"
#import "UIButton+badge.h"
#import "TextFieldLineView.h"
#import "FJFTextInputIntercepter.h"
#import "WJCBaseViewController.h"
#import "ZYAddressPicker.h"
#import "PositionPickerView.h"
//#import "UserOrderLabelView.h"
//#import "UserLookLogisticsVC.h"
#import "UITextField+LimitLength.h"
#import "NSString+AttribuString.h"
#import "Masonry.h"
#import "SecRetCodeFunc.h"
#import "UINavigationController+FDFullscreenPopGesture.h"
#import "NSString+Entension_NSString.h"
//#import "ProductInfoNotesShareView.h"
#import "UncaughtExceptionHandler.h"
//#import "ExitOneBtnView.h"
#import "ExitView.h"
#import "WJC_NoDataView.h"
#import "UserInfoModel.h"
#import "WJCNavRootViewController.h"
#define DEMO_CALL 1



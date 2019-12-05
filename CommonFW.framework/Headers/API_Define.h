//
//  API_Define.h
//  baseapp
//
//  Created by zkml on 2018/4/25.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface API_Define : NSObject

#define HOST    @"http://wjc.zkwjsq.com:8182"
#define Realm   @"http://wjc.zkwjsq.com:8181"


//#define HOST     @"http://10.5.4.32:2201"
//#define Realm    @"http://10.5.4.32:2202"

#define APPStoreID  @"1477779614"

//接口版本号
#define API_Version @"v1"

//微信支付及分享APPID
#define WeChatAPPID @"wxa31d17b475f6c1fc"

#define kUrlScheme  @"AlipayWanjiacunUser"

//协议
#define AppProtocol @"/uploadFile/yhxy.html"

//广告页
#define APPIconImg               @"mvc/app/init"

//络易行获取用户信息
#define APPLXYInfo               @"mvc/app/login/getUserInfo"
//图片上传
#define API_uploadImg            @"mvc/app/image/uploadImg"
//登录
//#define POST_Login             @"m_user_login"
#define API_Login                @"mvc/app/login/doLogin"
//忘记密码发送验证码
//#define POST_Send_Yanzhengma   @"forgot_pwd"
#define API_Send_Yanzhengma      @"mvc/app/userInfo/getChangePwdAuthCode"
//忘记密码重置密码
//#define POST_resetpassword     @"reset_pwd_by_phone"
#define API_resetPassword        @"mvc/app/userInfo/doUpdatePassword"
//注册获取验证码
//#define POST_Regist_Yanzhengma @"gen_mobile_registercode"
#define API_Regist_Yanzhengma    @"mvc/app/userInfo/getRegisterAuthCode"
//注册接口
//#define POST_Regist            @"mobile_reg"
#define API_Regist               @"mvc/app/userInfo/doRegister"
//更换手机号获取旧手机号验证码
//#define POST_getOldYanzhengma  @"gen_mobile_resetrcode"
#define API_getOldYanzhengma     @"mvc/app/userInfo/getChangePhoneAuthCode"
//检测旧手机号验证码
//#define POST_confirm_code      @"confirm_code"
#define API_confirm_code         @"mvc/app/userInfo/confirmOldPhone"
//修改手机号
//#define POST_ResetMobile       @"reset_mobile"
#define API_SaveResetMobile      @"mvc/app/userInfo/doUpdatePhone"
//修改密码
//#define POST_ReSetPassword     @"reset_pwd_by_user"
#define API_ReSetPassword        @"mvc/app/userInfo/resetPasswordByUser"
//修改头像
//#define POST_ChangeAvatar      @"mod=membergarden&con=members&act=setUserIcon"
#define API_updateIcon           @"mvc/app/userInfo/doUpdateIcon"
//订单列表
//#define POST_OrderList         @"m_user_order_list"
#define API_OrderList            @"mvc/app/order/orderList2"

//加入单位
#define API_CheckAddOrgan        @"mvc/app/user/joinOrganStatus"
//根据单位ID获取该单位部门树
#define API_GetDeptTree          @"mvc/app/dept/getDeptTreeByOrganId"
//加入单位
#define API_JoinOrgan            @"mvc/app/user/joinOrgan"

//老版本接口
//#define API_OrderList         @"mvc/app/order/orderList"
//取消订单
//#define POST_Order_Cancel      @"order_cancel"
#define API_Order_Cancel         @"mvc/app/order/cancelOrder"
//确认收货
//#define POST_Order_Confirm     @"order_confirm"
#define API_Order_Confirm        @"mvc/app/order/confirmOrder"
//订单详情
//#define POST_OrderDetailInfo   @"order_detail"
#define API_OrderDetailInfo      @"mvc/app/order/orderDetail"
//订单支付
//#define POST_OrderToPay        @"order_pay"
#define API_OrderToPay           @"mvc/app/order/orderPay"
//预订订单支付
#define API_CorPorate_OrderToPay @"mvc/app/mealsOrder/orderPay"
//物流信息
//#define POST_Order_express     @"order_express"
/**
 * 我的
 */
//退出登录
//#define POST_LoginOut          @"login_out"
//意见反馈
//#define POST_addSuggest        @"add_feedback"
#define API_addSuggest         @"mvc/app/userInfo/addFeedback"
//修改昵称
//#define POST_resetNickName     @"reset_nickname"
#define API_resetNickName      @"mvc/app/userInfo/updateNickName"
//查看积分以及订单数据接口
//#define POST_UserPoint         @"get_user_point"
#define API_UserOrderCount     @"mvc/app/order/orderCount"
//收货地址
//#define POST_AddressList       @"address_list"
#define API_AddressList        @"mvc/app/address/addressList"
//设置默认收货地址
//#define POST_defaultAddress    @"set_default_address"
#define API_defaultAddress     @"mvc/app/address/setDefaultAddress"
//删除收货地址
//#define POST_deleteAdress      @"del_address"
#define API_deleteAddress      @"mvc/app/address/deleteAddress"
//编辑保存收货地址
//#define POST_edit_Address      @"edit_address"
#define API_saveAddress        @"mvc/app/address/updateAddress"
//进入编辑界面获取收货信息
//#define POST_view_editaddress  @"view_address"
#define API_View_editAddress   @"mvc/app/address/addressInfo"
//新增收货地址
//#define POST_addAddress        @"add_address"
#define API_addAddress         @"mvc/app/address/addAddress"


//积分规则
#define POST_Intetegralrule    @"/wanjiacun/index/integralRule"
//兑换积分
#define POST_exchange_point    @"exchange_point"
/**
 * 首页
 */
//首页产品列表
//#define Home_ProductList             @"products_list"
#define API_Home_ProductList           @"mvc/app/product/userAppIndex"
//分类商品列表
#define API_Home_goodsList             @"mvc/app/product/goodList"
//商品详情
#define API_GetProductDetail           @"mvc/app/product/productInfo"
//企业福利商品详情
#define API_GetProduct_CorPorareDetail @"mvc/app/mealsOrder/productInfo"
//搜索专题
#define API_SearchSubList              @"mvc/app/organ/subject"
//添加商品到购物车
//#define Home_add_cart                @"add_cart"
#define API_add_cart                   @"mvc/app/cart/addCart"
//基地详情
//#define POST_GardenInfo        @"garden_info"

/**
 * 购物车
 */
//购物车列表
//#define POST_Cart_list         @"cart_list"
#define API_ShopCarList           @"mvc/app/cart/list"
//更新购物车数量
//#define POST_UPCartNum         @"up_cart"
#define api_UpCartNum             @"mvc/app/cart/updateCartCount"
//删除购物车商品
//#define POST_DeleteCartNum     @"del_cart"
#define API_DeleteCartNum         @"mvc/app/cart/deleteCartByIds"
//订单提交界面（确认订单）
//#define POST_Open_Order        @"open_order_view"
#define API_Open_sure_order       @"mvc/app/cart/openOrderView"
//创建订单
//#define POST_CreateOrder       @"create_order"
#define API_CreateOrder           @"mvc/app/order/createOrder"
//企业福利创建订单
#define API_CorPorateCreateOrder  @"mvc/app/mealsOrder/createBookingOrder"

/**
 * 我的乡村
 */
//关联的基地列表
//#define POST_MyFollerGardenList @"my_follow_list"
#define API_MyCountryList       @"mvc/app/organ/organList"
//关注与取消关注基地
#define API_AttentionMyCountry  @"mvc/app/organ/attentionOrgan"


/********************************老版本接口********************************/
//搜索基地的列表
#define POST_searchGardenList   @"new_garden_list"
//添加关联农庄
#define POST_addFollow          @"add_follow"
//取消关联村庄
#define POST_cancelFollow       @"cancel_follow"



//基地(农庄)详情
//#define POST_New_gardenInfo     @"new_garden_info"
#define API_NewOrganInfo          @"mvc/app/organ/organDetail"

//企业专供分类
#define API_WJCInPutType          @"mvc/app/mealsOrder/categoryTree"
//企业福利说明
#define API_CorporateWelfareDes   @"mvc/app/order/welfareStatement"
//退款申请
#define API_RefundApply           @"mvc/app/emall/refund/apply"
//撤销退款
#define API_cancelRefund          @"mvc/app/emall/refund/cancel"
//退款详情
#define API_RefundDetail          @"/mvc/app/emall/refund/detail"
//查询线下支付进度
#define API_FindOfflinePayRecord  @"/mvc/app/order/findOfflinePayRecord"
//提交线下支付银行回执单
#define API_SaveOfflinePayRecord  @"/mvc/app/order/saveOfflinePayRecord"
//线下支付公司账户信息
#define API_OffLineCompanyInfo    @"/mvc/app/order/offlinePayInfo"
//立即购买
#define API_AtOncePayment         @"mvc/app/cart/quickOrder"


//智慧食堂单位列表
#define API_MerchanOrganList      @"/mvc/app/mealsOrder/organList"
//食堂商品列表
#define API_MerchanGoodsList      @"/mvc/app/mealsOrder/goodList"
//订餐商品加入购物车
#define API_MerchantUpDateCart    @"mvc/app/mealsOrder/addCanteenRecord"
//订餐商品删除购物车
#define API_MerchantDeleteCart    @"mvc/app/mealsOrder/deleteCanteenRecord"
//智慧食堂购物车
//#define API_MerchantShopCart      @"mvc/app/cart/cartListForDinner"
#define API_MerchantShopCart      @"mvc/app/mealsOrder/getCanteenRecordList"
//智慧食堂去结算
//#define API_MerchantOpenOrderV    @"mvc/app/cart/openOrderViewForDinner"
#define API_MerchantOpenOrderV     @"mvc/app/mealsOrder/openOrderViewForCanteen"
//智慧食堂创建订单
//#define API_MerchantCreateOrder   @"mvc/app/mealsOrder/createBookingOrder"
#define API_MerchantCreateOrder   @"mvc/app/mealsOrder/createCanteenOrder"
//智慧食堂支付成功回调
#define API_MerchantPaySuccess    @"mvc/app/mealsOrder/afterPay"
//智慧食堂取消订餐
#define API_MerchantCancelOrder   @"mvc/app/mealsOrder/cancelOrder"
//扫码取餐确认收货
//#define API_MerchantConfirmOrder  @"mvc/app/mealsOrder/confirmOrder"
#define API_MerchantConfirmOrder  @"mvc/app/scanQrcode"
//超时退餐接口
#define API_MerchantApplyRefund   @"mvc/app/mealsOrder/applyRefund"
//撤销申请
#define API_MerchantCancelApply   @"mvc/app/mealsOrder/cancelApply"
//智慧食堂订单列表
#define API_MerchantOrderList     @"mvc/app/mealsOrder/canteenOrderList"
//智慧食堂订单详情
#define API_MerchantOrderDetail   @"mvc/app/mealsOrder/orderDetail"


//消息
#define API_Notes_ActivityList    @"mvc/app/userMessage/activityList"
//交易物流
#define API_Notes_logiticsList    @"mvc/app/userMessage/trade"
//通知公告
#define API_Notes_notesList       @"mvc/app/userMessage/system"
//一键已读
#define API_Notes_readAll         @"mvc/app/userMessage/readAll"
//更新消息已读状态
#define API_Notes_updateStatus    @"mvc/app/userMessage/updateReadStatus"

@end

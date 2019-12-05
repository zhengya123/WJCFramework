//
//  ZYAddressPicker.h
//  WJC_User_APP
//
//  Created by 郑亚 on 2018/8/8.
//  Copyright © 2018年 郑亚. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ZYAddressPickerDelegate <NSObject>
@optional
/** 代理方法返回省市区*/
- (void)ZYAddressPickerWithProvince:(NSString *)province
                               city:(NSString *)city area:(NSString *)area;
/** 取消代理方法*/
- (void)ZYAddressPickerCancleAction;
@end
@interface ZYAddressPicker : UIView

/** 省 */
@property (nonatomic, strong) NSString *province;
/** 市 */
@property (nonatomic, strong) NSString *city;
/** 区 */
@property (nonatomic, strong) NSString *area;
@property (nonatomic, weak) id<ZYAddressPickerDelegate> delegate;
- (void)updateAddressAtProvince:(NSString *)province city:(NSString *)city town:(NSString *)town;
/** 内容字体 */
@property (nonatomic, strong) UIFont *font;


@end

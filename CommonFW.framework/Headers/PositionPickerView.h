//
//  positionPickerView.h
//  LocationDemo
//
//  Created by 张凯翔 on 17/3/14.
//  Copyright © 2017年 张凯翔. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PositionPickerViewDelegate <NSObject>

- (void) submitSelectInfo:(NSDictionary *)dict;

@end

@interface PositionPickerView : UIView

- (instancetype)initWithAreaId:(NSString *)areaid;

- (void) show;

@property (nonatomic,assign) id<PositionPickerViewDelegate> delegate;

@property (nonatomic,copy) NSString *areaString;

@end

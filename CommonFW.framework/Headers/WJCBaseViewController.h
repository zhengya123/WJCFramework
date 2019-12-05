//
//  WJCBaseViewController.h
//  baseapp
//
//  Created by zkml on 2018/4/23.
//  Copyright © 2018年 zkml-zy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WJCBaseViewController : UIViewController

@property (nonatomic, strong) UIImageView * imageView;
@property (nonatomic, strong) UILabel     * describelabel;
@property (nonatomic, strong) UIButton     * retryBtn;


- (void) baseViewhiden:(BOOL)ishidens;

- (void)retryClicks;
@end



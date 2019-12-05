//
//  UIButton+EnlargeTouchArea.h
//  LeChangManage
//
//  Created by 中商国际 on 2017/12/18.
//  Copyright © 2017年 中商国际. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (EnlargeTouchArea)


- (void)setEnlargeEdge:(CGFloat)size;
- (void)setEnlargeEdgeWithTop:(CGFloat)top
                        right:(CGFloat)right
                       bottom:(CGFloat)bottom
                         left:(CGFloat)left;
@end

//
//  UIImage+Color.h
//  tableviewTest
//
//  Created by hzc on 2017/11/24.
//  Copyright © 2017年 黄章成. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Color)
// 根据颜色生成一张尺寸为1*1的相同颜色图片
+ (UIImage *)imageWithColor:(UIColor *)color;
@end

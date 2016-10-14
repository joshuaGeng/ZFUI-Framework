//
//  ZFUIButton.h
//  FrameworkProject
//
//  Created by 耿中飞 on 16/8/9.
//  Copyright © 2016年 JoshuaGeng. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  使 Button 图文排列更方便、更简单
 * 使用方法：#import <ZFUI/ZFUIButton.h>

 ZFUIButton *button = [[ZFUIButton alloc] initWithFrame:CGRectMake(10, 120, 120, 60)];
 [button setImage:[UIImage imageNamed:@"img"] forState:UIControlStateNormal];
 [button setTitle:@"Button" forState:UIControlStateNormal];
 button.backgroundColor = [UIColor orangeColor];
 button.btnImgRect = CGRectMake(10, 20, 30, 30);
 button.btnTitleRect = CGRectMake(0, 20, 120, 30);
 [self.view addSubview:button];

 */
@interface ZFUIButton : UIButton

/**
 *  button 上 title 的位置和大小
 */
@property(nonatomic, assign) CGRect btnTitleRect;

/**
 *  button 上 图片 的位置和大小
 */
@property(nonatomic, assign) CGRect btnImgRect;

@end

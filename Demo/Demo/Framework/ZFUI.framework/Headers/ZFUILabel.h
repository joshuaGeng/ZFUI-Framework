//
//  ZFUILabel.h
//  FrameworkProject
//
//  Created by 耿中飞 on 16/8/9.
//  Copyright © 2016年 JoshuaGeng. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
  根据文本内容填充宽高 类似于Android wrap_content
  是否可以复制
 */
@interface ZFUILabel : UILabel

/**
 *  让Label 可以根据文本内容填充宽高 类似于Android wrap_content
 *  注意书写时，这个方法最好调用，文字大小和一些属性会影响宽高
 *  @param text  Label 文字
 *  @param frame 当宽高设置为0 时，自适应宽高
 *  例子： #import <ZFUI/ZFUILabel.h>
 ZFUILabel *label = [[ZFUILabel alloc] init];
 label.numberOfLines = 0;
 label.backgroundColor = [UIColor greenColor];
 [label setLabelText:@"HelloWorld" andWithFrame:CGRectMake(100, 70, 0, 0)];
 [self.view addSubview:label];
 */
-(void)setLabelText:(NSString *)text andWithFrame:(CGRect)frame;

/**
 *  UILabel 是否可以长按复制 YES 长按复制
 */
@property(nonatomic,assign) BOOL isCanCopy;

/**
 *  长按复制的文字，适配多语言情况 默认：复制
 *  例子：
    label.isCanCopy = YES;
    label.titleCopy = @"Copy";
 */
@property(nonatomic, copy) NSString *titleCopy;

/**
 *  设置不同颜色
 *
 *  @param allStr    显示全部的string
 *  @param allColor  显示全部的颜色
 *  @param diffStr   对应需要设置不同颜色的string
 *  @param diffColor 对应需要设置不同颜色的color
 */
- (NSMutableAttributedString *) setAttributeColorWithAllStr:(NSString *)allStr andAllColor:(UIColor *)allColor andWithDiffStr:(NSString *)diffStr andDiffColor:(UIColor *)diffColor;

@end

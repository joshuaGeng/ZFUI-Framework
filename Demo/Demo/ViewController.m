//
//  ViewController.m
//  Demo
//
//  Created by JoshuaGeng on 16/10/14.
//  Copyright © 2016年 JoshuaGeng. All rights reserved.
//

#import "ViewController.h"

#import <ZFUI/ZFUI.h> // ZFUI

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor grayColor];
    
    [self initUI];
}

#pragma mark - init UI
-(void)initUI {
    
    ZFUILabel *label = [[ZFUILabel alloc] init];
    label.numberOfLines = 0;
    label.backgroundColor = [UIColor greenColor];
    [label setLabelText:@"HelloWorld" andWithFrame:CGRectMake(100, 70, 0, 0)];
//    label.isCanCopy = YES;
//    label.titleCopy = @"Copy";
    // 设置不同颜色
    [label setAttributeColorWithAllStr:label.text andAllColor:[UIColor redColor] andWithDiffStr:@"World" andDiffColor:[UIColor blackColor]];
    
    [self.view addSubview:label];
    
    
    // button
    ZFUIButton *button = [[ZFUIButton alloc] initWithFrame:CGRectMake(100, 120, 120, 60)];
    [button setImage:[UIImage imageNamed:@"img"] forState:UIControlStateNormal];
    [button setTitle:@"Button" forState:UIControlStateNormal];
    button.backgroundColor = [UIColor orangeColor];
    button.btnImgRect = CGRectMake(10, 20, 22, 21);
    button.btnTitleRect = CGRectMake(50, 20, 120, 30);
    [self.view addSubview:button];

}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

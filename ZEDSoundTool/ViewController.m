//
//  ViewController.m
//  ZEDSoundTool
//
//  Created by 超李 on 2017/11/29.
//  Copyright © 2017年 ZED. All rights reserved.
//

#import "ViewController.h"
#import "ZEDSoundTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (IBAction)play:(UIButton *)sender {
    [[ZEDSoundTool sharedSoundTool] playSoundWithName:@"voip.mp3"];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

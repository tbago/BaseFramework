//
//  ViewController.m
//  BaseFrameworkDemo
//
//  Created by tbago on 16/12/23.
//  Copyright © 2016年 tbago. All rights reserved.
//

#import "ViewController.h"
#import <Base/BaseFramework.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSLog(@"%@", getDocumentDirectory());
    
    NSLog(@"%@", getCacheDirectory());
    
    NSLog(@"%@", getApplicationSupportDirectory());
    
    NSLog(@"%@", getTempDirectory());
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

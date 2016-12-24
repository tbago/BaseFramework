//
//  ViewController.m
//  BaseFrameworkDemo
//
//  Created by tbago on 16/12/23.
//  Copyright © 2016年 tbago. All rights reserved.
//

#import "ViewController.h"
#import <BaseFramework/BaseFramework.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSLog(@"%@", getDocumentDirectory());
    
    NSLog(@"%@", getCacheDirectory());
    
    NSLog(@"%@", getApplicationSupportDirectory());
    
//    NSError *error = nil;
//    createDirectoryIfNotExists(getApplicationSupportDirectory(), error);
  
    NSString *ipAddress = getDeviceIPAddress();
    NSLog(@"%@", ipAddress);
    
    NSLog(@"disc space:%zd bytes, %@", getDiskFreeSize(), getReadableDiscFreeSpace());
    
    NSLog(@"wifi value:%@", getCurrentWifiSSID());
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

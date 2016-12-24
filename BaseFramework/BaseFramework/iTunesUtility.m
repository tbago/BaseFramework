//
//  iTunesUtility.m
//  BaseFramework
//
//  Created by tbago on 16/12/24.
//  Copyright © 2016年 tbago. All rights reserved.
//

#import "iTunesUtility.h"
#import <UIKit/UIApplication.h>

void openAppStoreByiTunesId(NSString * iTunesId) {
    NSString *iTunesLink = [NSString stringWithFormat:@"itms-apps://itunes.apple.com/WebObjects/MZStore.woa/wa/viewSoftware?id=%@", iTunesId];
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:iTunesLink]];
}

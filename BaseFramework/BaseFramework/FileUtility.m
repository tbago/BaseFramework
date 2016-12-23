//
//  FileUtility.m
//  BaseFramework
//
//  Created by tbago on 16/12/23.
//  Copyright © 2016年 tbago. All rights reserved.
//

#import "FileUtility.h"

#pragma mark - App dicectory operation

NSString * getDocumentDirectory() {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    return paths[0];
}

NSString * getTempDirectory() {
    return NSTemporaryDirectory();
}

NSString * getCacheDirectory() {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
    return paths[0];
}

NSString * getApplicationSupportDirectory() {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSApplicationSupportDirectory, NSUserDomainMask, YES);
    return paths[0];
}
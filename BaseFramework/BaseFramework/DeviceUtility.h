//
//  DeviceUtility.h
//  BaseFramework
//
//  Created by tbago on 16/12/24.
//  Copyright © 2016年 tbago. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Get Device type name string
 *
 *  @return device type name
 */
NSString *getDeviceTypeName();

/**
 *  Check weather the current device is iPad(iPad Air, iPad Pro, iPad Mini)
 *
 *  iPad Mini               1024*768
 *  iPad Air                2048*1536
 *  9.7-inch iPad Pro       2048*1536
 *  12.9-inch iPad Pro      2732*2048
 *
 *  @return weather is iPad device
 */
BOOL isIPadDevice();

/**
 *  Check weather the current device is iPad Pro 12.9-inch
 *  iPad Pro 12.9 inch has different aspect ratio between other iPad device.
 *  @return weather is iPad Pro device
 */
BOOL isIPadPro12Point9InchDevice();

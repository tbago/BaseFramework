//
//  DateUtility.m
//  BaseFramework
//
//  Created by tbago on 16/12/24.
//  Copyright © 2016年 tbago. All rights reserved.
//

#import "DateUtility.h"
#import "NSDateAndNSStringConversion.h"

NSDate *getUTCDateFromDate(NSDate * localDate) {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    
    NSTimeZone *timeZone = [NSTimeZone timeZoneWithName:@"UTC"];
    NSLocale *locale = [[NSLocale alloc] initWithLocaleIdentifier:@"en"];
    [dateFormatter setTimeZone:timeZone];
    [dateFormatter setLocale:locale];
    
    NSString *dateFormat = @"yyyy-MM-dd HH:mm:ss";
    [dateFormatter setDateFormat:dateFormat];
    NSString *dateString = [dateFormatter stringFromDate:localDate];
    
    return convertNSStringToNSDate(dateString, dateFormat);
}
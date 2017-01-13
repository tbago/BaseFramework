//
//  TrackingLog.h
//  BaseFramework
//
//  Created by tbago on 17/1/13.
//  Copyright © 2017年 tbago. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 *  For tracking app runing log info
 *  This object is Singleton Object, only generate one single tracking log file in path
 *  The default log path is in app document with file name tracking.log
 */

@interface TrackingLog : NSObject

+ (instancetype)sharedInstance;

- (BOOL)initTrackingLog:(BOOL) enableTrackingLog
                newFile:(BOOL) newFile;

- (void)logOneInfoWithFormat:(NSString *)format, ... ;
@end

#ifndef TRACK_BEGIN
#define TRACK_BEGIN [[TrackingLog sharedInstance]                                           \
                    logOneInfoWithFormat:@"track begin file:%s function:%s line:%d",        \
                    __FILE__,                                                               \
                    __FUNCTION__,                                                           \
                    __LINE__];                                                              
#endif

#ifndef TRACK_END
#define TRACK_END [[TrackingLog sharedInstance]                                            \
                    logOneInfoWithFormat:@"track end file:%s function:%s line:%d",         \
                    __FILE__,                                                              \
                    __FUNCTION__,                                                          \
                    __LINE__];
#endif


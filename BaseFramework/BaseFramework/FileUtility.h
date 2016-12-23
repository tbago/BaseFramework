//
//  FileUtility.h
//  BaseFramework
//
//  Created by tbago on 16/12/23.
//  Copyright © 2016年 tbago. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - App dicectory operation
///< app document https://developer.apple.com/library/content/documentation/FileManagement/Conceptual/FileSystemProgrammingGuide/FileSystemOverview/FileSystemOverview.html
/**
 *  Get App document directory
 *  Use this directory to store user-generated content. The contents of this directory can be made available to the user through file sharing; therefore, his directory should only contain files that you may wish to expose to the user.
 *  The contents of this directory are backed up by iTunes and iCloud.
 *  @return app document directory
 */
NSString * getDocumentDirectory();

/**
 *  Get App temp directory
 *  Use this directory to write temporary files that do not need to persist between launches of your app. Your app should remove files from this directory when they are no longer needed; however, the system may purge this directory when your app is not running.
 *  The contents of this directory are not backed up by iTunes or iCloud.
 *  @return app temp directory
 */
NSString * getTempDirectory();

/**
 *  Get App Library/Cache directory
 *  Use this directory to write any app-specific support files that your app can re-create easily. Your app is generally responsible for managing the contents of this directory and for adding and deleting files as needed.
 *  In iOS 2.2 and later, the contents of this directory are not backed up by iTunes or iCloud. In addition, the system removes files in this directory during a full restoration of the device.
 *  In iOS 5.0 and later, the system may delete the Caches directory on rare occasions when the system is very low on disk space. This will never occur while an app is running. However, be aware that restoring from backup is not necessarily the only condition under which the Caches directory can be erased.
 *  @return app cache directoy
 */
NSString * getCacheDirectory();

/**
 *  Get App Library/Application Support directory
 *  Use this directory to store all app data files except those associated with the user’s documents. For example, you might use this directory to store app-created data files, configuration files, templates, or other fixed or modifiable resources that are managed by the app. An app might use this directory to store a modifiable copy of resources contained initially in the app’s bundle. A game might use this directory to store new levels purchased by the user and downloaded from a server.
 *  All content in this directory should be placed in a custom subdirectory whose name is that of your app’s bundle identifier or your company.
 *  In iOS, the contents of this directory are backed up by iTunes and iCloud.
 *
 *  @return app application support directory
 */
NSString * getApplicationSupportDirectory();
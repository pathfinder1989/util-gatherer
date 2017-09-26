//
//  MSDevice.h
//  MSRequestDemo
//
//  Created by meishi on 29/08/2017.
//  Copyright © 2017 Kangbo. All rights reserved.
//

#import <Foundation/Foundation.h>

/**设备信息的一些封装 */
@interface MSDevice : NSObject


/** 是否是iPad */
+ (BOOL)isIPad;

/** 设备系统版本号 */
+ (NSString *)systemVersion;

/** app版本号 */
+ (NSString *)appShortVersion;
/** appbuild版本号 */
+ (NSString *)appBuildVersion;
/** app名字 */
+ (NSString *)appName;
@end

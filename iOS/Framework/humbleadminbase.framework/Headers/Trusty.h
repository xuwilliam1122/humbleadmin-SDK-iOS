//
//  Trusty.h
//  humbleadminbase
//
//  Created by HRWY on 15/12/11.
//  Copyright © 2015年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Trusty 可信ID 登出以及持有的 手机号码 和 AuthToken
 */
@interface Trusty : NSObject

/**
 *  获取当前持有的手机号码
 *
 *  @return 返回手机号码字符串
 */
+ (NSString *)getPhoneNumber;

/**
 *  获取当前的 AuthToken 信息
 *
 *  @return 返回当前的 AuthToken 字符串
 */
+ (NSString *)getAuthToken;

/**
 *  登出，并清除获取到的 AuthToken
 */
+ (void)logout;


@end

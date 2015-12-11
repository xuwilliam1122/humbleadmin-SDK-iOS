//
//  Trusty.h
//  humbleadminbase
//
//  Created by HRWY on 15/12/11.
//  Copyright © 2015年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Trusty.h"

/**
 *  可信 ID 登录类
 */
@interface TrustySMS : Trusty

/**
 *  短信验证码登录请求
 *
 *  @param phoneNumber 输入手机号码
 *  @param status      返回的状态
 */
+ (void)authenticateWithSMSCode:(NSString *)phoneNumber
                     completion:(void(^)(NSString *status))status;


/**
 *  短信链接登录请求
 *
 *  @param phoneNumber 手机号码
 *  @param status      返回的状态
 */
+ (void)authenticateWithSMSURL:(NSString *)phoneNumber
                    completion:(void(^)(NSString *status))status;


/**
 *  验证码验证的请求
 *
 *  @param code   验证码
 *  @param status 返回的状态
 */
+ (void)verify:(NSString *)code
    completion:(void(^)(NSString *status))status;






@end
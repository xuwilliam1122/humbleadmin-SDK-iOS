//
//  TrustyForgotPassword.h
//  humbleadminbase
//
//  Created by HRWY on 16/1/18.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Trusty.h"

/**
 *  用户密码找回类
 */
@interface TrustyForgotPassword : Trusty

/**
 *  忘记密码
 *
 *  @param accounts 用户账号，邮箱或者手机号码
 *  @param status   返回请求状态
 */
+ (void)forgotPassword:(NSString *)accounts completion:(void(^)(NSString *status))status;

/**
 *  重置密码
 *
 *  @param newPassword 新的密码
 *  @param code        由忘记密码所返回的验证码
 *  @param status      返回的请求状态
 */
+ (void)resetPassword:(NSString *)newPassword code:(NSString *)code completion:(void(^)(NSString *status))status;

@end

//
//  HAWithDefaultView.h
//  humbleadminbaseUI
//
//  Created by humbleadmin on 16/1/12.
//  Copyright © 2016年 humbleadmin. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  可信 ID UI 接口
 */
@interface TrustyKit : NSObject

/**
 *  使用 SDK 封装的 UI 进行短信验证码登录
 */
+ (void)smsLoginWithDeafultUI;

/**
 *  使用 SDK 封装的 UI 进行用户名密码登录
 */
+ (void)customLoginWithDefaultUI;

/**
 *  使用 SDK 封装的 UI 进行用户名密码注册
 */
+ (void)registerWithDefaultUI;

/**
 *  使用 SDK 封装的 UI 进行找回密码
 */
+ (void)forgotPwdWithDefaultUI;

@end

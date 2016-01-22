//
//  HAWithDefaultView.h
//  humbleadminbaseUI
//
//  Created by lichang on 16/1/12.
//  Copyright © 2016年 humbleadmin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TrustyKit : NSObject

/**
 *  使用 SDK 封装的 UI 进行用户名密码登录
 */
+ (void)loginWithDefaultView;

/**
 *  使用 SDK 封装的 UI 进行用户名密码注册
 */
+ (void)registerWithDefaultView;

/**
 *  使用 SDK 封装的 UI 进行短信验证码登录
 */
+ (void)authenticateWithDefaultView;

/**
 *  使用 SDK 封装的 UI 进行找回密码
 */
+ (void)retrievePwdWithDefaultView;

@end

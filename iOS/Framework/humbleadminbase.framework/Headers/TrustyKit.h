//
//  HAWithDefaultView.h
//  humbleadminbaseUI
//
//  Created by humbleadmin on 16/1/12.
//  Copyright © 2016年 humbleadmin. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  SDK UI 接口类
 */
@interface TrustyKit : NSObject

/**
 *  使用 SDK 封装的界面进行短信验证码登录
 */
+ (void)smsLoginWithDeafultUI;

/**
 *  DUL 短信验证码登录的默认按钮
 *  按钮样式为系统默认样式，开发者可以自定义按钮位置
 *
 *  @return 短信验证码登录默认按钮
 */
+ (UIButton *)smsLoginButton;

@end

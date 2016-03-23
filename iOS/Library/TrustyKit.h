//
//  HAWithDefaultView.h
//  humbleadminbaseUI
//
//  Created by humbleadmin on 16/1/12.
//  Copyright © 2016年 humbleadmin. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  TrustyKit 是「可信用户系统」的 UI 接口类。
 *
 *  在使用「可信用户系统」时，直接调用该类中的方法，即可在开发者的项目中添加 UI 界面，从而间化接口的调用。
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

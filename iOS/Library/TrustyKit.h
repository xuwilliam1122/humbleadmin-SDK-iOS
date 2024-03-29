//
//  HAWithDefaultView.h
//  humbleadminbase
//
//  Created by humbleadmin on 16/1/12.
//  Copyright © 2016年 humbleadmin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TrustyAuthConfig.h"
#import "TrustyAppearance.h"

/**
 *  TrustyKit 是「可信用户系统」的 UI 接口类。
 *
 *  在使用「可信用户系统」时，直接调用该类中的方法，即可在开发者的项目中添加 UI 界面，从而简化接口的调用。
 */
@interface TrustyKit : NSObject

#pragma mark 短信验证码登录

/**
 *  返回一个默认样式的 UIButton, 点击后进行短信验证码登录过程，当登录成功或失败时会调用 completionBlock。
 *  开发者可以自行定义按钮的各种属性。
 *
 *  @param completionBlock Block 会在登录完成后执行，包含登录的结果。
 *  @return 用于短信验证码登录的默认按钮。
 */
+ (UIButton *)smsLoginButton:(TrustyAuthenticationCompletion)completionBlock;

/**
 *  以 SDK 中默认的界面进行短信验证码登录。
 *
 *  @param completionBlock Block 会在登录完成后执行，包含登录的结果。
 */
+ (void)smsLoginWithCompletion:(TrustyAuthenticationCompletion)completionBlock;

+ (void)LoginWithCompletion:(TrustyAuthenticationCompletion)completionBlock;

///**
// *  可以以用户自定义界面进行短信验证码登录。
// *
// *  @param appearance      设置界面和控件的各种属性，详见：TrustyAppearance.h。传入空即使用默认界面登录。
// *  @param completionBlock Block 会在登录完成后执行，包含登录的结果。
// */
//+ (void)smsLoginWithCustomUI:(TrustyAppearance *)appearance
//                  completion:(TrustyAuthenticationCompletion)completionBlock;

#pragma mark 用户名密码登录

/**
 *  用户密码登录。
 *
 *  @param completionBlock Block 会在登录完成后执行，包含登录的结果。
 */
//+ (void)usernameLoginWithCompletion:(TrustyAuthenticationCompletion)completionBlock;

///**
// *  用户密码登录。
// *
// *  @param appearance      设置界面和控件的各种属性，详见：TrustyAppearance.h。传入空即使用默认界面登录。
// *  @param completionBlock Block 会在登录完成后执行，包含登录的结果。
// */
//+ (void)usernameLoginWithCustomUI:(TrustyAppearance *)appearance
//                       completion:(TrustyAuthenticationCompletion)completionBlock;

#pragma mark 账户注册

/**
 *  账号注册。
 *
 *  @param completionBlock Block 会在注册完成后执行，包含登录的结果。
 */
//+ (void)registerWithCompletion:(TrustyAuthenticationCompletion)completionBlock;

///**
// *  账号注册。
// *
// *  @param appearance      设置界面和控件的各种属性，详见：TrustyAppearance.h。传入空即使用默认界面登录。
// *  @param completionBlock Block 会在注册完成后执行，包含登录的结果。
// */
//+ (void)registerWithCustomUI:(TrustyAppearance *)appearance
//                  completion:(TrustyAuthenticationCompletion)completionBlock;

@end

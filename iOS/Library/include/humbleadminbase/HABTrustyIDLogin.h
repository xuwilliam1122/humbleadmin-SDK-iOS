//
//  HABTrustyIDLogin.h
//  humbleadminbase
//
//  Created by HRWY on 15/4/14.
//  Copyright (c) 2015年 HRWY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HABTrustyIDLogin : UIView
{
}

/****************************** 初始化 ***********************************/

/**
 *  初始化 TrustyID
 *  @param  appID           传入自身的 AppID
 *  @param  appSecret       传入由服务器获取的 AppSecret
 *  @return 返回初始化对象
 */
- (id)init:(NSString *)appID appSecret:(NSString *)appSecret;

/****************************** 短信请求 ***********************************/

/**
 *  发起短信链接登录的请求
 *  @param phoneNumber      传入手机号码
 */
- (void)HABLinkLogin:(NSString *)phoneNumber;

/**
 *  发起短信验证码登录的请求
 *  @param phoneNumber      传入手机号码
 */
- (void)HABFetchSecurityCode:(NSString *)phoneNumber;

/**
 *  在发起请求过程中，取消申请的方法
 */
- (void)HABStopRequest;

/****************************** web OpenID ***********************************/

/**
 *  获取 OpenID
 */
- (void)HABGetOpenID;

/**
 *  必须有服务器获取 OpenID
 */
- (void)HABGetOpenIDFromServer;

/****************************** SSO ***********************************/

/**
 *  SSO 登录请求，由第三方 App 发出
 *  @param URLScheme    本地设置的 URL Type 即 openid
 */
- (void)HABSSOLogin:(NSString *)URLScheme;

/**
 *  提供信息的 App 端返回到申请 Token 的第三方 App 的方法
 *  @param openURL      传入的 openURL
 */
- (void)HABReturnApp:(NSURL *)openURL;

/**
 *  第三方客户端 在获取到 SSO 返回信息后调用，从而到服务器进行验证
 *  @param openURL      传入的 openURL
 *  @return 返回的是 是否可以进行 SSO
 */
- (BOOL)HABSSOReturnToken:(NSURL *)openURL;



/****************************** 工具方法 ***********************************/

/**
 *  验证码登录
 *  @param securityCode      输入验证码
 *  @return 返回验证码是否正确
 */
- (NSString *)HABSecurityCodeLogin:(NSString *)securityCode;

/**
 *  重置 Token
 */
- (void)HABResetToken;

/**
 *  获取设备信息
 */
- (void)HABFetchInfor;

/**
 *  设置一个白名单的 App ID,不设置的话会默认调用 appoen
 *  @param  AppID       设置白名单的一个 AppID
 */
- (void)HABSetWhiteListAppID:(NSString *)AppID;

/**
 *  设置输出等级
 *  @param      LogLevel        传入的输出等级，目前有 3 级，越高输出信息越多，0 为不输出
 */
- (void)HABSetLogLevel:(int)LogLevel;

/**
 *  只有 SSO 可以调用的，主动查询 Token 的方法
 *  @return     返回 Token 或 说明的字符串
 */
- (NSString *)HABFetchSSOToken;

@end
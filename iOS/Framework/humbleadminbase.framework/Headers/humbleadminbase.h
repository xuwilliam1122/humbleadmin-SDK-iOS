//
//  humbleadminbase.h
//  humbleadminbase
//
//  Created by HRWY on 15/4/14.
//  Copyright (c) 2015年 HRWY. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  登录类别
 */
typedef NS_ENUM(NSInteger, loginType)
{
    /// 短信链接登录
    link_login = 0,
    /// 验证码登录
    security_code_login = 1
};

/// 接口类
@interface humbleadminbase : UIView

/****************************** 初始化 ***********************************/

/**
 *  初始化 TrustyID
 *  @param  appID           传入自身的 AppID
 *  @param  appSecret       传入自身的 AppSecret
 *  @return 返回初始化对象
 */
+ (humbleadminbase *)sharedHumbleadminbase:(NSString *)appID appSecret:(NSString *)appSecret;


/****************************** 短信请求 ***********************************/

/**
 *  可信 ID 登录的请求
 *  @param phoneNumber      传入手机号码
 *  @param loginType        登录的请求类型
 *  @param status           block 中返回的请求状态
 */
+ (void)HABTrustyIDLogin:(NSString *)phoneNumber
               loginType:(loginType)loginType
              completion:(void(^)(NSString *status))status;



/******************************* 验证 ************************************/

/**
 *  验证码登录
 *  @param securityCode      输入验证码
 *  @return 返回验证码是否正确
 */
+ (NSString *)HABSecurityCodeLogin:(NSString *)securityCode;


/**
 *  重置 Token
 */
+ (void)HABResetToken;


/* 下面这些是根 SSO 有关的方法接口，如果只单单有短信请求，上面那四个接口即可 */
/****************************** SSO ***********************************/

/**
 *  SSO 登录请求，由第三方 App 发出
 *  @param URLSchema    本地设置的 URL Type 即 openid
 */
+ (void)HABSSOLogin:(NSString *)URLSchema;

/**
 *  提供信息的 App 端返回到申请 Token 的第三方 App 的方法
 *  @param openURL      传入的 openURL
 */
+ (void)HABReturnApp:(NSURL *)openURL;

/**
 *  第三方客户端 在获取到 SSO 返回信息后调用，从而到服务器进行验证
 *  @param openURL      传入的 openURL
 *  @return 返回的是 是否可以进行 SSO
 */
+ (void)HABSSOReturnToken:(NSURL *)openURL completion:(void(^)(NSString *token))token;


/****************************** 工具 ***********************************/

/**
 *  设置一个白名单的 App ID,不设置的话会默认调用 “appone”
 *  @param  AppID       设置白名单的一个 AppID
 */
+ (void)HABSetWhiteListAppID:(NSString *)AppID;

@end
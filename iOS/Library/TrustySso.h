//
//  loginBySso.h
//  humbleadminbase
//
//  Created by HRWY on 15/12/10.
//  Copyright © 2015年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Trusty.h"
/**
 *  SSO 登录类
 */
@interface TrustySso : Trusty

/**
 *  SSO 登录请求
 *
 *  @param urlSchema 本地 URL Type 中设置的 装有本 SDK 的其他项目
 */
+ (void)loginBySso:(NSString *)urlSchema;


/**
 *  携带信息并跳回进行 SSO 登录请求的 App
 *
 *  @param openURL SSO 登录请求时传过来的 openURL
 */
+ (void)returnRequestApp:(NSURL *)openURL;


/**
 *  验证 SSO 登录
 *
 *  @param openURL 向第三方 App 请求 SSO 登录是，跳回 App 所携带的 openURL 信息
 *  @param token   返回 SSO 登录所获取到的 AuthToken
 */
+ (void)verifySSO:(NSURL *)openURL completion:(void(^)(NSString *token))token;


/**
 *  在 SDK 中设置 SSO 登录白名单
 *
 *  @param AppSchema 在白名单中添加的 App Schema
 */
+ (void)setWhiteList:(NSString *)AppSchema;


@end

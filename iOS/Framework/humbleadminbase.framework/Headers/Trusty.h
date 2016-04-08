//
//  Trusty.h
//  humbleadminbase
//
//  Created by LiChen on 16/3/2.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TrustySession.h"

/**
 * Trusty 是「拙政云 -- 可信用户系统」的主类，提供全局安全设置的静态方法。
 *
 * 在使用「拙政云」前，需要在 `application:didFinishLaunchingWithOptions:` 中调用 setAppID:appSecret: 进行全局安全设置。
 */
@interface Trusty : NSObject

#pragma mark - Trusty 的单例及 TrustySession 属性获取
/**
 *  @name 单例
 */
/**
 *  获取 Trusty 单例对象。
 *
 *  @return `Trusty` 的单例对象。
 */
+ (Trusty *)sharedInstance;

/**
 *  @name 属性
 */
/**
 *  获取被持久化存储的 TrustySession 对象。
 * 「可信用户系统」会持久化存储当前有效的登录会话，即使重新打开 App，也能通过该方法取回会话。
 *
 *  @return `TrustySession` 对象。
 */
- (TrustySession *)currentSession;

/**
 *  获取被持久化存储的 `TrustyUser` 对象。
 *
 * 「可信用户系统」会持久化存储当前登录成功的用户，即使重新打开 App，也能通过该方法取回用户信息。
 *
 *  @return `TrustyUser` 对象。
 */
- (TrustyUser *)currentUser;

#pragma mark -
#pragma mark - 安全设置

/**
 *  @name 全局安全设置
 */
/**
 *  @brief 对「可信用户系统」进行全局安全信息设置。
 *
 *  @param appID     应用的「APP ID」，当你[创建应用](http://open.humbleadmin.io)后，可以在 控制台 --> 设置 --> 安全设置 里找到应用对应的「APP ID」。
 *  @param appSecret 应用的「APP SECRET」，当你[创建应用](http://open.humbleadmin.io)后，可以在 控制台 --> 设置 --> 查看Secret 里找到应用对应的「APP SECRET」。
 */
+ (void)setAppID:(NSString *)appID appSecret:(NSString *)appSecret;

/**
 *  @brief 获取「APP ID」。
 *
 *  @return 存储的「APP ID」，如未设置则返回空字符串。
 */
+ (NSString *)getAppID;

/**
 *  @brief 获取「APP SECRET」。
 *
 *  @return 存储的「APP SECRET」，如未设置则返回空字符串。
 */
+ (NSString *)getAppSecret;

@end
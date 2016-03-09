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
 可信 ID 接口类
 */
@interface Trusty : NSObject

/**
 *  单例方法实例化对象
 *
 *  @return 返回实例化对象
 */
+ (Trusty *)sharedInstance;

/**
 *  获取 Session 信息
 *
 *  @return 返回 session 信息
 */
- (TrustySession *)session;

/**
 *  启动项目第一时间初始化这里，在此处传入由服务器获取到的信息
 *
 *  @param appID     appID
 *  @param appSecret appSecret
 */
+ (void)setAppID:(NSString *)appID appSecret:(NSString *)appSecret;

/**
 *  获取 AppID 值
 *
 *  @return AppID 值
 */
+ (NSString *)getAppID;

/**
 *  获取 App Secret 值
 *
 *  @return 返回 App 的算子值
 */
+ (NSString *)getAppSecret;

/**
 *  设置 App 自身的 URL Schema
 *
 *  @param appSchema 传入获取到的 URL Schema 信息
 */
+ (void)setAppSchema:(NSString *)appSchema;

/**
 *  获取 App Schema 值
 *
 *  @return App Schema 值
 */
+ (NSString *)getAppSchema;

/**
 *  设置 App 自身的 USCOpenIDPort
 *
 *  @param USCOpenIDPort 由网站获取的 USC OpenID Port 值传入到 SDK
 */
+ (void)setUSCOpenIDPort:(NSString *)USCOpenIDPort;

/**
 *  获取 USC OpenID Port 值
 *
 *  @return USC OpenID Port 值
 */
+ (NSString *)getUSCOpenIDPort;

@end

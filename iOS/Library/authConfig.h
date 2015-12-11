//
//  HABAuthConfig.h
//  humbleadminbase
//
//  Created by HRWY on 15/12/9.
//  Copyright © 2015年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 固定属性类,所有值由服务器抄录过来,第一时间传入即可
@interface authConfig : NSObject

/**
 *  启动项目第一时间初始化这里，在此处传入由服务器获取到的信息
 *
 *  @param appID     appID
 *  @param appSercet appSercet
 */
+ (void)setAppID:(NSString *)appID appSercet:(NSString *)appSercet;

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



@end

//
//  TrustySession.h
//  humbleadminbase
//
//  Created by LiChen on 16/3/7.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TrustyAuthConfig.h"
#import "TrustyUser.h"

/**
 *  通过 `TrustySession`，你的 App 同服务器进行通信，并完成绝大多数的用户操作，如：注册、登录、鉴权。
 *
 *  `TrustySession` 不仅保存了用户系统功能的配置信息， 还保存了注册、登录、鉴权成功后的安全令牌、存储终端用户信息的对象。
 */
@interface TrustySession : NSObject

/**
 *  @name 初始化
 */
/**
 *  使用 TrustyAuthConfig 初始化一个 `TrustySession` 的对象。
 *
 *  @param  authConfig  配置对象。
 *
 *  @return             `TrustySession` 的对象。
 */
- (instancetype)initWithTrustyAuthConfig:(TrustyAuthConfig *)authConfig;

/**
 *  @name 登录、鉴权
 */
/**
 *  向服务器发起登录请求，根据 authConfig 属性的不同，请求的行为也将有所不同。
 *
 *  @param trustyUser 登录成功后，回调写入的 TrustyUser 对象。
 *  @param block      回调结果。
 */
- (void)authenticate:(TrustyUser *)trustyUser
               block:(TrustyBooleanResultBlock)block;

/**
 *  验证短信验证码。
 *
 *  验证成功后，authToken 将存储从服务器获取的安全令牌。
 *
 *  @param code       短信验证码。
 *  @param block      回调结果。
 */
- (void)authenticateVerify:(NSString *)code
                     block:(TrustyBooleanResultBlock)block;

/**
 *  登出当前终端用户。
 */
- (void)logout;

/**
 *  @name 属性
 */
/**
 *  登录成功后，服务器返回的安全令牌。
 */
@property (nonatomic, retain, readonly) NSString *authToken;

/**
 *  该会话正在使用的配置属性。
 */
@property (nonatomic, retain, readonly) TrustyAuthConfig *authConfig;

/**
 *  登录成功后，服务器返回的终端用户对象。
 */
@property (nonatomic, retain, readonly) TrustyUser *trustyUser;


@end
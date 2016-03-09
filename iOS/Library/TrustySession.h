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
 *  会话信息类
 */
@interface TrustySession : NSObject

/**
 *  SDK 的 AuthToken 信息
 */
@property (nonatomic, retain, readonly) NSString *authToken;

/**
 *  AuthConfig 对象的变量
 */
@property (nonatomic, retain, readonly) TrustyAuthConfig *authConfig;

/**
 *  TrustyUser 对象变量、
 
 */
@property (nonatomic, retain, readonly) TrustyUser *trustyUser;

/**
 *  对象实例化
 *
 *  @return 返回实例化对象
 */
- (instancetype)init;

/**
 *  用户登录接口
 *
 *  @param authConfig 传入的用户信息，即登录方式及终端用户手机号
 *  @param trustyUser 传入 TrustyUser 对象，请求成功时会对该对象属性进行赋值
 *  @param block      Block 返回的模块信息，包括 (BOOL succeeded, NSError *error)
 */
- (void)authenticate:(TrustyAuthConfig *)authConfig
          trustyUser:(TrustyUser *)trustyUser
               block:(TrustyBooleanResultBlock)block;

/**
 *  短信验证码方式登录的验证码验证的请求
 *
 *  @param code       验证码
 *  @param block      Block 返回的模块信息，包括 (BOOL succeeded, NSError *error)
 */
- (void)authenticateVerify:(NSString *)code
                     block:(TrustyBooleanResultBlock)block;

/**
 *  当前用户的登出
 */
- (void)logout;


@end

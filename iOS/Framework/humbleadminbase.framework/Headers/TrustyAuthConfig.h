//
//  AuthConfig.h
//  humbleadminbase
//
//  Created by HRWY on 15/12/9.
//  Copyright © 2015年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  「可信用户系统」提供的注册、登录、鉴权方式。
 */
typedef NS_ENUM(int, TrustyAuthenticateType)
{
    /**
     *  以短信验证码的方式。
     */
    TrustyAuthenticateTypeSMS = 0,    
};

/**
 *  `TrustyAuthConfig` 用来对「可信用户系统」进行配置。
 *
 *  根据 `TrustyAuthConfig` 的配置，「可信用户系统」在客户端呈现不同的业务逻辑或 UI 界面、操作。
 *
 *  你应该在开始同服务器进行通信、建立会话前，先配置好你的 `TrustyAuthConfig` 对象。
 */
@interface TrustyAuthConfig : NSObject

/**
 *  @name 初始化
 */
/**
 *  通过登录方式、用户名，初始化一个 `TrustyAuthConfig` 对象。
 *
 *  你可以在以后更改 `TrustyAuthConfig` 对象的登录方式和用户名属性。
 *
 *  `TrustyAuthConfig` 对象将被传递给 `TrustySession` 对象，以决定  `TrustySession` 的行为。
 *
 *  @return 一个新的 `TrustyAuthConfig` 对象。
 */
- (instancetype)init;

/**
 *  @name 配置属性
 */
/**
 *  注册、登录、鉴权方式。
 *
 *  @see TrustyAuthenticateType
 */
@property (nonatomic) TrustyAuthenticateType authenticateType;

/**
 *  终端用户的用户名。
 */
@property (nonatomic, retain) NSString *userName;

@end


/**
 *  @brief `TrustySession` 的回调，返回请求是否成功。
 *
 *  @param succeeded 是否成功。
 *  @param error     错误信息。
 */
typedef void (^TrustyBooleanResultBlock)(BOOL succeeded, NSError *error);

/**
 *  @brief `TrustySession` 的回调，返回请求是否成功，如果成功，返回存储结果的字典。
 *
 * @param dictionary    请求成功时返回的字典信息。
 * @param error         错误信息。
 */
typedef void (^TrustyDictionaryResultBlock)(NSDictionary * dictionary, NSError *error);





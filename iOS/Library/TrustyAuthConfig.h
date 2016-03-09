//
//  AuthConfig.h
//  humbleadminbase
//
//  Created by HRWY on 15/12/9.
//  Copyright © 2015年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * 用户登录的方式
 */
typedef NS_ENUM(int, TrustyAuthenticateType)
{
    /**
     *  短信验证码登录
     */
    TrustyAuthenticateTypeSMS = 0,
};

/// 固定属性类，所有值由服务器抄录过来，第一时间传入即可。
@interface TrustyAuthConfig : NSObject

/**
 *  终端用户的用户名，即手机号码
 */
@property (nonatomic, retain) NSString *userName;

/**
 *  设置登录的方式
 */
@property (nonatomic) int authenticateType;

/**
 *  实例化对象
 *
 *  @return 返回实例化对象
 */
- (instancetype)init;

/*!
 *  @brief    TrustySession 接口发起请求后返回的信息  Bool 值信息 和 Error 值的 Block 返回方式
 *
 *  @param succeeded 请求是否成功
 *  @param error     异常信息
 */
typedef void (^TrustyBooleanResultBlock)(BOOL succeeded, NSError *error);

/**
 *  返回字典值 和 Error 值的 Block 返回方式
 
   @param dict  请求成功时返回的字典信息
   @param error 异常信息
 
 */
typedef void (^TrustyDictionaryResultBlock)(NSDictionary * dict, NSError *error);


@end




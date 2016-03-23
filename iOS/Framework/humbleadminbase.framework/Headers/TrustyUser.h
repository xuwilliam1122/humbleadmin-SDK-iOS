//
//  UserPropertiesObject.h
//  humbleadminbase
//
//  Created by LiChen on 16/3/2.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  `TrustyUser` 是「可信用户系统」从服务器获取的「终端用户」在本地的持久化对象。
 *
 *  它具有一个最小可用的「终端用户」所需的成员属性：唯一且不变的 id、手机号码、邮箱等。
 *
 *  当然，你可以扩展这个类，增加你自己的用户属性、鉴权、注册、验证方法。
 *
 */
@interface TrustyUser : NSObject

/**
 *  @name 初始化方法
 */
/**
 *  初始化一个 `TrustyUser` 对象。
 *  将 `TrustyUser` 对象用于 TrustySession 的登录，当登录成功后，TrustySession 会填充 `TrustyUser` 对象的 [userID](#//api/name/userID)、[phoneNumber](#//api/name/phoneNumber)、[email](#//api/name/email) 等属性。
 *
 *  @return TrustyUser 对象
 */
- (instancetype)init;

/**
 *  @name 终端用户属性
 */
/**
 *  用户 ID，无论采用那种注册、登录、鉴权方式，「可信用户系统」都将为每一位终端用户分配唯一且不变的标识：userID。
 */
@property (nonatomic, retain, readonly) NSString *userID;

/**
 *  终端用户的手机号码，当「验证手机号码」功能开启时，服务器会向终端用户的手机发送一条六位数字的验证短信。验证码的有效期是十五分钟。
 */
@property (nonatomic, retain, readonly) NSString *phoneNumber;

/**
 *  终端用户的电子邮箱，当「验证邮箱」功能开启时，服务器会向终端用户的邮箱发送一封激活邮件。
 */
@property (nonatomic, retain, readonly) NSString *emailAddress;

@end

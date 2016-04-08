//
//  UserPropertiesObject.h
//  humbleadminbase
//
//  Created by LiChen on 16/3/2.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  可信 ID 对象类
 */
@interface TrustyUser : NSObject

/**
 *  用户的 UserID 信息
 */
@property (nonatomic, retain, readonly) NSString *userID;
/**
 *  用户的手机号码信息
 */
@property (nonatomic, retain, readonly) NSString *phoneNumber;
/**
 *  用户的邮箱信息
 */
@property (nonatomic, retain, readonly) NSString *emailAddress;

/**
 *  用户注册后得以用户名
 */
@property (nonatomic, retain, readonly) NSString *userName;

/**
 *  初始化对象
 *
 *  @return 返回初始化对象
 */
- (instancetype)init;

@end

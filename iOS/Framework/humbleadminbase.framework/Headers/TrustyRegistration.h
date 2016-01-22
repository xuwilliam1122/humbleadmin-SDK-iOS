//
//  TrustyRegistration.h
//  humbleadminbase
//
//  Created by HRWY on 16/1/8.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  用户注册类
 */
@interface TrustyRegistration : NSObject

/**
 *  由用户名密码注册
 *
 *  @param userName 用户名
 *  @param password 密码
 *  @param status   返回注册状态
 */
+ (void)registrationWithUserName:(NSString *)userName
                        password:(NSString *)password
                      completion:(void(^)(NSString *status))status;

@end

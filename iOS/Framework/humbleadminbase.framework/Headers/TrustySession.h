//
//  TrustySession.h
//  humbleadminbase
//
//  Created by HRWY on 16/1/11.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Trusty.h"

@interface TrustySession : Trusty

/**
 *  由用户名密码登录
 *
 *  @param userName 用户名
 *  @param password 密码
 *  @param status   返回登录状态
 */
+ (void)sessionWithUserName:(NSString *)userName
                   password:(NSString *)password
                 completion:(void(^)(NSString *status))status;

@end

//
//  TrustyUserInfo.h
//  humbleadminbase
//
//  Created by HRWY on 16/1/14.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Trusty.h"

/**
 *  开发者所填写的注册信息字符串
 */
// 个人基本信息
#define FULL_NAME                               @"fullname"
#define NICK_NAME                               @"nickname"
#define GENDER                                  @"gender"
#define DOB_DAY                                 @"dob_day"
#define DOB_MONTH                               @"dob_month"
#define DOB_YEAR                                @"dob_year"
#define EMAIL                                   @"email"
#define JOB_TITLE                               @"job_title"
// 电话信息
#define PHONE_HOME                              @"phone_home"
#define PHONE_MOBILE                            @"phone_mobile"
#define PHONE_WORK                              @"phone_work"
#define PHONE_FAX                               @"phone_fax"
// 个人住址
#define COUNTRY                                 @"country"
#define STATE                                   @"state"
#define CITY                                    @"city"
#define ADDRESS                                 @"address"
#define POSTCODE                                @"postcode"
#define ADDRESS_ADDITIONAL                      @"address_additional"
// 个人公司
#define COMPANY_NAME                            @"company_name"
#define COUNTRY_BUSINESS                        @"country_business"
#define STATE_BUSINESS                          @"state_business"
#define CITY_BUSINESS                           @"city_business"
#define ADDRESS_BUSINESS                        @"address_business"
#define POSTCODE_BUSINESS                       @"postcode_business"
#define ADDRESS_ADDITIONAL_BUSINESS             @"address_additional_business"
// 个人其他账号信息
#define IM_QQ                                   @"im_qq"
#define IM_WX                                   @"im_wx"
#define IM_SINA                                 @"im_sina"
#define IM_TAOBAO                               @"im_taobao"
#define IM_MSN                                  @"im_msn"
#define IM_YAHOO                                @"im_yahoo"
#define IM_BAIDU                                @"im_baidu"
#define IM_GOOGLE                               @"im_google"
#define IM_SKYPE                                @"im_skype"
#define IMAGE_DEFAULT                           @"image_default"
#define WEB_DEFAULT                             @"web_default"
#define WEB_BLOG                                @"web_blog"
// 系统自己可以主动获取信息
#define LANGUAGE                                @"language"
#define TIMEZONE                                @"timezone"
// 系统操作
#define DELETABLE                               @"deletable"

@interface TrustyUserInfo : Trusty

/**
 *  获取用户信息
 *
 *  @param userInfo 返回的用户信息是 NSString 的状态或 NSDictionary 的用户信息
 */
+ (void)getUserInfo:(void (^)(id userInfo))userInfo;

/**
 *  设置用户信息
 *
 *  @param userInfo 传入用户信息的 NSDictionary ,以上为所对应的 Key
 *  @param status   返回上传是否成功
 */
+ (void)setUserInfo:(NSDictionary *)userInfo completion:(void (^)(NSString *status))status;

@end

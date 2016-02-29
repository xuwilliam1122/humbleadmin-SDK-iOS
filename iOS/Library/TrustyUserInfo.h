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
// 全名
#define FULL_NAME                               @"fullname"
// 昵称
#define NICK_NAME                               @"nickname"
// 性别
#define GENDER                                  @"gender"
// 生日日
#define DOB_DAY                                 @"dob_day"
// 生日月
#define DOB_MONTH                               @"dob_month"
// 生日年
#define DOB_YEAR                                @"dob_year"
// 邮箱
#define EMAIL                                   @"email"
// 职位
#define JOB_TITLE                               @"job_title"

// 电话信息
/// 家用电话
#define PHONE_HOME                              @"phone_home"
// 移动电话
#define PHONE_MOBILE                            @"phone_mobile"
// 工作电话
#define PHONE_WORK                              @"phone_work"
// 传真电话
#define PHONE_FAX                               @"phone_fax"

// 个人住址
// 国家
#define COUNTRY                                 @"country"
// 省
#define STATE                                   @"state"
// 城市
#define CITY                                    @"city"
// 地址
#define ADDRESS                                 @"address"
// 邮政编码
#define POSTCODE                                @"postcode"
// 额外地址
#define ADDRESS_ADDITIONAL                      @"address_additional"

// 个人公司
// 公司名
#define COMPANY_NAME                            @"company_name"
// 公司国家
#define COUNTRY_BUSINESS                        @"country_business"
// 公司省
#define STATE_BUSINESS                          @"state_business"
// 公司城市
#define CITY_BUSINESS                           @"city_business"
// 公司地址
#define ADDRESS_BUSINESS                        @"address_business"
// 公司邮政编码
#define POSTCODE_BUSINESS                       @"postcode_business"
// 额外公司地址
#define ADDRESS_ADDITIONAL_BUSINESS             @"address_additional_business"

// 个人其他账号信息
// QQ账号
#define IM_QQ                                   @"im_qq"
// 微信账号
#define IM_WX                                   @"im_wx"
// 新浪账号
#define IM_SINA                                 @"im_sina"
// 淘宝账号
#define IM_TAOBAO                               @"im_taobao"
// MSN账号
#define IM_MSN                                  @"im_msn"
// 雅虎账号
#define IM_YAHOO                                @"im_yahoo"
// 百度账号
#define IM_BAIDU                                @"im_baidu"
// 谷歌账号
#define IM_GOOGLE                               @"im_google"
// skype账号
#define IM_SKYPE                                @"im_skype"
// 默认头像
#define IMAGE_DEFAULT                           @"image_default"
// 默认主页
#define WEB_DEFAULT                             @"web_default"
// 网络博客
#define WEB_BLOG                                @"web_blog"

// 系统自己可以主动获取信息
// 语言
#define LANGUAGE                                @"language"
// 时区
#define TIMEZONE                                @"timezone"

// 系统操作
// 是否可删除
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

//
//  TrustyAppearance.h
//  humbleadminbase
//
//  Created by HumbleAdmin on 16/3/14.
//  Copyright © 2016年 HRWY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  TrustyAppearance 是「可信用户系统」CUL 的 UI 属性接口类。
 *
 *  在使用 CUL 时，可以根据需要传入相应的属性，即可定制和应用主题相符的 UI 界面。
 */
@interface TrustyAppearance : NSObject

/**
 *  TrustyAppearance 的单例模式
 *
 *  @return TrustyAppearance 对象
 */
+ (instancetype) sharedInstance;

#pragma mark 颜色属性

// 设置背景图片方式：`[UIColor colorWithPatternImage:]` 。
/**
 *  界面的背景色。
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 *  控件的颜色。包括：按钮的颜色、文本框的颜色。
 */
@property (nonatomic, strong) UIColor *accentColor;

#pragma mark 字体属性

/**
 *  头标题字体。
 */
@property (nonatomic, strong) UIFont *headerFont;

/**
 *  文本字体。包括：按钮字体、文本字体。
 */
@property (nonatomic, strong) UIFont *labelFont;

/**
 *  内容字体。包括：文本框文本字体。
 */
@property (nonatomic, strong) UIFont *bodyFont;

#pragma mark 导航栏标题和颜色属性

/**
 *  导航栏标题文字。
 */
@property (nonatomic, strong) NSString *headerStr;

@end

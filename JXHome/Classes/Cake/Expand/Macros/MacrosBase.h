//
//  MacrosBase.h
//  JXHome
//
//  Created by 黄小雪 on 2019/3/10.
//  Copyright © 2019 黄小雪. All rights reserved.
//

#import <Foundation/Foundation.h>

#define iOS11 ([[UIDevice currentDevice] systemVersion].floatValue >= 11.0 ? YES : NO)
#define iOS10 ([[UIDevice currentDevice] systemVersion].floatValue >= 10.0 ? YES : NO)
#define iOS9 ([[UIDevice currentDevice] systemVersion].floatValue >= 9.0 ? YES : NO)
#define iOS8 ([[UIDevice currentDevice] systemVersion].floatValue >= 8.0 ? YES : NO)    // iOS8(包含)以上的系统判断
#define iOS7 ([[UIDevice currentDevice] systemVersion].floatValue = 7.0 ? YES : NO)     //IOS7

#define iPhone4     (CGSizeEqualToSize(CGSizeMake(320, 480), [UIScreen mainScreen].bounds.size))
#define iPhone5     (CGSizeEqualToSize(CGSizeMake(320, 568), [UIScreen mainScreen].bounds.size))
#define iPhone6     (CGSizeEqualToSize(CGSizeMake(375, 667), [UIScreen mainScreen].bounds.size))
#define iPhone6p    (CGSizeEqualToSize(CGSizeMake(414, 736), [UIScreen mainScreen].bounds.size))
#define iPhoneX     (CGSizeEqualToSize(CGSizeMake(375, 812), [UIScreen mainScreen].bounds.size))
#define isNarrowScreem  (iPhone4||iPhone5)
#define is2XScreem  (iPhone4||iPhone5||iPhone6)

/******************************        Size 相关的定义    ***************************************/
#define ScreenWidth             [UIScreen mainScreen].bounds.size.width //屏幕宽度
#define ScreenHeight            [UIScreen mainScreen].bounds.size.height    //屏幕高度
#define APPLICATIONHEIGHT       [[UIScreen mainScreen] applicationFrame].size.height    //应用高度 (除去statusBar，statusBar隐藏时，应用高度和屏幕高度一样)
#define APPLICATIONWIDTH        ScreenWidth //应用宽度 (通常情况下和屏幕宽度是一样的)
#define KeybordRoughHeight      260 //键盘的粗略高度
#define OnePoint                (1/[UIScreen mainScreen].scale) //广义的点
#define BaseLineWidth               ([UIScreen mainScreen].scale > 2 ? 0.66 : 0.5)  // 基本的线的宽度，用于分割和边框

//iphoneX适配
#define kStatusHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define kNaviHeight self.navigationController.navigationBar.frame.size.height
#define kBottomTouchHeight 34
#define kiPhoneXNaviViewH ScreenHeight - kStatusHeight - kNaviHeight - kBottomTouchHeight
#define kiPhoneXNoNaviViewH ScreenHeight - kStatusHeight - kBottomTouchHeight

#define Kscale(k)               (k*(ScreenWidth/320.0))
#define displayScale            (nativeScale() / 2) // 适配用的缩放比
#define DDDisplayScale          (FFNativeScale() / 2) //design draft 的缩放比例
#define XXDisplayScale          (XNativeScale() / 2)

#define fontdelta               ((ceil(displayScale)-1)*2)

/******************************        字体相关的定义    ***************************************/
#define  KColorOfCommonWords    [UIColor blackColor]
#define  KFontOfTitle           (KFontNormal(14))
#define  KFontOfContent         (KFontNormal(13))
#define  KFontNormal(s)         (iOS9?([UIFont fontWithName:@"PingFang-SC-Regular" size:s]):([UIFont fontWithName:@"HelveticaNeue" size:s]))
#define  KFontBold(s)           (iOS9?([UIFont fontWithName:@"PingFang-SC-Medium" size:s]):([UIFont fontWithName:@"HelveticaNeue-Medium" size:s]))

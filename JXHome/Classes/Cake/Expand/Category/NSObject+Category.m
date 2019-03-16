//
//  NSObject+Category.m
//  JXHome
//
//  Created by 黄小雪 on 2019/3/10.
//  Copyright © 2019 黄小雪. All rights reserved.
//

#import "NSObject+Category.h"

@implementation NSObject (Category)

-(BOOL)isNilOrNull
{
    BOOL flag = self && self != [NSNull null];
    return !flag;
}

@end

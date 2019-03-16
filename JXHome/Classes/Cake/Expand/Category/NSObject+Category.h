//
//  NSObject+Category.h
//  JXHome
//
//  Created by 黄小雪 on 2019/3/10.
//  Copyright © 2019 黄小雪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Category)
/*!
 @method
 @abstract      判断对象是否未nil或[NSNull null]对象
 @return        BOOL
 */

-(BOOL)isNilOrNull;


@end

NS_ASSUME_NONNULL_END

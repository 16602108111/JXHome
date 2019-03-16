//
//  JXHTabbarView.h
//  JXHome
//
//  Created by 黄小雪 on 2019/3/10.
//  Copyright © 2019 黄小雪. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXHTabbarView : UIView
@property(nonatomic,readonly) NSInteger curSelectedIndex;

-(void)setupWithSeletedImgDict:(NSDictionary *)imgDict currentIndex:(NSInteger)currentIndex;
-(void)setSeletedIndex:(NSInteger)index;
-(void)setupTabBarName:(NSString *)name index:(NSInteger)index;
@end

NS_ASSUME_NONNULL_END

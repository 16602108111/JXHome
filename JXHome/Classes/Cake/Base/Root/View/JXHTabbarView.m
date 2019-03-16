//
//  JXHTabbarView.m
//  JXHome
//
//  Created by 黄小雪 on 2019/3/10.
//  Copyright © 2019 黄小雪. All rights reserved.
//

#import "JXHTabbarView.h"
#import "MacrosBase.h"
#import "ErrorProtectCategory.h"

#define WIDTH_TABBAR  (APPLICATIONWIDTH/4)

#define WIDTH_IMAGE         30.0f

#define LITTE_SQUARE_WIDTH  10.5f

#define HEIGHT_LABEL        10.0f
#define TEXT_FONT           12.0f
#define TEXT_TOP_MARGIN     1.0f
#define IMAGE_TOP_MARGIN    2.0f

@interface JXHTabbarView()
@property(nonatomic,strong)NSArray *seletedImgArr;
@property(nonatomic,strong)NSArray *unSeletedImgArr;
@property(nonatomic,strong) NSMutableArray *tabbarIconArr;
@property(nonatomic,strong) NSMutableArray *tabbarTextArr;
@property(nonatomic,strong) NSArray *titleArr;
@property(nonatomic,assign) NSInteger  currentIndex;
@property(nonatomic,strong) NSMutableDictionary *tabbarTextDict;


@end
@implementation JXHTabbarView
#pragma mark ---- public method -----
-(void)setupWithSeletedImgDict:(NSDictionary *)imgDict currentIndex:(NSInteger)currentIndex
{
    if(self.tabbarTextArr)  {
        for (UILabel *label in self.tabbarTextArr) {
            [label removeFromSuperview];
        }
    }
   
    if (self.tabbarIconArr) {
        for (UIImageView *imageView in self.tabbarIconArr) {
            [imageView removeFromSuperview];
        }
    }
    
    self.tabbarTextArr = nil;
    self.tabbarIconArr = nil;
    self.tabbarIconArr = [NSMutableArray array];
    self.tabbarTextArr = [NSMutableArray array];
    self.currentIndex  = currentIndex;
    if (imgDict.count) {
        self.backgroundColor = [UIColor clearColor];
        self.userInteractionEnabled = NO;
        self.frame = CGRectMake(0, 0, WIDTH_TABBAR, 48);
        self.seletedImgArr = [imgDict objectForKey:@"seleted"];
        self.unSeletedImgArr = [imgDict objectForKey:@"unSelected"];
        self.titleArr        = [imgDict objectForKey:@"title"];
        for (NSInteger i = 0; i < [self.unSeletedImgArr count]; i ++) {
            
        }
    }
}


#pragma mark ----- private method ------
-(void)p_addLabelAtIndex:(NSInteger)index
{
    if (self.tabbarTextDict == nil) {
        self.tabbarTextDict = [NSMutableDictionary dictionaryWithCapacity:4];
    }
    UILabel *label = [self.tabbarTextDict safeObjectForKey:self.titleArr[index]];
    if (label == nil) {
        label = [[UILabel alloc]init];
        [self.tabbarTextDict setObject:label forKey:self.titleArr[index]];
    }
    
    label.frame = CGRectMake(WIDTH_TABBAR * index ,IMAGE_TOP_MARGIN + WIDTH_IMAGE + TEXT_TOP_MARGIN, WIDTH_TABBAR, HEIGHT_LABEL);
    label.backgroundColor = [UIColor clearColor];
    label.textColor       = index == self.currentIndex?kColorReferenceTawnyColor:kColorTabTextColor;
    label.font            = KFontNormal(TEXT_FONT);
    label.textAlignment   = NSTextAlignmentCenter;
    label.text            = self.titleArr[index];
    label.tag             = index;
    [self addSubview:label];
    [self.tabbarTextArr addObject:label];
}

@end

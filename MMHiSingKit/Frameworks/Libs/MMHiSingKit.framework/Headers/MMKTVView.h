//
//  MMKTVView.h
//  MMHiSingKit
//
//  Created by Zzz on 2022/4/1.
//

#import <UIKit/UIKit.h>
#import "MMHiSingOrderSongDataDelegate.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MMKTVViewRole) {
    MMKTVViewRole_Roomer, // 房主
    MMKTVViewRole_Lisenter, // 听众
    MMKTVViewRole_Hisinger, // 麦上用户
};


@interface MMKTVView : UIView


+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

- (instancetype)initWithFrame:(CGRect)frame andRoleStatus:(MMKTVViewRole)status tmpVC:(UIViewController *)tmpVC;

/** 坐席数 */
@property (nonatomic, assign)  NSInteger  seatCount;

/** 弹框控制器 */
@property (nonatomic, strong)  UIViewController *tmpVC;

@property (nonatomic,copy) void(^selectOrderSong)(void);

@property (nonatomic, strong) NSMutableArray *songModels;
@property (nonatomic, weak) id<MMHiSingOrderSongDataDelegate>songDataDelegate;


// 测试抢唱
- (void)testGetMic;

// 测试无人抢
- (void)testNobodyPlay;
// 爆灯
- (void)testLight;

// 灭灯
- (void)testLower;

- (void)testShowRank;

- (void)testSuccess;

- (void)testFaile;

- (void)tick:(NSTimeInterval)progress;




@end

NS_ASSUME_NONNULL_END

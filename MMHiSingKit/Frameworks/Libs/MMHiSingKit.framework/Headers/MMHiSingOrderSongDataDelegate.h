//
//  MMHiSingOrderSongDataDelegate.h
//  MMHiSingKit
//
//  Created by Zzz on 2022/4/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MMHiSingOrderSongDataDelegate <NSObject>

- (NSArray *)loadDataByPageIndex:(NSInteger)index type:(NSUInteger)type;

- (NSArray *)loadSearchSongDataByPageIndex:(NSInteger)index content:(NSString *)content;

@end

NS_ASSUME_NONNULL_END

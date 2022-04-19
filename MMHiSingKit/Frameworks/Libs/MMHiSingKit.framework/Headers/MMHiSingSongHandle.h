//
//  MMHiSingSongProtocol.h
//  MMHiSingKit
//
//  Created by Zzz on 2022/4/1.
//

#import <Foundation/Foundation.h>


@class MMHiSingSongModel;
/// 歌曲下载
typedef void(^HiSongCallBack)(NSArray<MMHiSingSongModel *> * songArray);

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MMHiSongType) {
    MMHiSongType_Hot, // 热歌
    MMHiSongType_New, // 新歌
};

@protocol MMHiSingSongHandle <NSObject>
/// 获取歌曲列表
/// @param index 热歌 or 新歌
/// @param size 每页大小
/// @param index 页数
/// @param callback 回调结果
- (void)getSongListWithIndex:(MMHiSongType)index pageSize:(NSInteger)size pageIndex:(NSInteger)index completion:(HiSongCallBack)callback;


/// 搜索歌曲列表
/// @param content 搜索内容
/// @param size 每页大小
/// @param index 页数
/// @param callback 回调结果
- (void)getSongListWithString:(NSString *)content pageSize:(NSInteger)size pageIndex:(NSInteger)index completion:(HiSongCallBack)callback;


@end

NS_ASSUME_NONNULL_END

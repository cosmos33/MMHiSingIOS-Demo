//
//  MMHiSingRTCProtocol.h
//  MMHiSingKit
//
//  Created by Zzz on 2022/4/1.
//

#import <Foundation/Foundation.h>

@class MMHISingSongModel;
// 歌曲预下载回调
typedef void(^MMHiSingRtcLoadSongCallBack)(MMHISingSongModel * song);
// 歌曲播放时间回调
typedef void(^MMHiSingRtcPlayingSongCallBack)(NSTimeInterval  duration);

NS_ASSUME_NONNULL_BEGIN

@protocol MMHiSingRTCHandle <NSObject>

/// 预下载歌曲
/// @param song 预下载歌曲
/// @param callback 结果
- (void)perpareLoadSong:(MMHISingSongModel *)song completion:(MMHiSingRtcLoadSongCallBack)callback;


/// 播放歌曲
/// @param song 待播放歌曲
/// @param tick 歌曲播放回调
- (void)playSong:(MMHISingSongModel *)song tick:(MMHiSingRtcPlayingSongCallBack)tick;

@end

NS_ASSUME_NONNULL_END

//
//  MMHiSingClient.h
//  MMHiSingKit
//
//  Created by Zzz on 2022/4/1.
//

#import <Foundation/Foundation.h>
#import "MMHiSingUserInfo.h"
#import "MMHiSingRTMHandle.h"
#import "MMHiSingSongHandle.h"
#import "MMHiSingRTCHandle.h"


NS_ASSUME_NONNULL_BEGIN

/// 创建房间回调
/// @param success 创建放假结果
/// @param roomId 房间 ID
typedef void(^MMHiSingCreateRoomCallBack)(BOOL success , NSString *roomId);

/// 当前轮次结束回调
/// @param gradeArray 本轮游戏最终得分数组
typedef void(^MMHiSingFinishCallBack)(NSArray <MMHiSingUserGrade*>* gradeArray);
/// 用户抢麦回调
/// @param onMic 抢麦结果
typedef void(^MMHiSingMicCallBack)(BOOL onMic);

/// 用户离开房间
typedef void(^MMHiSingLeaveRoomCallBack)(void);


/// 自定义用户得分回调 需要设置 'setGradeCallback'
///  入参: gradeArray 是用户最终得分
///  返回: SDK 内部计算得分
typedef NSArray <MMHiSingUserGrade*>*_Nullable(^MMHiSingGradeCallBack)(NSArray <MMHiSingUserGrade*>* gradeArray);

@interface MMHiSingClient : NSObject

/// 初始化
/// @param content 加载 hiSing 视图
/// @param controller 用来弹出歌词页面
/// @param channelId 创建房间用到的声网channelId
/// @param seatCount 当前共有几个坐席
/// @param roomId 房间 ID
/// @param appId appid
- (instancetype)initSDKWithContentView:(UIView *)content roomId:(NSString *)roomId controller:(UIViewController *)controller channelId:(NSString*)channelId andSeatCount:(NSInteger)seatCount appId:(NSString *)appId;

/// 设置rtm handler
/// MMHiSingRTMHandle 云信令相关句柄
- (void)setRtmHandle:(id<MMHiSingRTMHandle>)rtmHandle;

/// 设置 rtc  handle
/// MMHiSingRTCHandle 歌曲播放句柄
- (void)setRtcHandle:(id<MMHiSingRTCHandle>)rtcHandle;
// 设置 song handle
/// MMHiSingSongHandle 歌曲下载句柄
- (void)setSongHandler:(id<MMHiSingSongHandle>)songHandle;

/// 创建房间
/// @param roomUesr 房主
/// @param callback 创建房间回调
- (void)createRoom:(MMHiSingUserInfo*)roomUesr completion:(MMHiSingCreateRoomCallBack)callback;


/// 玩家加入房间
/// @param roomUesr 玩家信息
/// @param roomId 房间 ID
/// @param callback 加入房间回调
- (void)joinRoom:(MMHiSingUserInfo *)roomUesr roomId:(NSString *)roomId completion:(MMHiSingCreateRoomCallBack)callback;


/// 玩家抢麦
/// @param onMic 上/下
/// @param completion 玩家抢麦回调
- (void)joinMic:(BOOL)onMic withUser:(MMHiSingUserInfo *)user completion:(MMHiSingMicCallBack)callback;


/// 离开房间
/// @param callback 用户退出之后的回调
- (void)leaveRoom:(MMHiSingLeaveRoomCallBack)callback;


/// 游戏结束一轮
/// @param finishCallback 当前伦次的最终分数回调
- (void)setCurrentRoundFinishCallback:(MMHiSingFinishCallBack)finishCallback;


/// 业务方自定义打分回调
/// @param gradeCallback 用户分数信息
- (void)setGradeCallback:(MMHiSingGradeCallBack)gradeCallback;


@end

NS_ASSUME_NONNULL_END

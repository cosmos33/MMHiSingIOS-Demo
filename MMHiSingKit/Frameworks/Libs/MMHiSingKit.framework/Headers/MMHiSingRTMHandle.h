//
//  MMHiSingRTMProtocol.h
//  MMHiSingKit
//
//  Created by Zzz on 2022/4/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^MMHiSingRTMCallBack)(BOOL success);

/// 用户连接状态回调callback
/// state : 加入频道的状态
/// res : 结果
typedef void(^MMHiSingConnectionChangeCallBack)(int state,int res);
/// 发送信令的callback
/// perrId : 用户 ID
/// data : 消息的流
typedef void(^MMHiSingSendMessageCallBack)(NSData *data,NSString * peerId);

@protocol MMHiSingRTMHandle <NSObject>

/// 登录频道
/// @param callback 返回是否成功
/// @param connectionStateChangedCallback 用户连接状态回调
- (void)login:(MMHiSingRTMCallBack)callback connectionStateChangedCallback:(MMHiSingConnectionChangeCallBack)connectionStateChangedCallback;

/// 注销
/// @param callback 返回是否成功
- (void)logOut:(MMHiSingRTMCallBack)callback;

/// 加入频道
/// @param channelId 频道 ID
/// @param completion 加入频道

- (void)joinChannel:(NSString *)channelId completion:(MMHiSingRTMCallBack)completion;


/// 离开频道
/// @param callback 离开频道回调
- (void)leaveChannel:(MMHiSingRTMCallBack)callback;


/// 发送消息
/// @param data 消息流
- (void)sendMessage:(NSData *)data;


/// 设置收到消息的处理函数
/// @param callback 处理消息callback
- (void)setMessageReceivedCallBack:(MMHiSingSendMessageCallBack)callback;



@end

NS_ASSUME_NONNULL_END

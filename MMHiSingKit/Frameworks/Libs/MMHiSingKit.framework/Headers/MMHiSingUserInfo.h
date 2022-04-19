//
//  MMHiSingUserInfo.h
//  MMAVPlayerDemo
//
//  Created by Zzz on 2022/4/1.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MMHiSingUserInfoRole) {
    Role_Owner, // 房主
    Role_OnMic, // 买上观众
    Role_Lisenter, // 普通观众
    Role_Singer, // 歌手
};

NS_ASSUME_NONNULL_BEGIN

@interface MMHiSingUserInfo : NSObject

@property(nonatomic, copy)   NSString *name; // 名称
@property(nonatomic, copy)   NSString *avator; // 头像
@property(nonatomic, copy)   NSString *userId; //用户 ID
@property(nonatomic, assign) MMHiSingUserInfoRole role; // 角色

@end

@interface MMHiSingUserGrade : NSObject

@property(nonatomic, copy)   NSString *name; // 名称
@property(nonatomic, assign) float score; // 得分


@end

@interface MMHiSingSongModel : NSObject

@property(nonatomic, copy) NSString *musicId; // id
@property(nonatomic, copy) NSString *name; // 歌曲名
@property(nonatomic, copy) NSString *singer; // 歌手
@property(nonatomic, copy) NSString *coverUrl; // 头像
@property(nonatomic, copy) NSString *lrcUrl; // 歌词 URL

@property(nonatomic, assign) BOOL selected; // 是否备点

@end


NS_ASSUME_NONNULL_END

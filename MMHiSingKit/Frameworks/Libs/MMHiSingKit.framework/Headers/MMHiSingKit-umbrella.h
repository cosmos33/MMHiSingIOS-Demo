#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MMHiSingClient.h"
#import "MMHiSingRTCHandle.h"
#import "MMHiSingRTMHandle.h"
#import "MMHiSingSongHandle.h"
#import "MMHiSingUserInfo.h"
#import "MMKTVView.h"
#import "MMHiSingOrderSongDataDelegate.h"

FOUNDATION_EXPORT double MMHiSingKitVersionNumber;
FOUNDATION_EXPORT const unsigned char MMHiSingKitVersionString[];


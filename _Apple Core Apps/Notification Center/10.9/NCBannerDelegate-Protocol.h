//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCNotificationWindowDelegate.h"

@class NCBanner;

@protocol NCBannerDelegate <NCNotificationWindowDelegate>
- (void)bannerShouldDismiss:(NCBanner *)arg1;
- (void)bannerContentClicked:(NCBanner *)arg1;
- (void)bannerTextCleared:(NCBanner *)arg1;
- (void)bannerTextTyped:(NCBanner *)arg1;
- (void)bannerHidInlineReply:(NCBanner *)arg1;
- (void)bannerShowedInlineReply:(NCBanner *)arg1;
- (void)banner:(NCBanner *)arg1 snoozedWithTimeInterval:(double)arg2;
- (void)bannerClose:(NCBanner *)arg1;
- (void)bannerPerformActionAndDismiss:(NCBanner *)arg1;
@end


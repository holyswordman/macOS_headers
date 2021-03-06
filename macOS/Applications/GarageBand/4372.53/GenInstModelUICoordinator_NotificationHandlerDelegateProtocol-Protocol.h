//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol GenInstModelUICoordinator_NotificationHandlerDelegateProtocol <NSObject>
- (struct CSong *)song;
- (struct CVirtualTrack *)referenceTrack;
- (void)handleTrackRemove;
- (void)handleProtectOrFrozenChange;
- (void)handleCharacterChange;
- (void)handleSelectionChange;
- (void)handleRegenerateNotification;
- (void)handleGeneratorJobFinishedWithUserInfo:(NSDictionary *)arg1;

@optional
- (void)handleClockChangedNotification;
- (void)handleRegenerateNotificationForVirtualTracks:(vector_e94a763c)arg1;
@end


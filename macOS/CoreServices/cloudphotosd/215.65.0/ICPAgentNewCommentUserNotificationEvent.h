//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICPAgentSharedPhotoStreamUserNotificationEvent.h"

@class NSString;

@interface ICPAgentNewCommentUserNotificationEvent : ICPAgentSharedPhotoStreamUserNotificationEvent
{
    BOOL _isLike;
    BOOL _isVideo;
    NSString *_commentContent;
}

+ (id)matchPredicateForAlbumGUID:(id)arg1 photoGUID:(id)arg2 commentGUID:(id)arg3;
+ (id)eventWithUserNotificationManager:(id)arg1 comment:(id)arg2 assetCollection:(id)arg3 album:(id)arg4 info:(id)arg5;
+ (id)type;
@property BOOL isVideo; // @synthesize isVideo=_isVideo;
@property BOOL isLike; // @synthesize isLike=_isLike;
@property(retain) NSString *commentContent; // @synthesize commentContent=_commentContent;
- (void).cxx_destruct;
- (id)notificationIdentifier;
- (id)matchingIdentifier;
@property(retain) NSString *commentIdentifier;
- (void)postUserNotification;
- (id)initWithUserNotificationManager:(id)arg1 comment:(id)arg2 assetCollection:(id)arg3 album:(id)arg4 info:(id)arg5;

@end


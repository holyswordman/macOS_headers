//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ContactListContactCell.h"

@class PresenceImageCell;

@interface MonitorContactCell : ContactListContactCell
{
    PresenceImageCell *_presenceImageCell;
}

+ (id)displayNameFont;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)setMoodMessage:(id)arg1;
- (id)moodMessage;
- (void)setPresenceImage:(id)arg1;
- (id)presenceImage;
- (void)setAvatarImageAction:(SEL)arg1;
- (SEL)avatarImageAction;
- (void)setAvatarImage:(id)arg1;
- (id)avatarImage;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)moodMessageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)presenceImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)avatarRectForBounds:(struct CGRect)arg1;
- (double)presenceImageXMargin;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@interface NCEventTrapWindow : NSPanel
{
}

- (BOOL)accessibilityIsIgnored;
- (void)sendEvent:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (BOOL)canBecomeKeyWindow;
@property id <NCEventTrapWindowDelegate> delegate;
- (BOOL)isOpaque;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@interface TMAInspectorSegmentedControl : NSSegmentedControl
{
    BOOL mSegmentWidthsValid;
}

+ (void)initialize;
- (void)p_updateSegmentWidths;
- (void)p_invalidateSegmentWidths;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)setLabel:(id)arg1 forSegment:(long long)arg2;
- (void)setSegmentCount:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;

@end


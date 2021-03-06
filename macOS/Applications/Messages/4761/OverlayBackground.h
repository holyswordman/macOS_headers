//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface OverlayBackground : NSView
{
    double _radius;
    NSColor *_borderColor;
    NSColor *_interiorColor;
    double _borderLeft;
    double _borderTop;
    double _borderRight;
    double _borderBottom;
    double _minBorder;
    double _maxBorder;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(copy, nonatomic) NSColor *interiorColor; // @synthesize interiorColor=_interiorColor;
@property(copy, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)getBorderWidthLeft:(double *)arg1 top:(double *)arg2 right:(double *)arg3 bottom:(double *)arg4;
- (void)setBorderWidthLeft:(double)arg1 top:(double)arg2 right:(double)arg3 bottom:(double)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSClipView.h"

@class CAGradientLayer;

@interface _NCClipView : NSClipView
{
    CAGradientLayer *_gradientMask;
}

- (void).cxx_destruct;
- (void)viewBoundsChanged:(id)arg1;
- (void)viewFrameChanged:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateMaskFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end


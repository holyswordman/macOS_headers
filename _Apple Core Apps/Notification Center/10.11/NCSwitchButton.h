//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class CALayer, NSLayoutConstraint, NSTextField;

@interface NCSwitchButton : NSButton
{
    CALayer *_offBackgroundLayer;
    CALayer *_onBackgroundLayer;
    CALayer *_topLayer;
    CALayer *_knobLayer;
    struct CGRect _offKnobFrame;
    struct CGRect _onKnobFrame;
    NSLayoutConstraint *_onLeftConstraint;
    NSLayoutConstraint *_offRightConstraint;
    double _disabledOffOffset;
    double _disabledOnOffset;
    NSTextField *_onTF;
    NSTextField *_offTF;
}

+ (Class)cellClass;
- (void).cxx_destruct;
- (void)_updateLayers;
- (void)setState:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)knobDragged:(double)arg1 done:(BOOL)arg2 mouseUp:(BOOL)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)allowsVibrancy;
- (void)_setupViews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

__attribute__((visibility("hidden")))
@interface StdMovieUISliderCell : NSSliderCell
{
    double _curValue;
    double _loadedPercentage;
    double _selectionStart;
    double _selectionEnd;
    BOOL _editable;
    struct CGRect _trackingRect;
    BOOL _isPressed;
    BOOL _selecting;
    BOOL _selectionChanged;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (BOOL)gotoPrevious;
- (BOOL)gotoNext;
- (void)scrollWheel:(id)arg1;
- (void)setValueAndSendAction:(double)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_calcTrackRect:(struct CGRect *)arg1 andAdjustRect:(BOOL)arg2;
- (void)_drawBar:(struct CGRect *)arg1 maybeFlipped:(BOOL)arg2 maybeDisabled:(BOOL)arg3;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (void)drawKnob;
- (void)drawKnob:(struct CGRect)arg1;
- (struct CGRect)knobRectFlipped:(BOOL)arg1;
- (struct CGRect)_emptyDurationRectFlipped:(BOOL)arg1;
- (struct CGRect)_selectionRectFlipped:(BOOL)arg1;
- (double)knobThickness;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)trackRect;
- (id)title;
- (BOOL)isOpaque;
- (int)isVertical;
- (BOOL)acknowledgeSelectionChange;
- (void)setSelecting:(BOOL)arg1;
- (void)deselect;
- (void)getSelectionStart:(double *)arg1 end:(double *)arg2;
- (void)setSelectionStart:(double)arg1 end:(double)arg2;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setFloatValue:(float)arg1;
- (float)floatValue;
- (void)setIntValue:(int)arg1;
- (int)intValue;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (double)loadedPercentage;
- (void)setLoadedPercentage:(double)arg1;
- (void)setEditable:(BOOL)arg1;
- (BOOL)editable;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)_loadImagesIfNecessary;
- (BOOL)isFlipped;
- (long long)numberOfTickMarks;
- (unsigned long long)sliderType;
- (id)init;

@end


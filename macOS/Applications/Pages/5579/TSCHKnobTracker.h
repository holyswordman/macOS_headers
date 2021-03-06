//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDKnobTracker.h"

@interface TSCHKnobTracker : TSDKnobTracker
{
    BOOL mIsDirectManipulation;
}

@property(nonatomic) BOOL isDirectManipulation; // @synthesize isDirectManipulation=mIsDirectManipulation;
- (void)handleEndMovingKnob;
- (void)endMovingKnob;
- (void)resetCurrentPositionToKnob;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end


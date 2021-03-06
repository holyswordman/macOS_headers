//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosPlayer/ISVitalityFilter.h>

@class ISDynamicValueFilter;

@interface ISVitalityAdaptiveFilter : ISVitalityFilter
{
    BOOL _didVisibilityOffsetCrossCenter;
    double _vitalityRange;
    double _maxRate;
    long long _direction;
    BOOL _previousVisibility;
    double _previousVisibilityOffset;
    ISDynamicValueFilter *__vitalityOffsetValueFilter;
    double __rawVitalityOffset;
}

@property(nonatomic, setter=_setRawVitalityOffset:) double _rawVitalityOffset; // @synthesize _rawVitalityOffset=__rawVitalityOffset;
@property(readonly, nonatomic) ISDynamicValueFilter *_vitalityOffsetValueFilter; // @synthesize _vitalityOffsetValueFilter=__vitalityOffsetValueFilter;
- (void).cxx_destruct;
- (double)_adjustedDuration:(double)arg1;
- (double)_adjustedVisibilityOffset:(double)arg1;
- (void)inputDidChange;
- (id)initWithSettings:(id)arg1;

@end


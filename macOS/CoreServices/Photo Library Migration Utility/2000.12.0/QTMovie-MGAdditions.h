//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTMovie.h>

@interface QTMovie (MGAdditions)
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfAvailableRanges;
+ (id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinAvailableRanges;
+ (id)keyPathsForValuesAffectingChaptersWithinPlaybackRange;
- (BOOL)isCurrentTimeAtEndOfAvailableRanges;
- (CDStruct_900afa40)timeAtEndOfAvailableRanges;
- (BOOL)isThirtySecondsBeforeCurrentTimeWithinAvailableRanges;
- (CDStruct_900afa40)thirtySecondsBeforeCurrentTime;
- (BOOL)isTimeWithinAvailableRanges:(CDStruct_900afa40)arg1;
@end


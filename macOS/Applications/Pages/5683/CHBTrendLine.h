//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHBTrendLine : NSObject
{
}

+ (void)addXlChartTrendlineFrom:(id)arg1 to:(struct __CFArray *)arg2 state:(id)arg3;
+ (void)readFrom:(struct XlChartTrendLine *)arg1 toSeries:(id)arg2 state:(id)arg3;
+ (struct XlChartTrendLine *)xlChartTrendlineFrom:(id)arg1 forParentSeries:(id)arg2 seriesIndex:(unsigned long long)arg3 state:(id)arg4;
+ (id)readTrendlineGraphicProperties:(const struct XlChartSeriesFormat *)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (int)xlTrendLineRegressionTypeFrom:(int)arg1;
+ (int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2;

@end


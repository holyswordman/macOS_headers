//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartAccessibilityElement.h"

@class NSString, TSCHChartLegendAccessibilityElement, TSCHLegendAreaLayoutItemAccessibility, TSCHLegendCellModelCacheAccessibility;

@interface TSCHChartLegendLabelAccessibilityElement : TSCHChartAccessibilityElement
{
    TSCHLegendCellModelCacheAccessibility *_cellModelCache;
}

@property(nonatomic) TSCHLegendCellModelCacheAccessibility *cellModelCache; // @synthesize cellModelCache=_cellModelCache;
- (id)description;
- (void)invalidate;
- (id)elementType;
- (struct CGRect)elementFrameInScreenSpace;
@property(readonly, nonatomic) TSCHChartLegendAccessibilityElement *parentLegendElement;
@property(readonly, nonatomic) TSCHLegendAreaLayoutItemAccessibility *legendAreaLayoutItem;
@property(readonly, nonatomic) NSString *fillDescription;
@property(readonly, nonatomic) NSString *seriesString;
@property(readonly, nonatomic) NSString *labelString;
- (id)initWithAccessibilityParent:(id)arg1 forChartRep:(id)arg2;
- (id)initWithAccessibilityParent:(id)arg1 withCellModelCache:(id)arg2 forChartRep:(id)arg3;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;

@end


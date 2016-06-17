//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class CALayer;

@interface NCApplicationHeaderGroupView : NSTableRowView
{
    CALayer *_headerShadelayer;
    CALayer *_floatinglayer;
    double _tableHeight;
    id <NCAppHeaderGroupViewDelegate> _delegate;
}

@property id <NCAppHeaderGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateLayer;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)createFloatingLayerForFrame:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end


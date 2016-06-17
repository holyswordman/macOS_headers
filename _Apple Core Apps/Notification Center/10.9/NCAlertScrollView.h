//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class CAGradientLayer, CALayer;

@interface NCAlertScrollView : NSScrollView
{
    CALayer *_lineLayer;
    CALayer *_shadowLayer;
    CAGradientLayer *_verticalMaskGradient;
    CAGradientLayer *_horizontalMaskGradient;
    struct CGSize _lineSize;
    struct CGSize _shadowSize;
    _Bool _acceptsScroll;
    double _buttonGradientAmount;
    double _intrinsicHeight;
}

+ (Class)_horizontalScrollerClass;
+ (Class)_verticalScrollerClass;
@property(readonly) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(readonly) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(nonatomic) double intrinsicHeight; // @synthesize intrinsicHeight=_intrinsicHeight;
@property(nonatomic) double buttonGradientAmount; // @synthesize buttonGradientAmount=_buttonGradientAmount;
@property _Bool acceptsScroll; // @synthesize acceptsScroll=_acceptsScroll;
- (void).cxx_destruct;
- (void)layout;
- (void)_updateLayerMasksToBoundsFromView;
- (BOOL)clipsToBounds;
- (void)viewScrolled:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_setHorizontalMask;
- (void)scrollWheel:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)scrollerStyle;

@end


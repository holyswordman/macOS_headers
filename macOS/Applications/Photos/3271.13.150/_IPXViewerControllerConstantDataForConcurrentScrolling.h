//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface _IPXViewerControllerConstantDataForConcurrentScrolling : NSObject
{
    CALayer *_scrollViewLayer;
    CALayer *_clipViewLayer;
    CALayer *_documentViewLayer;
}

@property(readonly, nonatomic) CALayer *documentViewLayer; // @synthesize documentViewLayer=_documentViewLayer;
@property(readonly, nonatomic) CALayer *clipViewLayer; // @synthesize clipViewLayer=_clipViewLayer;
@property(readonly, nonatomic) CALayer *scrollViewLayer; // @synthesize scrollViewLayer=_scrollViewLayer;
- (void).cxx_destruct;
- (id)initWithScrollViewLayer:(id)arg1 clipViewLayer:(id)arg2 documentViewLayer:(id)arg3;

@end


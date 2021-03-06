//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDInteractiveCanvasRepContentPile-Protocol.h"

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSString;

@interface TSDInteractiveCanvasRepLayerPile : NSObject <TSDInteractiveCanvasRepContentPile>
{
    NSMutableOrderedSet *_topLevelLayers;
    NSMutableArray *_parentLayerAndChildLayersStack;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *contentLayers;
- (BOOL)isContentEqualToContentOfRepContentPile:(id)arg1;
- (id)newRepLayerPileByTransferringAndCloningParentLayers:(out id *)arg1;
- (void)popParentLayer;
- (void)pushParentLayer:(id)arg1;
- (void)mutateLayersUsingBlock:(CDUnknownBlockType)arg1;
- (void)addLayer:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSArray *contentPlatformViews;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABFuture-Protocol.h>

@class ABFuture, NSString;

__attribute__((visibility("hidden")))
@interface ABNonBlockingLazyFuture : NSObject <ABFuture>
{
    ABFuture *_future;
    CDUnknownBlockType _block;
    CDUnknownBlockType _cleanupBlock;
}

+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1 cleanupBlock:(CDUnknownBlockType)arg2;
- (void)cleanupBlocks;
- (void)resolveFuture;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (BOOL)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, getter=isFinished) BOOL finished;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 cleanupBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


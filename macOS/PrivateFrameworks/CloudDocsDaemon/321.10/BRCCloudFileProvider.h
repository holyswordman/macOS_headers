//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFileProvider.h>

#import <CloudDocsDaemon/BRCReachabilityDelegate-Protocol.h>
#import <CloudDocsDaemon/BRItemNotificationReceiving-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCCloudFileProvider : BRCFileProvider <BRItemNotificationReceiving, BRCReachabilityDelegate>
{
    NSMutableDictionary *_pipeByURL;
    NSMutableDictionary *_readersURLAndIDToDocID;
    NSMutableDictionary *_downloadTrackersByDocID;
}

- (void).cxx_destruct;
- (void)_unregisterPresenterForItemAtURL:(id)arg1 key:(id)arg2;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)cancelAllCoordinationProviders;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (BOOL)_hasPendingReaderForDocumentID:(id)arg1;
- (void)_documentWasMadeLive:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 session:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_physicalURLForURL:(id)arg1;
- (id)_fileReactorID;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)invalidate;
- (void)dumpToContext:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


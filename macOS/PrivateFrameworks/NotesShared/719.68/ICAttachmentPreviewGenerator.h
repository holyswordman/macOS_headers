//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICProgressIndicatorTrackerDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate>
{
    // Error parsing type: Ac, name: _shouldGenerateAttachmentsWhenReachable
    NSOperationQueue *_asyncGeneratorQueue;
    NSOperationQueue *_costlyGeneratorQueue;
    NSOperationQueue *_generatorQueue;
    NSMutableSet *_attachmentIDsInProgress;
    NSMutableSet *_attachmentIDsPending;
    NSMutableDictionary *_attachmentIDsProgress;
    unsigned long long _previewGenerationState;
    long long _suspendCount;
    NSObject<OS_dispatch_queue> *_previewQueue;
}

+ (id)sharedGenerator;
// Error parsing type for property shouldGenerateAttachmentsWhenReachable:
// Property attributes: TAc,N,V_shouldGenerateAttachmentsWhenReachable

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue; // @synthesize previewQueue=_previewQueue;
@property(nonatomic) long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property unsigned long long previewGenerationState; // @synthesize previewGenerationState=_previewGenerationState;
@property(retain, nonatomic) NSMutableDictionary *attachmentIDsProgress; // @synthesize attachmentIDsProgress=_attachmentIDsProgress;
@property(retain, nonatomic) NSMutableSet *attachmentIDsPending; // @synthesize attachmentIDsPending=_attachmentIDsPending;
@property(retain, nonatomic) NSMutableSet *attachmentIDsInProgress; // @synthesize attachmentIDsInProgress=_attachmentIDsInProgress;
@property(retain, nonatomic) NSOperationQueue *generatorQueue; // @synthesize generatorQueue=_generatorQueue;
@property(retain, nonatomic) NSOperationQueue *costlyGeneratorQueue; // @synthesize costlyGeneratorQueue=_costlyGeneratorQueue;
@property(retain, nonatomic) NSOperationQueue *asyncGeneratorQueue; // @synthesize asyncGeneratorQueue=_asyncGeneratorQueue;
- (void).cxx_destruct;
- (void)generatePendingPreviewForAttachment:(id)arg1;
- (void)generatePendingPreviews;
- (id)progressForObjectID:(id)arg1;
- (void)setProgress:(id)arg1 forObjectID:(id)arg2;
- (void)operationComplete:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)setupAttachmentPreviewGeneratorObservers;
- (void)cancelAttachmentPreviewGeneration;
- (void)reachabilityChanged:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (void)attachmentDidLoad:(id)arg1;
- (void)generatePreviewIfNeededForAttachmentWithObjectID:(id)arg1;
- (void)generatePreviewIfNeededForAttachment:(id)arg1;
- (void)generatePreviewsIfNeeded;
- (BOOL)isPreviewGenerationSupported;
- (void)progressIndicatorTrackerStopAnimation;
- (void)progressIndicatorTrackerStartAnimation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSError, NSString, NSUndoManager, RCCaptureSession, RCCompositionController, RCRecordingDisplayModel;

@protocol RCMainControllerHelperDelegate
@property(readonly) NSUndoManager *undoManager;
- (BOOL)doBecomeFirstRepsonder;
- (void)userDidDeleteRecordingWithUUID:(NSString *)arg1;
- (void)setCurrentTime:(double)arg1 withUUID:(NSString *)arg2;
- (void)selectItemWithUUID:(NSString *)arg1;
- (void)recordingDurationUpdated:(double)arg1;
- (void)captureFailedWithError:(NSError *)arg1;
- (void)didTransitionToActivityType:(long long)arg1 fromPreviousActivityType:(long long)arg2 withDisplayModel:(RCRecordingDisplayModel *)arg3 captureSession:(RCCaptureSession *)arg4 compositionController:(RCCompositionController *)arg5;
@end


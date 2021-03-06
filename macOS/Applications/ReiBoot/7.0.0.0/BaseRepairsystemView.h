//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RepairBaseView.h"

@class NSImageButton, NSImageView, NSLocalTextField, NSOperationQueue, NSProgressIndicator, NSTextField;

@interface BaseRepairsystemView : RepairBaseView
{
    NSProgressIndicator *progress;
    NSTextField *textFieldPercent;
    NSImageView *_imagegGif;
    NSImageButton *_btnRefresh;
    NSTextField *_textFieldTip;
    NSLocalTextField *_localstring1;
    NSLocalTextField *_localstring2;
    NSLocalTextField *_localstring3;
    NSOperationQueue *_taskQueue;
}

- (void)setTextFieldPercent:(id)arg1;
- (id)textFieldPercent;
- (void)setProgress:(id)arg1;
- (id)progress;
- (void)dealloc;
- (BOOL)isPageViewWorking;
- (void)startRepairSystem:(id)arg1 deepRoot:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)repairSystem:(id)arg1 deepRoot:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (int)startProgressPipe:(int)arg1;
- (BOOL)needRepair;
- (void)startRunIRestoreProcess:(id)arg1 Dir:(id)arg2 deepRoot:(BOOL)arg3;
- (id)startUnzipFirmwareFile:(id)arg1 toDir:(id)arg2;
- (void)CheckFiremwareFailed:(id)arg1;
- (void)startCheckFiremware:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onTimer;
- (BOOL)checkDiskFreeSize;
- (BOOL)checkiTunesVersion;
- (void)updateProgress:(double)arg1;
- (void)playGifview;
- (void)themeWillDidChange;
- (void)initPageView;
- (void)initViewText;
- (void)initBackView;
- (void)drawRect:(struct _NSRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NCModel;

@interface NCBaseBannerViewController : NSViewController
{
    BOOL _allowSingleLineMode;
    BOOL _tallMode;
    BOOL _lockscreenMode;
    NCModel *_value;
    id <NCBannerViewControllerDelegate> _delegate;
}

@property __weak id <NCBannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NCModel *value; // @synthesize value=_value;
@property(nonatomic) BOOL lockscreenMode; // @synthesize lockscreenMode=_lockscreenMode;
@property(nonatomic) BOOL tallMode; // @synthesize tallMode=_tallMode;
@property(nonatomic) BOOL allowSingleLineMode; // @synthesize allowSingleLineMode=_allowSingleLineMode;
- (void).cxx_destruct;
- (BOOL)updateBodyWidthConstraint;
- (void)updateLiveDate;
- (void)addTalkingAlertProperties:(id)arg1;
- (void)updateViewsFromModel;
- (void)pulseIcon;
- (void)setLockscreenModeWithoutUpdate:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCNotificationWindow.h"

#import "NCAlertButtonDelegate.h"
#import "NCBannerViewControllerDelegate.h"
#import "NCRoundedWindowContentDelegate.h"
#import "NSTextViewDelegate.h"

@class NCAlertButton, NCAlertScrollView, NCAppInfo, NCBaseBannerViewController, NCIdentityImageView, NCModel, NSButton, NSLayoutConstraint, NSMutableArray, NSObject<OS_dispatch_source>, NSTextView, NSUserNotification, NSView;

@interface NCBanner : NCNotificationWindow <NCRoundedWindowContentDelegate, NSTextViewDelegate, NCAlertButtonDelegate, NCBannerViewControllerDelegate>
{
    NSLayoutConstraint *_buttonHeightConstraint;
    NCBaseBannerViewController *_contentViewController;
    double _originalMaxHeight;
    double _originalMinHeight;
    double _originalInputHeight;
    double _maxButtonWidth;
    double _maxButtonHeight;
    double _minButtonWidth;
    BOOL _shownAsOverflow;
    BOOL _actionIsSnooze;
    BOOL _hasAlternativeActions;
    BOOL _hasText;
    unsigned int _talkingAlertID;
    NSObject<OS_dispatch_source> *_actionArrowTimer;
    NSObject<OS_dispatch_source> *_exit_timer;
    NSMutableArray *_queuedChanges;
    _Bool _showButtons;
    _Bool _showReply;
    NSView *_inputView;
    NSLayoutConstraint *_contentHolderConstraint;
    NSLayoutConstraint *_contentMinHeightConstraint;
    NSLayoutConstraint *_contentToInputConstraint;
    NSLayoutConstraint *_actionButtonHeightConstraint;
    NSLayoutConstraint *_closeButtonConstraint;
    NSLayoutConstraint *_closeButtonHeightConstraint;
    NSButton *_cancelButton;
    NCAlertButton *_actionButton;
    NSTextView *_replyTextView;
    NSLayoutConstraint *_inputHeightConstraint;
    NSLayoutConstraint *_inputHeightMaxConstraint;
    NSLayoutConstraint *_buttonContainerWidthConstraint;
    NCIdentityImageView *_imageView;
    NSView *_buttonContainer;
    NSView *_contentContainer;
    NCAlertScrollView *_contentScroller;
    NSView *_inputContainer;
    double _dismissTime;
    struct CGPoint _displayMousePosition;
    struct CGPoint _lastMousePosition;
}

+ (Class)contentClass;
+ (double)defaultSnoozeTime;
@property struct CGPoint lastMousePosition; // @synthesize lastMousePosition=_lastMousePosition;
@property struct CGPoint displayMousePosition; // @synthesize displayMousePosition=_displayMousePosition;
@property(nonatomic) double dismissTime; // @synthesize dismissTime=_dismissTime;
@property(nonatomic) _Bool showReply; // @synthesize showReply=_showReply;
@property(readonly) NCBaseBannerViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property NSView *inputContainer; // @synthesize inputContainer=_inputContainer;
@property NCAlertScrollView *contentScroller; // @synthesize contentScroller=_contentScroller;
@property NSView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain) NSView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property NCIdentityImageView *imageView; // @synthesize imageView=_imageView;
@property NSLayoutConstraint *buttonContainerWidthConstraint; // @synthesize buttonContainerWidthConstraint=_buttonContainerWidthConstraint;
@property NSLayoutConstraint *inputHeightMaxConstraint; // @synthesize inputHeightMaxConstraint=_inputHeightMaxConstraint;
@property NSLayoutConstraint *inputHeightConstraint; // @synthesize inputHeightConstraint=_inputHeightConstraint;
@property NSTextView *replyTextView; // @synthesize replyTextView=_replyTextView;
@property NCAlertButton *actionButton; // @synthesize actionButton=_actionButton;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSLayoutConstraint *closeButtonHeightConstraint; // @synthesize closeButtonHeightConstraint=_closeButtonHeightConstraint;
@property NSLayoutConstraint *closeButtonConstraint; // @synthesize closeButtonConstraint=_closeButtonConstraint;
@property NSLayoutConstraint *actionButtonHeightConstraint; // @synthesize actionButtonHeightConstraint=_actionButtonHeightConstraint;
@property(retain) NSLayoutConstraint *contentToInputConstraint; // @synthesize contentToInputConstraint=_contentToInputConstraint;
@property(retain) NSLayoutConstraint *contentMinHeightConstraint; // @synthesize contentMinHeightConstraint=_contentMinHeightConstraint;
@property(retain) NSLayoutConstraint *contentHolderConstraint; // @synthesize contentHolderConstraint=_contentHolderConstraint;
@property(retain) NSView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) _Bool showButtons; // @synthesize showButtons=_showButtons;
- (void).cxx_destruct;
- (void)alertButton:(id)arg1 itemSelectedWithContext:(id)arg2;
- (void)alertButton:(id)arg1 createItemsUsingBlock:(CDUnknownBlockType)arg2;
- (void)_createSnoozeActionButtons:(CDUnknownBlockType)arg1;
- (BOOL)alertButtonHasDelayedMenu:(id)arg1;
- (void)bannerViewEventTimeEnded:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)cancelTalkingAlert;
- (void)registerTalkingAlertIfNecessary;
- (BOOL)contentView:(id)arg1 dragStarted:(id)arg2;
- (BOOL)contentView:(id)arg1 scrolled:(id)arg2;
- (void)contentViewLayedOut:(id)arg1;
- (void)contentView:(id)arg1 mouseEntered:(BOOL)arg2;
- (void)contentView:(id)arg1 mouseClicked:(long long)arg2;
- (void)_uninstallReplyView;
- (void)_installReplyViewIfNecessary;
- (void)addQueuedNotification:(id)arg1;
- (void)windowAnimateInComplete;
- (void)_checkForAutoDismissWithMouseLocation:(struct CGPoint)arg1;
- (void)snooze:(id)arg1;
- (void)_modelDidUpdate;
- (void)contentViewUpdateConstraints:(id)arg1;
- (void)buttonAction:(id)arg1;
@property(retain, nonatomic) NCModel *model;
@property(readonly) NCAppInfo *application;
@property(readonly) NSUserNotification *notification;
- (id)bannerDelegate;
- (id)accessibilitySubRole;
- (void)setLockscreenMode:(_Bool)arg1;
- (id)nibName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModel:(id)arg1 withBehavior:(int)arg2 lockscreenMode:(_Bool)arg3;
- (id)initWithModel:(id)arg1 withBehavior:(int)arg2;
- (id)initWithModel:(id)arg1;

@end


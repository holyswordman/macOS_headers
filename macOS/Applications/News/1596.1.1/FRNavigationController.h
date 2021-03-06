//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "FRPaletteProvider-Protocol.h"
#import "FRStatusBarStyler-Protocol.h"
#import "TSStatusBarTapHandlerType-Protocol.h"
#import "TSTabBarSplitViewAutoObserver-Protocol.h"
#import "TSTabBarSplitViewPresentable-Protocol.h"
#import "TSViewControllerPreviewable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FRBarManager, NSString, UITapGestureRecognizer;

@interface FRNavigationController : UINavigationController <TSViewControllerPreviewable, UIGestureRecognizerDelegate, TSTabBarSplitViewPresentable, TSTabBarSplitViewAutoObserver, FRStatusBarStyler, FRPaletteProvider, TSStatusBarTapHandlerType>
{
    BOOL tabBarSplitViewShouldBePreserved;
    FRBarManager *_barManager;
    long long _statusbarStyle;
    UITapGestureRecognizer *_barTapGesture;
}

+ (id)fr_restorableNavigationControllerWithStoryboard:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *barTapGesture; // @synthesize barTapGesture=_barTapGesture;
@property(nonatomic) long long statusbarStyle; // @synthesize statusbarStyle=_statusbarStyle;
@property(retain, nonatomic) FRBarManager *barManager; // @synthesize barManager=_barManager;
@property(readonly, nonatomic) BOOL tabBarSplitViewShouldBePreserved; // @synthesize tabBarSplitViewShouldBePreserved;
- (void).cxx_destruct;
- (void)statusBarTappedWith:(long long)arg1;
- (void)tabBarSplitViewWillChangeDisplayModeTo:(long long)arg1;
- (void)setPreviewMode:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (id)palette;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)setBarsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStatusBarStyle:(long long)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets squishedInsets;
- (void)dealloc;
- (id)previewActionItems;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)tabBarSplitViewPresentationFor:(long long)arg1;
- (void)viewDidLoad;
- (void)setPreviewing:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCWidget.h"

#import "NSSharingServiceDelegate.h"

@class CAPluginLayer, NCWindowPluginLayerView, NSArray, NSLayoutConstraint, NSObject<OS_dispatch_source>, NSString, NSView;

@interface NCShareWidget : NCWidget <NSSharingServiceDelegate>
{
    CAPluginLayer *_pluginLayer;
    NSArray *_topLevelObjects;
    double _height;
    double _originalHeight;
    NSObject<OS_dispatch_source> *_configuration_timer;
    int _notify_token;
    id _shareRestoreState;
    NSString *_shareRestoreService;
    BOOL _saveShareState;
    BOOL _showingShareSheet;
    BOOL _loading;
    NSArray *_services;
    BOOL _configurationHasBeenUpdated;
    BOOL _twitterConfigured;
    BOOL _facebookConfigured;
    BOOL _weiboConfigured;
    BOOL _tencentWeiboConfigured;
    BOOL _messagesConfigured;
    NSString *_localizedTwitterName;
    NSString *_localizedFacebookName;
    NSString *_localizedWeiboName;
    NSString *_localizedTencentWeiboName;
    NSString *_localizedMessagesName;
    NSObject<OS_dispatch_source> *_refreshSource;
    _Bool _showing;
    NCWindowPluginLayerView *_view;
    NSView *_buttonView;
    NSLayoutConstraint *_buttonViewWidthConstraint;
}

@property(retain) NSLayoutConstraint *buttonViewWidthConstraint; // @synthesize buttonViewWidthConstraint=_buttonViewWidthConstraint;
@property(retain) NSView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain) NCWindowPluginLayerView *view; // @synthesize view=_view;
- (double)height;
- (void).cxx_destruct;
- (void)sharingService:(id)arg1 hideWindowWithID:(unsigned int)arg2 success:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (void)sharingService:(id)arg1 showWindowWithID:(unsigned int)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)_shareWithService:(id)arg1 restoreState:(id)arg2;
- (void)share:(id)arg1;
- (void)updateOrigin:(id)arg1;
- (void)checkAccountConfiguration;
- (void)_accountsChanged;
- (void)widgetLocationUpdated;
- (void)widgetViewShown;
- (void)widgetViewHidden;
- (void)widgetRemovedFromView;
- (void)widgetInsertedIntoView;
- (void)_layoutSharebuttons;
- (id)accessibilityDescriptionKey;
- (id)_containingCellView;
- (BOOL)available;
- (void)dealloc;
- (id)initForWidth:(double)arg1;

@end


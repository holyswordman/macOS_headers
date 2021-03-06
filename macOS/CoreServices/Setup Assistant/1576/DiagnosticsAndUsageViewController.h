//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "HiCloudViewController.h"

#import "NSTextViewDelegate-Protocol.h"

@class DiagnosticsInfoSheetController, NSColor, NSLayoutConstraint, NSMatrix, NSString, NSTextField;

@interface DiagnosticsAndUsageViewController : HiCloudViewController <NSTextViewDelegate>
{
    BOOL _sendDiagnosticsToApple;
    BOOL _sendThirdPartyDiagnosticsToApple;
    NSMatrix *_appleDiagnosticsMatix;
    NSTextField *_appleDiagnosticsText;
    NSLayoutConstraint *_appDevDiagnosticsMatixTopConstraint;
    DiagnosticsInfoSheetController *_diagnosticsInfoSheet;
}

+ (id)keyPathsForValuesAffectingThirdPartyDescriptionLabelColor;
@property(retain) DiagnosticsInfoSheetController *diagnosticsInfoSheet; // @synthesize diagnosticsInfoSheet=_diagnosticsInfoSheet;
@property BOOL sendThirdPartyDiagnosticsToApple; // @synthesize sendThirdPartyDiagnosticsToApple=_sendThirdPartyDiagnosticsToApple;
@property BOOL sendDiagnosticsToApple; // @synthesize sendDiagnosticsToApple=_sendDiagnosticsToApple;
@property NSLayoutConstraint *appDevDiagnosticsMatixTopConstraint; // @synthesize appDevDiagnosticsMatixTopConstraint=_appDevDiagnosticsMatixTopConstraint;
@property NSTextField *appleDiagnosticsText; // @synthesize appleDiagnosticsText=_appleDiagnosticsText;
@property NSMatrix *appleDiagnosticsMatix; // @synthesize appleDiagnosticsMatix=_appleDiagnosticsMatix;
@property(readonly) NSColor *thirdPartyDescriptionLabelColor;
- (void)didChangeValueForKey:(id)arg1;
- (void)showInfoSheet:(id)arg1;
- (void)_switchToSingleButtonMode;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)nextViewIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


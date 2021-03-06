//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSWindowDelegate-Protocol.h"

@class AUDocument, AUSetupController, NSBox, NSButton, NSMatrix, NSProgressIndicator, NSString, NSTabView, NSTextField, NSWindow;

@interface AUWPSViewController : NSViewController <NSWindowDelegate>
{
    AUDocument *containerDocument;
    AUSetupController *setupController;
    NSString *pinValue;
    long long wpsMode;
    unsigned int acpWPSMode;
    BOOL wpsStarted;
    BOOL done;
    BOOL success;
    BOOL cancel;
    NSString *wpsStatusDescString;
    NSString *wpsStatusString;
    NSString *wpsClientMAC;
    NSString *wpsClientName;
    NSWindow *sheetWindow;
    NSTextField *wpsTitle;
    NSBox *wpsLine;
    NSTabView *wpsTabView;
    NSTextField *wpsModeChoiceDescription;
    NSTextField *wpsModeChoiceLabel;
    NSMatrix *wpsModeChoiceRadioMatrix;
    NSTextField *wpsPINDescription;
    NSTabView *wpsPINCancelingTabView;
    NSTextField *wpsPINLabel;
    NSTextField *wpsPINTextField;
    NSProgressIndicator *wpsPINCancelingProgress;
    NSTextField *wpsPINCancelingLabel;
    NSTextField *wpsStatusDescription;
    NSProgressIndicator *wpsStatusProgress;
    NSTextField *wpsStatusText;
    NSTextField *wpsStatusClientDescLabel;
    NSTextField *wpsStatusClientDescription;
    NSTextField *wpsStatusClientMACLabel;
    NSTextField *wpsStatusClientMACAddress;
    NSButton *wpsCancel;
    NSButton *wpsContinue;
    BOOL _valid;
}

@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *wpsClientName; // @synthesize wpsClientName;
@property(retain, nonatomic) NSString *wpsClientMAC; // @synthesize wpsClientMAC;
@property(retain, nonatomic) NSString *wpsStatusString; // @synthesize wpsStatusString;
@property(retain, nonatomic) NSString *wpsStatusDescString; // @synthesize wpsStatusDescString;
@property(nonatomic) BOOL success; // @synthesize success;
@property(nonatomic) BOOL cancel; // @synthesize cancel;
@property(nonatomic) BOOL done; // @synthesize done;
@property(retain, nonatomic) NSString *pinValue; // @synthesize pinValue;
@property(nonatomic) long long wpsMode; // @synthesize wpsMode;
@property(retain, nonatomic) AUSetupController *setupController; // @synthesize setupController;
@property(retain, nonatomic) AUDocument *containerDocument; // @synthesize containerDocument;
@property(retain, nonatomic) NSWindow *sheetWindow; // @synthesize sheetWindow;
- (BOOL)valid;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelSheet:(id)arg1;
- (void)continueSheet:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)dealloc;
- (void)awakeFromNib;
- (id)nibName;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)processWPSInfo:(id)arg1;
- (void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (void)setupRPCResponseWithResult:(int)arg1 rpcSelector:(int)arg2 responseDict:(id)arg3 forController:(id)arg4;
- (void)stopWPSMode;
- (void)allowPINClient;
- (void)startWPSMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


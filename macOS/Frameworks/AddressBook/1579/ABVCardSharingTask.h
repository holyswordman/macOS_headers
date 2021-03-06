//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/NSSharingServiceDelegate-Protocol.h>
#import <AddressBook/NSSharingServicePickerDelegate-Protocol.h>

@class NSArray, NSSharingServicePicker, NSString;
@protocol ABShareKitTransitionProvider;

@interface ABVCardSharingTask : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    NSSharingServicePicker *_servicePicker;
    id <ABShareKitTransitionProvider> _transitionProvider;
    NSString *_emailSubject;
    NSArray *_defaultRecipients;
}

+ (id)menuItemTitleForSharingMyCardUsingService:(id)arg1;
+ (id)menuItemTitleForSharingServiceName:(id)arg1;
+ (id)vCardSharingServices;
@property(retain) id <ABShareKitTransitionProvider> transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(copy) NSArray *defaultRecipients; // @synthesize defaultRecipients=_defaultRecipients;
@property(copy) NSString *emailSubject; // @synthesize emailSubject=_emailSubject;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (void)shareVCardForPerson:(id)arg1 addressBook:(id)arg2 usingService:(id)arg3;
- (void)shareVCardForPerson:(id)arg1 addressBook:(id)arg2 showingServicePickerFromView:(id)arg3;
- (id)sharingParametersForService:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFNeXTStore.h>

@interface MFParentalControlStore : MFNeXTStore
{
}

- (void)saveChanges;
- (void)setParentalControlMessageState:(long long)arg1 forMessages:(id)arg2;
- (void)setParentalControlMessageState:(long long)arg1 forMessage:(id)arg2;
- (id)realAccount;
- (id)_defaultRouterDestination;
- (BOOL)_shouldCallCompactWhenClosing;

@end


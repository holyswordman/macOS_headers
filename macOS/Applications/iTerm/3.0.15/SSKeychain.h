//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSKeychain : NSObject
{
}

+ (id)accountsForService:(id)arg1;
+ (id)allAccounts;
+ (BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id *)arg4;
+ (BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3;
+ (BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (BOOL)deletePasswordForService:(id)arg1 account:(id)arg2;
+ (id)passwordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (id)passwordForService:(id)arg1 account:(id)arg2;

@end


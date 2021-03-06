//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MSDeleterDelegate-Protocol.h"

@class NSString;
@protocol MSDeleter, MSDeleterPlugin;

@protocol MSDeleterPlugin <MSDeleterDelegate>
+ (id <MSDeleterPlugin>)deleterPluginForPersonID:(NSString *)arg1;

@optional
- (void)deleterWillDeassignPluginAsDelegateOfDeleter:(id <MSDeleter>)arg1;
- (void)deleterWillAssignPluginAsDelegateOfDeleter:(id <MSDeleter>)arg1;
@end


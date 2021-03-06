//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKSource, NSMutableArray;

@interface RemindersAccount : NSObject
{
    EKSource *_source;
    NSMutableArray *_lists;
}

@property(retain) NSMutableArray *lists; // @synthesize lists=_lists;
@property(retain) EKSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (BOOL)canDeleteLists:(id)arg1;
- (long long)displayOrder;
- (id)newList;
- (BOOL)isServerAccount;
- (id)identifier;
- (id)calendars;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isICloud;
- (BOOL)isEditable;
- (id)title;
- (id)initWithSource:(id)arg1;
- (void)removeFromScriptingListsAtIndex:(unsigned long long)arg1;
- (void)insertInScriptingLists:(id)arg1;
- (id)scriptingIdentifier;
- (id)scriptingTitle;
- (id)scriptingLists;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)objectSpecifier;

@end


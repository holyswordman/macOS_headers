//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSPDatabaseArchiveManager : NSObject
{
}

+ (BOOL)_processGetRelationships:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (BOOL)_processDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_processLoad:(id)arg1 classType:(int *)arg2 database:(id)arg3 fileManager:(id)arg4 error:(id *)arg5;
+ (BOOL)populateDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3;

@end


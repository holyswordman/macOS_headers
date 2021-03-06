//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMMigrationEngineStep.h>

@class NSMutableArray, NSObject, SMCopyEngine2;
@protocol OS_dispatch_queue;

@interface SMMigrateFiles : SMMigrationEngineStep
{
    BOOL _replacePrinters;
    BOOL _kextCacheNeedsUpdate;
    NSMutableArray *_cpEngineArray;
    NSObject<OS_dispatch_queue> *_cpEngineQueue;
    SMCopyEngine2 *_currentCopyEngine;
    NSMutableArray *_fileGroupingsToMigrate;
}

@property BOOL kextCacheNeedsUpdate; // @synthesize kextCacheNeedsUpdate=_kextCacheNeedsUpdate;
@property(retain) NSMutableArray *fileGroupingsToMigrate; // @synthesize fileGroupingsToMigrate=_fileGroupingsToMigrate;
@property(retain) SMCopyEngine2 *currentCopyEngine; // @synthesize currentCopyEngine=_currentCopyEngine;
@property(retain) NSObject<OS_dispatch_queue> *cpEngineQueue; // @synthesize cpEngineQueue=_cpEngineQueue;
@property(retain) NSMutableArray *cpEngineArray; // @synthesize cpEngineArray=_cpEngineArray;
@property BOOL replacePrinters; // @synthesize replacePrinters=_replacePrinters;
- (void).cxx_destruct;
- (id)postProcess;
- (id)process;
- (id)preProcess;
- (id)description;
- (void)cancel;
- (void)addFileGrouping:(id)arg1;
- (long long)sizeComplete;
- (id)initWithEngine:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_localizeFoldersForApplications;
- (BOOL)_localizeParentFolderForBundleAtPath:(id)arg1;
- (BOOL)_setupCopiesForFileGroups;
- (void)_setupCopyNonSystemReceiptsForUpgrade;
- (void)_setupReplacingPrinters;
- (void)_evaluateMigratingPrinters;
- (void)_orderCopyEngines;

@end


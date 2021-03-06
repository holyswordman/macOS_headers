//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/SPKQuery.h>

@class NSMutableArray, NSMutableDictionary, NSString, PRSResult, SPMetadataQuery;

@interface SPSpotQuery : SPKQuery
{
    unsigned int _qosClass;
    BOOL _parsecFinished;
    BOOL _metadataFinished;
    BOOL _groupResults;
    BOOL _topHitIsInOfLastResponse;
    double _timeOfLastResponse;
    unsigned long long _countOfLastResponse;
    SPMetadataQuery *_mainQuery;
    NSMutableArray *_auxQueries;
    NSMutableDictionary *_responses;
    NSString *_fbq;
    long long _delta;
    NSString *_updatedUserQueryString;
    NSString *_shortcutUserQueryString;
    PRSResult *_shortcutResult;
}

+ (id)_queriesForUserQuery:(id)arg1 options:(unsigned long long)arg2;
+ (id)_queriesForUserQuery:(id)arg1 updatedQueries:(id)arg2 otherQueries:(id)arg3;
+ (id)queryClasses;
@property(retain) PRSResult *shortcutResult; // @synthesize shortcutResult=_shortcutResult;
@property(retain) NSString *shortcutUserQueryString; // @synthesize shortcutUserQueryString=_shortcutUserQueryString;
@property(retain) NSString *updatedUserQueryString; // @synthesize updatedUserQueryString=_updatedUserQueryString;
@property long long delta; // @synthesize delta=_delta;
@property(retain) NSString *fbq; // @synthesize fbq=_fbq;
@property(retain) NSMutableDictionary *responses; // @synthesize responses=_responses;
@property(retain) NSMutableArray *auxQueries; // @synthesize auxQueries=_auxQueries;
@property(retain) SPMetadataQuery *mainQuery; // @synthesize mainQuery=_mainQuery;
@property BOOL topHitIsInOfLastResponse; // @synthesize topHitIsInOfLastResponse=_topHitIsInOfLastResponse;
@property unsigned long long countOfLastResponse; // @synthesize countOfLastResponse=_countOfLastResponse;
@property double timeOfLastResponse; // @synthesize timeOfLastResponse=_timeOfLastResponse;
@property BOOL groupResults; // @synthesize groupResults=_groupResults;
@property(readonly) BOOL metadataFinished; // @synthesize metadataFinished=_metadataFinished;
@property(readonly) BOOL parsecFinished; // @synthesize parsecFinished=_parsecFinished;
- (void).cxx_destruct;
- (void)_processResponse:(id)arg1 toQuery:(id)arg2;
- (void)sendFinishedFeedback;
- (void)sendCancelFeedback;
- (void)_addAssistantQueryResults:(id)arg1 toResults:(id)arg2;
- (BOOL)_isInternallyCompleted;
- (BOOL)_topHitIsIn;
- (BOOL)updateUserQueryString:(id)arg1;
- (id)userQueryString;
- (void)setPurpose:(int)arg1;
- (int)purpose;
- (void)cancel;
- (void)start;
- (void)_startNonMetadata;
- (void)_startMetadataTextContent;
- (void)_startMetadata;
- (void)_startQueryClass:(Class)arg1 withStartOrder:(unsigned long long)arg2;
- (void)setQueryOptions:(unsigned long long)arg1;
- (id)description;
- (id)initWithUserQuery:(id)arg1 options:(unsigned long long)arg2;

@end


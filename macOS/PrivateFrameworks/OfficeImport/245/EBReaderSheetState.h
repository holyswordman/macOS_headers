//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EBReaderState, EDSheet;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : NSObject
{
    EBReaderState *mReaderState;
    EDSheet *mEDSheet;
    struct map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long>>> mSharedFormulas;
    unsigned long long mChartIndex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportWorksheetWarning:(struct TCTaggedMessageStructure *)arg1;
- (unsigned long long)nextChartIndex;
- (void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2;
- (unsigned long long)sharedFormulaIndexForRowCol:(int)arg1;
- (void)setEDSheet:(id)arg1;
- (id)edSheet;
- (id)resources;
- (id)workbook;
- (struct XlBinaryReader *)xlReader;
- (id)readerState;
- (void)dealloc;
- (id)initWithReaderState:(id)arg1;

@end


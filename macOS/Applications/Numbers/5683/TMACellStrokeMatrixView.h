//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMatrix.h>

@class NSDictionary, NSMutableSet, NSSet;
@protocol TMACellStrokeMatrixViewDelegate;

@interface TMACellStrokeMatrixView : NSMatrix
{
    NSMutableSet *mSelectedValueCells;
    NSDictionary *mMaskDictionary;
    BOOL mCmdKeyPressed;
    id <TMACellStrokeMatrixViewDelegate> mCellStrokeMatrixDelegate;
}

@property(nonatomic) id <TMACellStrokeMatrixViewDelegate> cellStrokeMatrixDelegate; // @synthesize cellStrokeMatrixDelegate=mCellStrokeMatrixDelegate;
@property(nonatomic) BOOL cmdKeyPressed; // @synthesize cmdKeyPressed=mCmdKeyPressed;
- (BOOL)onlyOutsideStrokesSelected;
@property(readonly, nonatomic) NSSet *selectedValues;
- (void)setSelectedValuesForStrokeSelectionMask:(unsigned int)arg1;
- (unsigned int)strokeSelectionMask;
- (void)refreshMatrixWithSingleCellWide:(BOOL)arg1 andSingleCellHigh:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)deselectAllCells;
- (void)toggleCell:(id)arg1;
- (BOOL)selectCellWithTag:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (id)p_matrixGlyphNamesByTag;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end


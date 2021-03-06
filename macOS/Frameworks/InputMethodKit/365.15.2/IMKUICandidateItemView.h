//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IMKUICandidate, NSString;
@protocol IMKUICandidateItemViewHandling;

@interface IMKUICandidateItemView : NSView
{
    IMKUICandidate *_candidateItem;
    id <IMKUICandidateItemViewHandling> _delegate;
    NSString *_selectionKey;
}

@property(copy, nonatomic) NSString *selectionKey; // @synthesize selectionKey=_selectionKey;
@property(nonatomic) __weak id <IMKUICandidateItemViewHandling> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMKUICandidate *candidateItem; // @synthesize candidateItem=_candidateItem;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;

@end


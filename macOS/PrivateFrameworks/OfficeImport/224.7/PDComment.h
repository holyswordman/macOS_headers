//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PDComment : NSObject
{
    struct CGPoint mPosition;
    NSString *mText;
    unsigned int mAuthorId;
    NSDate *mDate;
    unsigned int mIndex;
}

- (id).cxx_construct;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (void)setDate:(id)arg1;
- (id)date;
- (void)setAuthorId:(unsigned int)arg1;
- (unsigned int)authorId;
- (void)setText:(id)arg1;
- (id)text;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)dealloc;
- (id)init;

@end


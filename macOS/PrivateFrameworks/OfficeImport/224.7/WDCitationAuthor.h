//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDCitationAuthor : NSObject
{
    NSString *mFirst;
    NSString *mLast;
}

@property(retain, nonatomic) NSString *last; // @synthesize last=mLast;
@property(retain, nonatomic) NSString *first; // @synthesize first=mFirst;
- (id)initWithFirst:(id)arg1 last:(id)arg2;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface NCTodaySummaryItemEntry : NSObject
{
    NSString *_text;
    NSString *_identifier;
    NSImage *_image;
    CDUnknownBlockType _action;
}

@property(copy) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface NSSubrangeData : NSData
{
    struct _NSRange _range;
    NSData *_data;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;
- (id)init;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_isCompact;
- (const void *)bytes;
- (unsigned long long)length;

@end


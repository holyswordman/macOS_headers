//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSImage, NSSharingService, NSWindow;

@protocol NSSharingServiceDelegate <NSObject>

@optional
- (NSWindow *)sharingService:(NSSharingService *)arg1 sourceWindowForShareItems:(NSArray *)arg2 sharingContentScope:(long long *)arg3;
- (NSImage *)sharingService:(NSSharingService *)arg1 transitionImageForShareItem:(id <NSPasteboardWriting>)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(NSSharingService *)arg1 sourceFrameOnScreenForShareItem:(id <NSPasteboardWriting>)arg2;
- (void)sharingService:(NSSharingService *)arg1 didShareItems:(NSArray *)arg2;
- (void)sharingService:(NSSharingService *)arg1 didFailToShareItems:(NSArray *)arg2 error:(NSError *)arg3;
- (void)sharingService:(NSSharingService *)arg1 willShareItems:(NSArray *)arg2;
@end


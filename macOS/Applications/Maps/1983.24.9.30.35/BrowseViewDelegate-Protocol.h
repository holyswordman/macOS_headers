//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BrowseView, GEOSearchCategory;

@protocol BrowseViewDelegate <NSObject>
- (void)browseView:(BrowseView *)arg1 categoryShown:(GEOSearchCategory *)arg2;
- (void)browseView:(BrowseView *)arg1 categorySelected:(GEOSearchCategory *)arg2;
- (void)browseViewCloseSelected:(BrowseView *)arg1;
- (void)browseViewWillClose:(BrowseView *)arg1;
@end


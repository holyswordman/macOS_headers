//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AnnotationKit/TSDBrushStroke.h>

@class NSColor, NSString;

@interface TSDMutableBrushStroke : TSDBrushStroke
{
    int join;
    NSColor *color;
    double width;
    double miterLimit;
    NSString *strokeName;
}

@property(copy, nonatomic) NSString *strokeName; // @synthesize strokeName;
@property(nonatomic) double miterLimit; // @synthesize miterLimit;
@property(nonatomic) int join; // @synthesize join;
@property(nonatomic) double width; // @synthesize width;
@property(retain, nonatomic) NSColor *color; // @synthesize color;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


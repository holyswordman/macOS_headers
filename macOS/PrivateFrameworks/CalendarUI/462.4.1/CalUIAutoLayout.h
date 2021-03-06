//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalUIAutoLayout : NSObject
{
}

+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (void)spanHeightOfView:(id)arg1 withView:(id)arg2;
+ (void)spanHeightOfView:(id)arg1 withView:(id)arg2 inset:(double)arg3;
+ (void)spanWidthOfView:(id)arg1 withView:(id)arg2;
+ (void)spanWidthOfView:(id)arg1 withView:(id)arg2 inset:(double)arg3;
+ (void)centerView:(id)arg1 inView:(id)arg2;
+ (void)fillView:(id)arg1 withView:(id)arg2;
+ (void)spanContainerHeightForView:(id)arg1;
+ (void)spanContainerWidthForView:(id)arg1;
+ (void)fillContainerWithView:(id)arg1;
+ (void)alignViews:(id)arg1 withAttribute:(long long)arg2;
+ (void)enableAutoLayoutForViews:(id)arg1;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toView:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 priority:(float)arg7;
+ (void)setSize:(struct CGSize)arg1 forView:(id)arg2;
+ (void)setHeight:(double)arg1 forView:(id)arg2;
+ (void)setWidth:(double)arg1 forView:(id)arg2;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toView:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 minimum:(BOOL)arg4;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 constant:(double)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 priority:(float)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3;
+ (id)alignView:(id)arg1 withAttribute:(long long)arg2 constant:(double)arg3;
+ (void)installConstraintsWithVisualFormat:(id)arg1 withViews:(id)arg2 metrics:(id)arg3 options:(unsigned long long)arg4;
+ (void)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 metrics:(id)arg3;
+ (void)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 options:(unsigned long long)arg3;
+ (void)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2;

@end


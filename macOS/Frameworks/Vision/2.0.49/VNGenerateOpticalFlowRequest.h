//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNTargetedImageRequest.h>

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest
{
}

- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (id)observationsCacheKey;
- (BOOL)_calculateLKTVectorResult:(struct __CVBuffer *)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 toPixelBuffer:(struct __CVBuffer *)arg3 ofWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;
- (id)_initializedLKTMetalContextAndReturnError:(id *)arg1;
- (struct __CVBuffer *)_createLKTVectorResultPixelBufferForImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 error:(id *)arg3;
- (struct __CVBuffer *)_createLKTPixelBufferFromPixelRegionOfInterest:(struct CGRect)arg1 inImageBuffer:(id)arg2 error:(id *)arg3;

@end


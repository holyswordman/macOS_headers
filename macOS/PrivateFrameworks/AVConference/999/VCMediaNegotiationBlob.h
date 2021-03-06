//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray, NSString, VCMediaNegotiationBlobAudioSettings, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlob : PBCodable <NSCopying>
{
    unsigned long long _ntpTime;
    VCMediaNegotiationBlobAudioSettings *_audioSettings;
    NSMutableArray *_bandwidthSettings;
    NSString *_basebandCodec;
    unsigned int _basebandCodecSampleRate;
    VCMediaNegotiationBlobCaptionsSettings *_captionsSettings;
    VCMediaNegotiationBlobMomentsSettings *_momentsSettings;
    NSMutableArray *_multiwayAudioStreams;
    VCMediaNegotiationBlobVideoSettings *_screenSettings;
    NSString *_userAgent;
    VCMediaNegotiationBlobVideoSettings *_videoSettings;
    BOOL _allowDynamicMaxBitrate;
    BOOL _allowsContentsChangeWithAspectPreservation;
    struct {
        unsigned int ntpTime:1;
        unsigned int basebandCodecSampleRate:1;
        unsigned int allowDynamicMaxBitrate:1;
        unsigned int allowsContentsChangeWithAspectPreservation:1;
    } _has;
}

+ (Class)multiwayAudioStreamsType;
+ (Class)bandwidthSettingsType;
@property(nonatomic) unsigned long long ntpTime; // @synthesize ntpTime=_ntpTime;
@property(retain, nonatomic) VCMediaNegotiationBlobMomentsSettings *momentsSettings; // @synthesize momentsSettings=_momentsSettings;
@property(retain, nonatomic) NSMutableArray *multiwayAudioStreams; // @synthesize multiwayAudioStreams=_multiwayAudioStreams;
@property(retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings; // @synthesize captionsSettings=_captionsSettings;
@property(retain, nonatomic) NSMutableArray *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property(nonatomic) unsigned int basebandCodecSampleRate; // @synthesize basebandCodecSampleRate=_basebandCodecSampleRate;
@property(retain, nonatomic) NSString *basebandCodec; // @synthesize basebandCodec=_basebandCodec;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings; // @synthesize screenSettings=_screenSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(nonatomic) BOOL allowsContentsChangeWithAspectPreservation; // @synthesize allowsContentsChangeWithAspectPreservation=_allowsContentsChangeWithAspectPreservation;
@property(nonatomic) BOOL allowDynamicMaxBitrate; // @synthesize allowDynamicMaxBitrate=_allowDynamicMaxBitrate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNtpTime;
@property(readonly, nonatomic) BOOL hasMomentsSettings;
- (id)multiwayAudioStreamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)multiwayAudioStreamsCount;
- (void)addMultiwayAudioStreams:(id)arg1;
- (void)clearMultiwayAudioStreams;
@property(readonly, nonatomic) BOOL hasCaptionsSettings;
- (id)bandwidthSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bandwidthSettingsCount;
- (void)addBandwidthSettings:(id)arg1;
- (void)clearBandwidthSettings;
@property(nonatomic) BOOL hasBasebandCodecSampleRate;
@property(readonly, nonatomic) BOOL hasBasebandCodec;
@property(readonly, nonatomic) BOOL hasUserAgent;
@property(readonly, nonatomic) BOOL hasScreenSettings;
@property(readonly, nonatomic) BOOL hasVideoSettings;
@property(readonly, nonatomic) BOOL hasAudioSettings;
@property(nonatomic) BOOL hasAllowsContentsChangeWithAspectPreservation;
@property(nonatomic) BOOL hasAllowDynamicMaxBitrate;
- (void)dealloc;
- (void)printWithTitle:(id)arg1 blobSize:(unsigned int)arg2 logFile:(void *)arg3;
- (void)printMomentsSettingsWithLogFile:(void *)arg1;
- (void)printCaptionsSettingsWithLogFile:(void *)arg1;
- (void)printBandwidthSettingsWithLogFile:(void *)arg1;

@end


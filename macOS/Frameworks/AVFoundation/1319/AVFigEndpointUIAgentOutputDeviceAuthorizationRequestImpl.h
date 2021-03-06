//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputDeviceAuthorizationRequestImpl-Protocol.h>

@class AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl, AVOutputDevice, NSString;

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject <AVOutputDeviceAuthorizationRequestImpl>
{
    AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *_parentSession;
    NSString *_uniqueID;
    AVOutputDevice *_outputDevice;
    NSString *_tokenType;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, nonatomic) NSString *authorizationTokenType; // @synthesize authorizationTokenType=_tokenType;
@property(readonly, nonatomic) AVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_uniqueID;
@property __weak AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *parentAuthorizationSessionImpl; // @synthesize parentAuthorizationSessionImpl=_parentSession;
- (void).cxx_destruct;
- (void)enterTerminalStatus:(long long)arg1 error:(id)arg2;
- (void)cancel;
- (void)respondWithAuthorizationToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithID:(id)arg1 outputDevice:(id)arg2 authorizationTokenType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


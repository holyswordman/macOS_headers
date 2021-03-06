//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFDigestOperation-Protocol.h>
#import <SecurityFoundation/SFDigestOperationInternal-Protocol.h>

@class NSData, NSString;

@interface _SFSHA224DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation>
{
    id _sha224DigestOperationInternal;
}

+ (long long)blockSize;
+ (long long)outputSize;
+ (BOOL)supportsSecureCoding;
+ (id)digest:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_ccDigestInfo) const struct ccdigest_info *ccDigestInfo;
@property(readonly, nonatomic, getter=_secKeyECDSAAlgorithm) const struct __CFString *secKeyECDSAAlgorithm;
- (void)addData:(id)arg1;
@property(readonly, copy) NSData *hashValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


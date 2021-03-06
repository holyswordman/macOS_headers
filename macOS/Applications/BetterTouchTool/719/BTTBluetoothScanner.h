//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class BTTBluetothRSSIEstimator, CBCentralManager, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BTTBluetoothScanner : NSObject <CLLocationManagerDelegate, CBCentralManagerDelegate>
{
    BOOL _scanning;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_managerQueue;
    NSString *_bluetoothState;
    BTTBluetothRSSIEstimator *_rssi;
}

+ (id)sharedBluetoothScanner;
@property(retain, nonatomic) BTTBluetothRSSIEstimator *rssi; // @synthesize rssi=_rssi;
@property(nonatomic) BOOL scanning; // @synthesize scanning=_scanning;
@property(nonatomic) NSString *bluetoothState; // @synthesize bluetoothState=_bluetoothState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *managerQueue; // @synthesize managerQueue=_managerQueue;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void).cxx_destruct;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)startScanning;
- (void)stopScanning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


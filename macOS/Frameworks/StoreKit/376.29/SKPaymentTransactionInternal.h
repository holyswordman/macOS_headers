//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSString, SKPayment, SKPaymentTransaction;

@interface SKPaymentTransactionInternal : NSObject
{
    NSError *_error;
    SKPaymentTransaction *_originalTransaction;
    SKPayment *_payment;
    NSString *_temporaryIdentifier;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
    NSData *_transactionReceipt;
    long long _transactionState;
    NSDictionary *_assets;
    NSMutableArray *_downloads;
}

@property(retain) NSMutableArray *downloads; // @synthesize downloads=_downloads;
@property(retain) NSDictionary *assets; // @synthesize assets=_assets;
@property long long transactionState; // @synthesize transactionState=_transactionState;
@property(retain) NSData *transactionReceipt; // @synthesize transactionReceipt=_transactionReceipt;
@property(retain) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(retain) NSString *temporaryIdentifier; // @synthesize temporaryIdentifier=_temporaryIdentifier;
@property(retain) SKPayment *payment; // @synthesize payment=_payment;
@property(retain) SKPaymentTransaction *originalTransaction; // @synthesize originalTransaction=_originalTransaction;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)dealloc;

@end


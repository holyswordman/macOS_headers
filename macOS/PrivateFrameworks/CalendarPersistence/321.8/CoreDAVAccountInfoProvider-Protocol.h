//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/NSObject-Protocol.h>

@class CoreDAVTask, NSData, NSDictionary, NSError, NSSet, NSString, NSURL, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace;
@protocol CoreDAVOAuthInfoProvider;

@protocol CoreDAVAccountInfoProvider <NSObject>
- (BOOL)shouldFailAllTasks;
- (BOOL)handleCertificateError:(NSError *)arg1;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(void (^)(int))arg1;
- (NSString *)userAgentHeader;
- (NSSet *)serverComplianceClasses;
- (NSString *)accountID;
- (NSURL *)principalURL;
- (NSData *)identityPersist;
- (NSString *)password;
- (NSString *)user;
- (NSString *)serverRoot;
- (long long)port;
- (NSString *)host;
- (NSString *)scheme;

@optional
- (void)webLoginRequestedAtURL:(NSURL *)arg1 reasonString:(NSString *)arg2 completionBlock:(void (^)(int))arg3;
- (NSString *)clientToken;
- (void)clientTokenRequestedByServer;
- (BOOL)shouldCompressRequests;
- (BOOL)shouldUseOpportunisticSockets;
- (struct __CFURLStorageSession *)copyStorageSession;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1 forTask:(CoreDAVTask *)arg2;
- (void)noteFailedProtocolRequestForTask:(CoreDAVTask *)arg1;
- (void)noteFailedNetworkRequestForTask:(CoreDAVTask *)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(CoreDAVTask *)arg2;
- (BOOL)renewCredential;
- (BOOL)shouldTryRenewingCredential;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)shouldSendClientInfoHeaderForURL:(NSURL *)arg1;
- (BOOL)shouldHandleHTTPCookiesForURL:(NSURL *)arg1;
- (void)noteHomeSetOnDifferentHost:(NSURL *)arg1;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)shouldRetryUnauthorizedConnection:(NSURLConnection *)arg1;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg1 withConnection:(NSURLConnection *)arg2;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg1;
- (BOOL)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 withConnection:(NSURLConnection *)arg2;
- (BOOL)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1;
- (id <CoreDAVOAuthInfoProvider>)oauthInfoProvider;
- (NSDictionary *)customConnectionProperties;
- (NSDictionary *)additionalHeaderValues;
@end


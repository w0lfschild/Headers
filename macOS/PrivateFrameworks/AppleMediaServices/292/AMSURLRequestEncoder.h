//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSBagConsumer.h"
#import "AMSBagConsumer_Project.h"
#import "AMSRequestEncoding.h"

@class ACAccount, AMSKeychainOptions, AMSProcessInfo, AMSSigningSecurityService, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSessionTask;

@interface AMSURLRequestEncoder : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSRequestEncoding>
{
    BOOL _compressRequestBody;
    BOOL _disableResponseDecoding;
    BOOL _enableRemoteSecuritySigning;
    BOOL _includeClientVersions;
    BOOL _shouldSetCookiesFromResponse;
    BOOL _shouldSetStorefrontFromResponse;
    BOOL _urlKnownToBeTrusted;
    ACAccount *_account;
    NSDictionary *_additionalMetrics;
    long long _anisetteType;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    long long _dialogOptions;
    AMSKeychainOptions *_keychainOptions;
    NSString *_logUUID;
    long long _mescalType;
    long long _requestEncoding;
    id <AMSResponseDecoding> _responseDecoder;
    id <AMSURLBagContract> _bagContract;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _encodeCount;
    AMSSigningSecurityService *_signingService;
    NSURLSessionTask *_parentTask;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(retain) NSURLSessionTask *parentTask; // @synthesize parentTask=_parentTask;
@property(readonly) AMSSigningSecurityService *signingService; // @synthesize signingService=_signingService;
@property long long encodeCount; // @synthesize encodeCount=_encodeCount;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) id <AMSURLBagContract> bagContract; // @synthesize bagContract=_bagContract;
@property BOOL urlKnownToBeTrusted; // @synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted;
@property BOOL shouldSetStorefrontFromResponse; // @synthesize shouldSetStorefrontFromResponse=_shouldSetStorefrontFromResponse;
@property BOOL shouldSetCookiesFromResponse; // @synthesize shouldSetCookiesFromResponse=_shouldSetCookiesFromResponse;
@property(retain) id <AMSResponseDecoding> responseDecoder; // @synthesize responseDecoder=_responseDecoder;
@property long long requestEncoding; // @synthesize requestEncoding=_requestEncoding;
@property long long mescalType; // @synthesize mescalType=_mescalType;
@property(retain) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(retain) AMSKeychainOptions *keychainOptions; // @synthesize keychainOptions=_keychainOptions;
@property BOOL includeClientVersions; // @synthesize includeClientVersions=_includeClientVersions;
@property BOOL enableRemoteSecuritySigning; // @synthesize enableRemoteSecuritySigning=_enableRemoteSecuritySigning;
@property long long dialogOptions; // @synthesize dialogOptions=_dialogOptions;
@property BOOL disableResponseDecoding; // @synthesize disableResponseDecoding=_disableResponseDecoding;
@property BOOL compressRequestBody; // @synthesize compressRequestBody=_compressRequestBody;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property long long anisetteType; // @synthesize anisetteType=_anisetteType;
@property(retain) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (id)requestWithMethod:(long long)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)requestWithMethod:(long long)arg1 URLString:(id)arg2 error:(id *)arg3;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 error:(id *)arg3;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 error:(id *)arg3;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)initWithBagContract:(id)arg1;
- (id)_methodStringFromMethod:(long long)arg1;
- (void)_addSecuritySigningHeadersToRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3;
@property long long dataEncoding;
- (id)initWithBag:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


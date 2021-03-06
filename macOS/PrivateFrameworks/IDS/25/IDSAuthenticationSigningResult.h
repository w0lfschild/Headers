//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@interface IDSAuthenticationSigningResult : NSObject
{
    NSArray *_authenticationCertificateSignatures;
    NSData *_inputData;
    NSData *_nonce;
}

@property(readonly, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, nonatomic) NSData *inputData; // @synthesize inputData=_inputData;
@property(readonly, nonatomic) NSArray *authenticationCertificateSignatures; // @synthesize authenticationCertificateSignatures=_authenticationCertificateSignatures;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSubscriptionIdentifiers:(id)arg1 authenticationCertificates:(id)arg2 inputData:(id)arg3 nonce:(id)arg4 signature:(id)arg5;
@property(readonly, nonatomic) NSString *serverVerifiableEncoding;

@end


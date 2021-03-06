//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SIGVerificationAlgorithm.h"

@class NSString;

@interface SIGSHA2VerificationAlgorithm : NSObject <SIGVerificationAlgorithm>
{
    void *_dataReadTransform;
    void *_dataDigestTransform;
    void *_dataVerifyTransform;
    void *_group;
}

+ (id)name;
- (BOOL)verifyInputStream:(id)arg1 signatureData:(id)arg2 publicKey:(struct OpaqueSecKeyRef *)arg3 error:(out id *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


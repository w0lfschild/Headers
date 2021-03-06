//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SIGSigningAlgorithm.h"

@class NSString;

@interface SIGSHA2SigningAlgorithm : NSObject <SIGSigningAlgorithm>
{
    void *_readTransform;
    void *_dataDigestTransform;
    void *_dataSignTransform;
    void *_group;
}

+ (id)name;
- (id)signatureForInputStream:(id)arg1 usingIdentity:(id)arg2 error:(out id *)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


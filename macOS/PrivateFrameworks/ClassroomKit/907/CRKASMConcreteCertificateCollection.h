//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKASMCertificateCollection.h"

@class NSArray;

@interface CRKASMConcreteCertificateCollection : NSObject <CRKASMCertificateCollection>
{
    NSArray *_certificates;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationToRefreshCollection;
- (id)initWithCertificates:(id)arg1;

@end


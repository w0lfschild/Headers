//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKASMOrganization.h"

@class NSString, NSUUID;

@interface CRKASMConcreteOrganization : NSObject <CRKASMOrganization>
{
    NSUUID *_UUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithPerson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


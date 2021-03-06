//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2NoncePayload : NEIKEv2Payload
{
    NSData *_nonce;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NSData *nonce; // @synthesize nonce=_nonce;
- (BOOL)parsePayloadData;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (unsigned long long)type;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end


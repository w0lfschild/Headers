//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AECPMessage.h>

@class NSArray;

@interface AVB17221AECPAddressAccessMessage : AVB17221AECPMessage
{
    NSArray *tlvs;
}

+ (id)errorForStatusCode:(unsigned char)arg1;
+ (id)responseMessage;
+ (id)commandMessage;
@property(copy) NSArray *tlvs; // @synthesize tlvs;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


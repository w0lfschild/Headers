//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitSystemAppServices/USSXPCEncodable-Protocol.h>

@class NSDictionary;

@interface USSRemoteNotificationReply : NSObject <USSXPCEncodable>
{
    NSDictionary *_flags;
    NSDictionary *_objects;
}

@property(copy, nonatomic) NSDictionary *objects; // @synthesize objects=_objects;
@property(copy, nonatomic) NSDictionary *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithFlags:(id)arg1 objects:(id)arg2;

@end


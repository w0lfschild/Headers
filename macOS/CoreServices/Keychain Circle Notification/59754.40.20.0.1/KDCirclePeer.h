//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KDCirclePeer : NSObject
{
    NSString *_name;
    NSString *_idString;
    id _peerObject;
}

- (void).cxx_destruct;
@property(retain) id peerObject; // @synthesize peerObject=_peerObject;
@property(retain) NSString *idString; // @synthesize idString=_idString;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithPeerObject:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRUpdateContentItemMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;

@end


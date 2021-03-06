//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioSession/NSSecureCoding-Protocol.h>

@class AVAudioSession_New, NSArray;

@interface AVAudioSessionIOBinding : NSObject <NSSecureCoding>
{
    AVAudioSession_New *_session;
    NSArray *_streams;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *streams; // @synthesize streams=_streams;
@property(readonly, nonatomic) AVAudioSession_New *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 streams:(id)arg2 error:(id *)arg3;
- (id)initWithSession:(id)arg1;

@end


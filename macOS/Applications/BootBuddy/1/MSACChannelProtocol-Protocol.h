//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSACEnable.h"
#import "NSObject.h"

@protocol MSACChannelProtocol <NSObject, MSACEnable>
- (void)resumeWithIdentifyingObject:(id <NSObject>)arg1;
- (void)pauseWithIdentifyingObject:(id <NSObject>)arg1;
- (void)removeDelegate:(id <MSACChannelDelegate>)arg1;
- (void)addDelegate:(id <MSACChannelDelegate>)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PFSandboxEnvironment : NSObject
{
    NSString *_realHomeDirectory;
}

+ (id)sharedInstance;
@property(readonly) NSString *realHomeDirectory; // @synthesize realHomeDirectory=_realHomeDirectory;
- (void).cxx_destruct;
- (id)changeRootForPath:(id)arg1 oldRoot:(id)arg2 newRoot:(id)arg3;
- (id)convertURLToRealHome:(id)arg1;
- (id)convertPathToRealHome:(id)arg1;
@property(readonly) __weak NSString *sandboxHomeDirectory; // @dynamic sandboxHomeDirectory;
- (id)init;

@end


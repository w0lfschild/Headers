//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGEventHotKey;

@interface MGEventHotKeyMonitorToken : NSObject
{
    MGEventHotKey *_hotKey;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) MGEventHotKey *hotKey; // @synthesize hotKey=_hotKey;
- (id)init;
- (id)initWithHotKey:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _NSServicesSidecarObserver : NSObject
{
    NSMapTable *_itemTargets;
    NSMapTable *_itemActions;
}

+ (id)defaultObserver;
- (void)_sidecarServiceAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (SEL)actionForMenuItem:(id)arg1;
- (id)targetForMenuItem:(id)arg1;
- (void)fixupMenu:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MASHotKey : NSObject
{
    unsigned int _carbonID;
    CDUnknownBlockType _action;
    struct OpaqueEventHotKeyRef *_hotKeyRef;
}

+ (id)registeredHotKeyWithShortcut:(id)arg1;
- (void).cxx_destruct;
@property struct OpaqueEventHotKeyRef *hotKeyRef; // @synthesize hotKeyRef=_hotKeyRef;
@property(copy) CDUnknownBlockType action; // @synthesize action=_action;
@property unsigned int carbonID; // @synthesize carbonID=_carbonID;
- (void)dealloc;
- (id)initWithShortcut:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AVTouchBarMediaSelectionOption : NSObject
{
    NSString *_title;
    long long _type;
    id _representedObject;
}

- (void).cxx_destruct;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (id)init;

@end


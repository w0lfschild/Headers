//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DESpeakableString : NSObject
{
    struct SpeakableString *_This;
}

@property struct SpeakableString *This; // @synthesize This=_This;
- (BOOL)isEqual:(id)arg1;
@property NSString *speak;
@property NSString *print;
- (void)dealloc;
- (id)initWithPrint:(id)arg1 speak:(id)arg2;
- (id)init;

@end


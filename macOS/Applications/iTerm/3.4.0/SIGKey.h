//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SIGKey : NSObject
{
    struct __SecKey *_secKey;
}

@property(readonly, nonatomic) struct __SecKey *secKey; // @synthesize secKey=_secKey;
- (void)dealloc;
- (id)initWithSecKey:(struct __SecKey *)arg1;

@end


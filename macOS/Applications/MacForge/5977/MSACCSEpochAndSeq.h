//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSACCSEpochAndSeq : NSObject
{
    unsigned long long _seq;
    NSString *_epoch;
}

@property(retain, nonatomic) NSString *epoch; // @synthesize epoch=_epoch;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
- (void).cxx_destruct;
- (id)initWithEpoch:(id)arg1;

@end


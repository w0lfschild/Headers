//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RxMatch : NSObject
{
    NSString *value;
    NSArray *groups;
    NSString *original;
    struct _NSRange range;
}

@property(copy, nonatomic) NSString *original; // @synthesize original;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups;
@property(nonatomic) struct _NSRange range; // @synthesize range;
@property(copy, nonatomic) NSString *value; // @synthesize value;
- (void).cxx_destruct;

@end


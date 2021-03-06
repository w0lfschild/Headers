//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUSubproperty.h"

@class NSArray, NSData, NSString;

@interface AUFileSharingAccount : AUSubproperty
{
    NSString *accountName;
    NSString *accountPassword;
    NSString *verifyPassword;
    long long fileSharingAccess;
    NSData *uuid;
    NSArray *fileSharingAccessValues;
}

@property(retain, nonatomic) NSArray *fileSharingAccessValues; // @synthesize fileSharingAccessValues;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid;
@property(nonatomic) long long fileSharingAccess; // @synthesize fileSharingAccess;
@property(retain, nonatomic) NSString *verifyPassword; // @synthesize verifyPassword;
@property(retain, nonatomic) NSString *accountPassword; // @synthesize accountPassword;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName;
- (id)saveData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end


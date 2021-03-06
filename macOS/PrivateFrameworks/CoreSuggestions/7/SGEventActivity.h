//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUserActivity;

@interface SGEventActivity : NSObject
{
    unsigned char _type;
    NSString *_teamIdentifier;
    NSUserActivity *_userActivity;
    double _validStartDate;
    double _validEndDate;
}

+ (unsigned char)typeForString:(id)arg1;
+ (id)describeType:(unsigned char)arg1;
@property(readonly, nonatomic) double validEndDate; // @synthesize validEndDate=_validEndDate;
@property(readonly, nonatomic) double validStartDate; // @synthesize validStartDate=_validStartDate;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
- (void).cxx_destruct;
- (id)jsonObject;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTeamIdentifier:(id)arg1 type:(unsigned char)arg2 userActivity:(id)arg3 validStartDate:(double)arg4 validEndDate:(double)arg5;

@end


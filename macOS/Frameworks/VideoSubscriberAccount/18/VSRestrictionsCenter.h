//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VSRestrictionsCenter : NSObject
{
    BOOL _accountModificationAllowed;
}

+ (id)defaultRestrictionsCenter;
@property(nonatomic, getter=isAcountModificationAllowed) BOOL accountModificationAllowed; // @synthesize accountModificationAllowed=_accountModificationAllowed;
- (BOOL)canInstallAppWithRating:(long long)arg1;

@end


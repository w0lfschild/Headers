//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNotFoundException, EDAMUserException, NSNumber;

@interface EDAMManageNoteSharesError : FATObject
{
    NSNumber *_identityID;
    NSNumber *_userID;
    EDAMUserException *_userException;
    EDAMNotFoundException *_notFoundException;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMNotFoundException *notFoundException; // @synthesize notFoundException=_notFoundException;
@property(retain, nonatomic) EDAMUserException *userException; // @synthesize userException=_userException;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSNumber *identityID; // @synthesize identityID=_identityID;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, NSURL, PKPass;

@interface PKPlaceholderPassGenerator : NSObject
{
    NSURL *_templateDirectory;
    PKPass *_templatePass;
    NSMutableDictionary *_passContent;
}

+ (id)manifestSignatureForDirectory:(id)arg1 passCertificate:(id)arg2 appleWWDRCertificate:(id)arg3 certificatePassword:(id)arg4 error:(id *)arg5;
+ (id)manifestForDirectory:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *passContent; // @synthesize passContent=_passContent;
- (id)generateAndSignPassWithPassCertificate:(id)arg1 appleWWDRCertificate:(id)arg2 certificatePassword:(id)arg3 error:(id *)arg4;
- (id)generatePass;
- (long long)updatePassUpgradeRequestsWithBlock:(CDUnknownBlockType)arg1;
- (long long)updatePaymentApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (void)insertPaymentApplication:(id)arg1;
- (void)insertPassField:(id)arg1;
@property(copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property(copy, nonatomic) NSString *primaryAccountIdentifier;
@property(copy, nonatomic) NSString *serialNumber;
- (void)setPassTypeIdentifier:(id)arg1;
- (id)passTypeIdentifier;
- (id)initWithPassTemplate:(id)arg1 error:(id *)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMUser, NSNumber, NSString;

@interface EDAMNoncancelableSubscription : FATObject
{
    NSNumber *_subscriptionId;
    EDAMUser *_user;
    NSNumber *_premiumServiceStatus;
    NSString *_premiumCommerceService;
    NSString *_itunesReceiptData;
    NSString *_amazonUserId;
    NSString *_amazonPurchaseToken;
    NSString *_premiumServiceSku;
    NSNumber *_nextPaymentDue;
    NSNumber *_premiumLockUntil;
    NSString *_currency;
    NSNumber *_unitPrice;
    NSString *_itunesOriginalTransactionId;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *itunesOriginalTransactionId; // @synthesize itunesOriginalTransactionId=_itunesOriginalTransactionId;
@property(retain, nonatomic) NSNumber *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSNumber *premiumLockUntil; // @synthesize premiumLockUntil=_premiumLockUntil;
@property(retain, nonatomic) NSNumber *nextPaymentDue; // @synthesize nextPaymentDue=_nextPaymentDue;
@property(retain, nonatomic) NSString *premiumServiceSku; // @synthesize premiumServiceSku=_premiumServiceSku;
@property(retain, nonatomic) NSString *amazonPurchaseToken; // @synthesize amazonPurchaseToken=_amazonPurchaseToken;
@property(retain, nonatomic) NSString *amazonUserId; // @synthesize amazonUserId=_amazonUserId;
@property(retain, nonatomic) NSString *itunesReceiptData; // @synthesize itunesReceiptData=_itunesReceiptData;
@property(retain, nonatomic) NSString *premiumCommerceService; // @synthesize premiumCommerceService=_premiumCommerceService;
@property(retain, nonatomic) NSNumber *premiumServiceStatus; // @synthesize premiumServiceStatus=_premiumServiceStatus;
@property(retain, nonatomic) EDAMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *subscriptionId; // @synthesize subscriptionId=_subscriptionId;

@end


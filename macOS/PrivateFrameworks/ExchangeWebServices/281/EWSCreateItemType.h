//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSTargetFolderIdType, NSArray;

@interface EWSCreateItemType : EWSBaseRequestType
{
    EWSTargetFolderIdType *_SavedItemFolderId;
    NSArray *_Items;
    long long _MessageDisposition;
    long long _SendMeetingInvitations;
}

+ (id)definition;
@property(nonatomic) long long SendMeetingInvitations; // @synthesize SendMeetingInvitations=_SendMeetingInvitations;
@property(nonatomic) long long MessageDisposition; // @synthesize MessageDisposition=_MessageDisposition;
@property(copy, nonatomic) NSArray *Items; // @synthesize Items=_Items;
@property(retain, nonatomic) EWSTargetFolderIdType *SavedItemFolderId; // @synthesize SavedItemFolderId=_SavedItemFolderId;
- (void).cxx_destruct;

@end


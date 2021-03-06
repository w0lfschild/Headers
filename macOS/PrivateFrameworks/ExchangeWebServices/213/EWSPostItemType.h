//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSItemType.h>

@class EWSSingleRecipientType, NSDateComponents, NSString;

@interface EWSPostItemType : EWSItemType
{
    NSString *_ConversationTopic;
    EWSSingleRecipientType *_From;
    NSString *_InternetMessageId;
    BOOL _IsRead;
    NSDateComponents *_PostedTime;
    NSString *_References;
    EWSSingleRecipientType *_Sender;
}

+ (id)definition;
@property(retain, nonatomic) EWSSingleRecipientType *Sender; // @synthesize Sender=_Sender;
@property(copy, nonatomic) NSString *References; // @synthesize References=_References;
@property(retain, nonatomic) NSDateComponents *PostedTime; // @synthesize PostedTime=_PostedTime;
@property(nonatomic) BOOL IsRead; // @synthesize IsRead=_IsRead;
@property(copy, nonatomic) NSString *InternetMessageId; // @synthesize InternetMessageId=_InternetMessageId;
@property(retain, nonatomic) EWSSingleRecipientType *From; // @synthesize From=_From;
@property(copy, nonatomic) NSString *ConversationTopic; // @synthesize ConversationTopic=_ConversationTopic;
- (void)dealloc;

@end


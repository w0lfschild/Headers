//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore, NSObject<OS_os_log>;

@interface CNUIDeleteCommandHelper : NSObject
{
    CNContactStore *_contactStore;
    NSObject<OS_os_log> *_log_t;
}

+ (id)deleteCommandsForContacts:(id)arg1 contactStore:(id)arg2;
@property(retain, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)containerIdentifiersForContacts:(id)arg1;
- (id)initWithContactStore:(id)arg1;

@end


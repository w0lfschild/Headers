//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSManagedObjectContext, NSObject<OS_os_log>;

@interface ABManagedObjectContextSourceNotificationHelper : NSObject
{
    NSManagedObjectContext *_context;
    NSDictionary *_changes;
    BOOL _meCardChanged;
    NSObject<OS_os_log> *_log;
}

+ (id)changesNotifier;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) BOOL meCardChanged; // @synthesize meCardChanged=_meCardChanged;
@property(retain, nonatomic) NSDictionary *changes; // @synthesize changes=_changes;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)sendRecordsDidChange;
- (void)sendMeDidChange;
- (void)sendDidChangeNotifications;
- (void)sendWillChangeNotifications;
- (void)analyzeRecordChanges;
- (BOOL)hasMeCardHasChangedToAnotherCard;
- (BOOL)hasMeCardBeenUpdated;
- (void)analyzeMeCardChanges;
- (void)analyzeChanges;
- (id)description;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox, NSOperationQueue;

@interface DockCountController : NSObject
{
    MFMailbox *_mailBadgeMailbox;
    long long _mailBadgeScope;
    NSOperationQueue *_workQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_log;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) long long mailBadgeScope; // @synthesize mailBadgeScope=_mailBadgeScope;
- (void).cxx_destruct;
- (void)setMailBadgeScope:(long long)arg1 mailbox:(id)arg2;
- (void)unreadCountChanged:(id)arg1;
- (void)_setMailBadgeMailbox:(id)arg1;
@property(readonly, nonatomic) MFMailbox *mailBadgeMailbox;
- (void)_mailboxWillBeInvalidated:(id)arg1;
- (void)_setDockBadgeForCount:(id)arg1;
- (void)clearCountAndStopUpdating;
- (void)dealloc;
- (id)init;

@end


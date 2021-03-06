//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCache, CNContactStore, CNObservable, CNQueue, CNUIPRLikenessResolver;
@protocol CNScheduler, CNSchedulerProvider;

@interface CNAvatarCache : NSObject
{
    BOOL _liveUpdating;
    CNUIPRLikenessResolver *_likenessResolver;
    CNContactStore *_contactStore;
    CNCache *_likenessCache;
    CNQueue *_evictionQueue;
    CNObservable *_contactStoreChangeNotificationWatcher;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNScheduler> _likenessResolverScheduler;
}

+ (id)_cacheKeyForContact:(id)arg1;
@property(nonatomic) BOOL liveUpdating; // @synthesize liveUpdating=_liveUpdating;
@property(readonly, nonatomic) id <CNScheduler> likenessResolverScheduler; // @synthesize likenessResolverScheduler=_likenessResolverScheduler;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(retain, nonatomic) CNObservable *contactStoreChangeNotificationWatcher; // @synthesize contactStoreChangeNotificationWatcher=_contactStoreChangeNotificationWatcher;
@property(retain) CNQueue *evictionQueue; // @synthesize evictionQueue=_evictionQueue;
@property(retain) CNCache *likenessCache; // @synthesize likenessCache=_likenessCache;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNUIPRLikenessResolver *likenessResolver; // @synthesize likenessResolver=_likenessResolver;
- (void).cxx_destruct;
- (void)refreshCacheKey:(id)arg1;
- (id)refetchContact:(id)arg1;
- (id)didChangeWatcherForContact:(id)arg1;
- (id)updateWatcherForContact:(id)arg1;
- (id)likenessHandlerForContact:(id)arg1;
- (void)invalidate;
- (id)initWithLikenessResolver:(id)arg1 contactStore:(id)arg2;
- (id)initWithLikenessResolver:(id)arg1;
- (id)init;

@end


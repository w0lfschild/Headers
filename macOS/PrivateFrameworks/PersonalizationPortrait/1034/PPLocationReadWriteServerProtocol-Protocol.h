//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSSet, PPSource;

@protocol PPLocationReadWriteServerProtocol
- (void)clearWithCompletion:(void (^)(BOOL, unsigned long long, NSError *))arg1;
- (void)cloudSyncWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)donateLocations:(NSArray *)arg1 source:(PPSource *)arg2 contextualNamedEntities:(NSSet *)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 completion:(void (^)(BOOL, NSError *))arg7;
@end


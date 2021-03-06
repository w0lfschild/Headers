//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSUUID;

@interface KNRecordingSyncState : NSObject <GSSPAutoEncodable, NSCopying>
{
    NSUUID *_outOfSyncToken;
    BOOL _canClearOutOfSyncToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *outOfSyncToken; // @synthesize outOfSyncToken=_outOfSyncToken;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)arg1 withLocalOutOfSyncToken:(id)arg2;
- (BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1;
@property(readonly, nonatomic, getter=isRecordingOutOfSync) BOOL recordingOutOfSync;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(BOOL)arg2;
-     // Error parsing type: v32@0:8^{RecordingSyncState=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{UUID}B}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{RecordingSyncState=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{UUID}B}16@24, name: initWithArchive:unarchiver:
- (void)populateGSSPRecordingSyncState:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end


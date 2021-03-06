//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class KNSoundtrackValue, NSString, NSUUID;

@interface KNCommandSoundtrackSetValue : TSKCommand <GSSPAutoEncodable>
{
    NSUUID *_soundtrackId;
    NSString *_property;
    KNSoundtrackValue *_value;
    KNSoundtrackValue *_originalValue;
}

@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (void)rollback;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
@property(readonly, nonatomic) id value;
- (id)soundtrack;
- (BOOL)process;
- (id)actionString;
- (id)initWithSoundtrack:(id)arg1 property:(id)arg2 value:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)populateGSSPCmdSoundtrackSetValue:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end


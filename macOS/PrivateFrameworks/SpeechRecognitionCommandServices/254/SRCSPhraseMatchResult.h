//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SRCSPhraseMatchResult : NSObject
{
    id _userInfo;
    NSString *_matchedString;
    id <SRCSTextMarkerRangeProtocol> _markerRange;
}

@property(readonly) id <SRCSTextMarkerRangeProtocol> markerRange; // @synthesize markerRange=_markerRange;
@property(readonly) NSString *matchedString; // @synthesize matchedString=_matchedString;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)description;
- (long long)location;
- (id)initWithMarkerRange:(id)arg1 matchedString:(id)arg2 userInfo:(id)arg3;

@end


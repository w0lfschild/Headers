//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrameResource : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *targetId;
@property(copy, nonatomic) NSString *sourceMapURL;
@property(nonatomic) BOOL canceled;
@property(nonatomic) BOOL failed;
@property(copy, nonatomic) NSString *mimeType;
@property(nonatomic) long long type;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 type:(long long)arg2 mimeType:(id)arg3;

@end


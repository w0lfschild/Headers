//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SASettingResponse.h>

@class SASettingAudioRoute;

@interface SASettingGetAudioRouteResponse : SASettingResponse
{
}

+ (id)getAudioRouteResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAudioRouteResponse;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SASettingAudioRoute *audioRoute;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


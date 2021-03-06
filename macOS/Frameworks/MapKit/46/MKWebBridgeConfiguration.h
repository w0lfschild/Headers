//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MKWebBridgeConfiguration : NSObject <NSCopying>
{
    NSString *_bridgeVersion;
    NSString *_nativeControllerName;
    NSString *_webControllerName;
}

@property(readonly, copy, nonatomic) NSString *webControllerName; // @synthesize webControllerName=_webControllerName;
@property(readonly, copy, nonatomic) NSString *nativeControllerName; // @synthesize nativeControllerName=_nativeControllerName;
@property(readonly, copy, nonatomic) NSString *bridgeVersion; // @synthesize bridgeVersion=_bridgeVersion;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNativeControllerName:(id)arg1 webControllerName:(id)arg2 bridgeVersion:(id)arg3;

@end


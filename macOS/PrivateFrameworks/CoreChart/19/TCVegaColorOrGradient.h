//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCVegaColorOrGradientInterface.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCVegaColorOrGradient : NSObject <TCVegaColorOrGradientInterface>
{
    NSString *color;
    NSDictionary *gradient;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *gradient; // @synthesize gradient;
@property(retain) NSString *color; // @synthesize color;
@property(readonly) BOOL isGradient;
@property(readonly) BOOL isColor;
- (id)initWithJSValue:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AXValidatingElement.h"

#import "AXGradient-Protocol.h"

@interface AXDomGradient : AXValidatingElement <AXGradient>
{
}

+ (void)initialize;
- (void)validateSelf;
- (void)axSetGradientAngle:(float)arg1;
- (float)axGetGradientAngle;
- (void)axSetEndColor:(id)arg1;
- (id)axGetEndColor;
- (void)axSetStartColor:(id)arg1;
- (id)axGetStartColor;

@end


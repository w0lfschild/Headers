//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor;

@interface iTermColorSuggester : NSObject
{
    NSColor *_suggestedTextColor;
    NSColor *_suggestedBackgroundColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSColor *suggestedBackgroundColor; // @synthesize suggestedBackgroundColor=_suggestedBackgroundColor;
@property(readonly, nonatomic) NSColor *suggestedTextColor; // @synthesize suggestedTextColor=_suggestedTextColor;
- (id)initWithDefaultTextColor:(id)arg1 defaultBackgroundColor:(id)arg2 minimumDifference:(double)arg3 seed:(long long)arg4;

@end


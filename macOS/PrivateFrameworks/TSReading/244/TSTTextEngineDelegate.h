//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPTextDelegate-Protocol.h>

@class TSWPPadding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>
{
    TSWPPadding *mPadding;
    unsigned int mVerticalAlignment;
}

- (BOOL)forceWesternLineBreaking;
- (unsigned int)verticalAlignment;
- (id)padding;
- (void)dealloc;
- (id)initWithPadding:(struct UIEdgeInsets)arg1 verticalAlignment:(unsigned int)arg2;

@end


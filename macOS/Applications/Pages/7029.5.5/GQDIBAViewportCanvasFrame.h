//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GQDIBAFrame.h"

@class GQDIBAViewportCanvasInfo, GQDShape;

@interface GQDIBAViewportCanvasFrame : GQDIBAFrame
{
    GQDShape *_canvasTextShape;
    GQDIBAViewportCanvasInfo *_parentInfo;
}

+ (const struct StateSpec *)stateForReading;
- (void).cxx_destruct;
@property(nonatomic) __weak GQDIBAViewportCanvasInfo *parentInfo; // @synthesize parentInfo=_parentInfo;
@property(retain, nonatomic) GQDShape *canvasTextShape; // @synthesize canvasTextShape=_canvasTextShape;
- (id)emptyPlaceholderText;
- (id)placeholderText;
@property(readonly, nonatomic) BOOL isEmptyPlaceholder;
- (id)placeholderImageDataFilename;

@end


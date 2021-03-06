//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MFPath.h"

@class TSUBezierPath;

@interface MFPhonePath : MFPath
{
    TSUBezierPath *m_path;
    int m_state;
}

- (void).cxx_destruct;
- (void)appendBezierPath:(id)arg1 dc:(id)arg2;
- (id)getBezierPath;
- (int)fill:(id)arg1;
- (int)stroke:(id)arg1;
- (int)widen:(id)arg1;
- (int)flatten;
- (int)closeFigure;
- (struct CGPoint)currentPoint;
- (int)abort;
- (int)end;
- (int)begin;
- (BOOL)isOpen;
- (int)state;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1 state:(int)arg2;
- (id)init;

@end


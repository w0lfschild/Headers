//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DfNoteEvent.h"

@interface DfScoreEvent : DfNoteEvent
{
    struct CGRect m_Frame;
    struct CGRect m_DurationFrame;
    CDStruct_5115be14 m_Controller;
    long long m_Value;
    long long m_ReferenceClock;
}

- (long long)referenceClock;
- (void)setReferenceClock:(long long)arg1;
- (void)setController:(CDStruct_5115be14)arg1;
- (void)setValue:(long long)arg1;
- (CDStruct_5115be14)controller;
- (long long)value;
- (struct CGRect)durationFrame;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1 andDurationFrame:(struct CGRect)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


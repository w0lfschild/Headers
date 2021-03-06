//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol MAPianoRollKeyboard;

@protocol MAPianoRollKeyboardDelegate <NSObject>
- (void)endGestureForPianoRollKeyboard:(id <MAPianoRollKeyboard>)arg1;
- (void)beginGestureForPianoRollKeyboard:(id <MAPianoRollKeyboard>)arg1;
- (void)pianoRollKeyboard:(id <MAPianoRollKeyboard>)arg1 handleState:(long long)arg2 forNote:(unsigned long long)arg3;
- (NSDictionary *)pianoRollKeyboard:(id <MAPianoRollKeyboard>)arg1 iconsForNote:(unsigned long long)arg2;
- (NSString *)pianoRollKeyboard:(id <MAPianoRollKeyboard>)arg1 labelForNote:(unsigned long long)arg2;
- (double)pianoRollKeyboard:(id <MAPianoRollKeyboard>)arg1 heightForNote:(unsigned long long)arg2;
- (double)pianoRollKeyboard:(id <MAPianoRollKeyboard>)arg1 positionForNote:(unsigned long long)arg2;

@optional
- (BOOL)pianoRollKeyboardIsDrumEditor:(id <MAPianoRollKeyboard>)arg1;
- (double)pianoRollKeyboardWidth:(id <MAPianoRollKeyboard>)arg1;
- (long long)pianoRollKeyboardDisplayMode:(id <MAPianoRollKeyboard>)arg1;
@end


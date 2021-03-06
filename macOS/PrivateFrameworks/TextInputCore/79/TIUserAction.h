//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class TIDocumentState, TIKeyboardState;

@interface TIUserAction : NSObject <NSSecureCoding>
{
    int _actionType;
    double _startTime;
    double _endTime;
    double _occurenceTime;
    TIDocumentState *_documentState;
    TIKeyboardState *_keyboardState;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) double occurenceTime; // @synthesize occurenceTime=_occurenceTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTIKeyboardState:(id)arg1;

@end


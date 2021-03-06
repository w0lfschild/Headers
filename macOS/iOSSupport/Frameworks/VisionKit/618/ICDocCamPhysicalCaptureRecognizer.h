//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer
{
    BOOL _suspended;
    long long _activeButton;
    NSArray *_desiredButtons;
    long long _physicalButtonType;
}

@property(nonatomic) long long physicalButtonType; // @synthesize physicalButtonType=_physicalButtonType;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(copy, nonatomic) NSArray *desiredButtons; // @synthesize desiredButtons=_desiredButtons;
@property(nonatomic) long long activeButton; // @synthesize activeButton=_activeButton;
- (void).cxx_destruct;
- (long long)_captureButtonForPhysicalButtonType:(long long)arg1;
- (void)reset;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)_updateApplicationButtonStatus;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end


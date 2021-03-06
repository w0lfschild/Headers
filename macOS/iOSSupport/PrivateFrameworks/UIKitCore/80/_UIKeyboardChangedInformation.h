//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class BKSAnimationFenceHandle, NSString;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding>
{
    struct os_unfair_lock_s _animationFenceLock;
    BKSAnimationFenceHandle *_animationFence;
    BOOL _keyboardOnScreen;
    BOOL _shouldTakeSnapshot;
    NSString *_sourceCanvasIdentifier;
    NSString *_sourceDisplayIdentifier;
    struct CGRect _keyboardPosition;
    struct CGRect _keyboardPositionWithIAV;
}

+ (BOOL)supportsSecureCoding;
+ (id)informationForKeyboardUp:(struct CGRect)arg1 withIAV:(struct CGRect)arg2;
+ (id)informationForKeyboardDown;
+ (void)setDisallowsFencing:(BOOL)arg1;
+ (BOOL)disallowsFencing;
+ (id)animationFence;
@property(nonatomic) BOOL shouldTakeSnapshot; // @synthesize shouldTakeSnapshot=_shouldTakeSnapshot;
@property(readonly) BOOL keyboardOnScreen; // @synthesize keyboardOnScreen=_keyboardOnScreen;
@property(readonly) struct CGRect keyboardPositionWithIAV; // @synthesize keyboardPositionWithIAV=_keyboardPositionWithIAV;
@property(readonly) struct CGRect keyboardPosition; // @synthesize keyboardPosition=_keyboardPosition;
@property(copy, nonatomic) NSString *sourceDisplayIdentifier; // @synthesize sourceDisplayIdentifier=_sourceDisplayIdentifier;
@property(copy, nonatomic) NSString *sourceCanvasIdentifier; // @synthesize sourceCanvasIdentifier=_sourceCanvasIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)resetAnimationFencing;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithoutFence;
- (id)copyWithoutIAV;
@property(readonly, copy) BKSAnimationFenceHandle *animationFence;
- (id)initWithKeyboardRect:(struct CGRect)arg1 iavPosition:(struct CGRect)arg2 onScreen:(BOOL)arg3 takeSnapshot:(BOOL)arg4 fence:(id)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OABColorPropertiesManager-Protocol.h"

@class NSString;

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
- (NSString *)fillBlipName;
- (unsigned int)fillBlipID;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillFocusBottom;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (int)fillFocusLeft;
- (int)fillFocus;
- (int)fillAngle;
- (int)fillBgAlpha;
- (int)fillFgAlpha;
- (int)fillType;
@end


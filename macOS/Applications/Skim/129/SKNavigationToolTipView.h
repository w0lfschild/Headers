//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface SKNavigationToolTipView : NSView
{
    NSString *stringValue;
}

@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGSize fitSize;
@property(readonly, nonatomic) NSAttributedString *attributedStringValue; // @dynamic attributedStringValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


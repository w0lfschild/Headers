//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImageView;

@interface AppProductImageBadge : NSView
{
    NSImageView *pImageView;
    float _innerBadgeScaleFactor;
}

- (void).cxx_destruct;
@property float innerBadgeScaleFactor; // @synthesize innerBadgeScaleFactor=_innerBadgeScaleFactor;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPath *)newPathForOuterBadge:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)initUIValues;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


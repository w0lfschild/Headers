//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class ECTextLayer, _TtC4Dock28RoundBackdropLayerController;

@interface ECTooltipLayer : CALayer
{
    _TtC4Dock28RoundBackdropLayerController *_backdropLayerController;
    ECTextLayer *_textLayer;
    float _scaleFactor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ECTextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (void)layout;
@property(readonly, nonatomic) struct CGSize preferredSize; // @dynamic preferredSize;
- (id)initWithString:(id)arg1 scaleFactor:(float)arg2 material:(unsigned long long)arg3;

@end


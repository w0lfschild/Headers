//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSObject<RDAddFilterProtocol>;

@interface RDFilterAddPopoverViewController : NSViewController
{
    NSObject<RDAddFilterProtocol> *_add;
}

@property(nonatomic) __weak NSObject<RDAddFilterProtocol> *add; // @synthesize add=_add;
- (void).cxx_destruct;
- (void)addSepiaFilter:(id)arg1;
- (void)addSaturateFilter:(id)arg1;
- (void)addOpacityFilter:(id)arg1;
- (void)addInvertFilter:(id)arg1;
- (void)addHueRotateFilter:(id)arg1;
- (void)addGrayscaleFilter:(id)arg1;
- (void)addContrastFilter:(id)arg1;
- (void)addBrightnessFilter:(id)arg1;
- (void)addBlurFilter:(id)arg1;

@end


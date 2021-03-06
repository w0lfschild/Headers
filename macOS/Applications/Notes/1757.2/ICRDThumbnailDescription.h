//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRDThumbnailConfiguration, NSImage, NSSet;

@interface ICRDThumbnailDescription : NSObject
{
    ICRDThumbnailConfiguration *_configuration;
    NSImage *_image;
    unsigned long long _imageScaling;
    long long _thumbnailDecorationType;
    NSSet *_associatedObjectIdentifiers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *associatedObjectIdentifiers; // @synthesize associatedObjectIdentifiers=_associatedObjectIdentifiers;
@property(nonatomic) long long thumbnailDecorationType; // @synthesize thumbnailDecorationType=_thumbnailDecorationType;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) ICRDThumbnailConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) long long preferredLayerContentsPlacement;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end


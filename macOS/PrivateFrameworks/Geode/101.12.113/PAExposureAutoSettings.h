//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAAutoSettings.h>

@interface PAExposureAutoSettings : IPAAutoSettings
{
    BOOL _isNoOp;
    double _EV;
}

@property(nonatomic) BOOL isNoOp; // @synthesize isNoOp=_isNoOp;
@property(nonatomic) double EV; // @synthesize EV=_EV;
- (BOOL)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;

@end


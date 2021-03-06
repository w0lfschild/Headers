//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXImportItemViewModel.h>

#import "IPXSelectionProviderContentItem-Protocol.h"

@class NSDate, NSNumber, NSString, NSTimeZone;

@interface PXImportItemViewModel (IPXSelectionProviderContentItem) <IPXSelectionProviderContentItem>
@property(readonly, nonatomic) BOOL ipx_representsBurst;
@property(readonly, nonatomic) BOOL ipx_isSloMo;
@property(readonly, nonatomic) BOOL ipx_isTimelapse;
@property(readonly, nonatomic) BOOL ipx_isLivePhoto;
@property(readonly, nonatomic) BOOL ipx_isVideo;
@property(readonly, nonatomic) BOOL ipx_isAudio;
@property(readonly, nonatomic) BOOL ipx_isImage;
@property(readonly, nonatomic) BOOL ipx_isGIF;
@property(readonly, nonatomic) BOOL ipx_isTIFF;
@property(readonly, nonatomic) BOOL ipx_isRAW;
@property(readonly, nonatomic) BOOL ipx_isPSD;
@property(readonly, nonatomic) BOOL ipx_isPNG;
@property(readonly, nonatomic) BOOL ipx_isPDF;
@property(readonly, nonatomic) BOOL ipx_isJPEG2000;
@property(readonly, nonatomic) BOOL ipx_isJPEG;
@property(readonly, nonatomic) BOOL ipx_isHEIF;
@property(readonly, nonatomic) BOOL ipx_reverseLocationDataIsValid;
@property(readonly, nonatomic) BOOL ipx_canUseLocation;
- (id)ipx_localizedGeoDescriptionForRTL:(BOOL)arg1;
@property(readonly, nonatomic) unsigned int ipx_audioTrackFormat;
@property(readonly, nonatomic) NSNumber *ipx_whiteBalance;
@property(readonly, nonatomic) NSNumber *ipx_shutterSpeed;
@property(readonly, nonatomic) NSNumber *ipx_meteringMode;
@property(readonly, nonatomic) NSString *ipx_model;
@property(readonly, nonatomic) NSString *ipx_make;
@property(readonly, nonatomic) NSString *ipx_lensModel;
@property(readonly, nonatomic) NSNumber *ipx_ISORating;
@property(readonly, nonatomic) NSNumber *ipx_focalLength;
@property(readonly, nonatomic) NSNumber *ipx_flash;
@property(readonly, nonatomic) NSNumber *ipx_exposureBias;
@property(readonly, nonatomic) NSNumber *ipx_aperture;
@property(readonly, nonatomic) NSString *ipx_codec;
@property(readonly, nonatomic) NSNumber *ipx_sampleRate;
@property(readonly, nonatomic) NSNumber *ipx_bitRate;
@property(readonly, nonatomic) NSNumber *ipx_FPS;
@property(readonly, nonatomic) NSNumber *ipx_duration;
@property(readonly, nonatomic) BOOL ipx_hasKeywords;
@property(readonly, nonatomic, getter=ipx_isHidden) BOOL ipx_hidden;
@property(readonly, nonatomic, getter=ipx_isInTrash) BOOL ipx_inTrash;
@property(readonly, nonatomic, getter=ipx_isFavorite) BOOL ipx_favorite;
@property(readonly, nonatomic) BOOL ipx_supportsImageProperties;
@property(readonly, nonatomic) NSString *ipx_burstUUID;
@property(readonly, nonatomic, getter=ipx_isStackPick) BOOL ipx_stackPick;
@property(readonly, nonatomic) NSString *ipx_uniformTypeIdentifier;
@property(readonly, nonatomic) struct PFIntSize_st ipx_resolution;
@property(readonly, nonatomic) NSTimeZone *ipx_timeZone;
@property(readonly, nonatomic) NSDate *ipx_creationDate;
@property(readonly, nonatomic) NSNumber *ipx_filesize;
@property(readonly, nonatomic) unsigned long long ipx_fileType;
@property(readonly, nonatomic) NSString *ipx_filename;
@property(readonly, nonatomic) NSString *ipx_assetDescription;
@property(readonly, nonatomic) NSString *ipx_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


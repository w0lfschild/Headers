//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SavePanelAccessoryView.h"

@class NSButton, NSPopUpButton;

@interface RegionExportSettingsController : SavePanelAccessoryView
{
    NSPopUpButton *m_bitDepth;
    NSPopUpButton *m_sampleRate;
    NSPopUpButton *m_fileType;
    NSPopUpButton *m_dither;
    NSPopUpButton *m_stereoConversionType;
    NSButton *m_addToAudioWindow;
    id m_freeString;
    id m_neededString;
    struct RegionExportParam *p;
    int m_flags;
    int m_OriginalFileType;
}

+ (id)controllerWithParams:(struct RegionExportParam *)arg1 flags:(int)arg2;
- (long long)sRateValue;
- (int)sRateIndex;
- (int)conversionType;
- (BOOL)addFileToAudioWindow:(const struct CFileRef *)arg1;
- (BOOL)dither;
- (BOOL)bitDepth;
- (BOOL)fileType;
- (void)change_addToAudioWindow:(id)arg1;
- (void)change_dither:(id)arg1;
- (void)change_conversionType:(id)arg1;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (void)change_fileType:(id)arg1;
- (void)change_sampleRate:(id)arg1;
- (void)change_bitDepth:(id)arg1;
- (void)panel:(id)arg1 directoryDidChange:(id)arg2;
- (void)updateUI;
- (long long)totalBytes;
- (void)dealloc;
- (id)init;

@end


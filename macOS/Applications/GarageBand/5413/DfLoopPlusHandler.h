//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DfDocument, GenInstModelLoopImporterFileInfo, NSData, NSString;

@interface DfLoopPlusHandler : NSObject
{
    DfDocument *m_document;
    NSString *m_path;
    NSString *m_sourcePath;
    BOOL m_hasMidiChunk;
    BOOL m_hasChannelStrip;
    BOOL m_isMidiFile;
    BOOL m_trackCreated;
    NSData *m_channelStrip;
    NSString *m_midiFileName;
    long long m_beatCount;
    long long m_key;
    BOOL m_isGenInstLoop;
    GenInstModelLoopImporterFileInfo *m_genInstFileInfo;
}

- (void).cxx_destruct;
- (BOOL)setName:(id)arg1 andIconId:(id)arg2 forTrack:(id)arg3;
- (BOOL)compareChannelstrip:(id)arg1;
- (BOOL)loadChannelStrip:(id)arg1;
- (id)extractSongnameFromPath:(id)arg1;
- (BOOL)setupTrack:(id)arg1 preventLoadInstrument:(BOOL)arg2 trackName:(id)arg3 iconID:(id)arg4;
- (BOOL)addContentToTrack:(id)arg1 clock:(long long)arg2 properties:(id)arg3;
- (void)setTrackCreated:(BOOL)arg1;
- (BOOL)testMidiFile;
@property(readonly) BOOL isMidiFile;
@property(readonly) BOOL hasChannelStrip;
@property(readonly) BOOL hasMidiChunk;
- (void)extractGenInstInfo;
- (BOOL)extractChannelStrip;
- (BOOL)extractMidiChunk;
- (void)removeMidiFile;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 path:(id)arg2 andSourcePath:(id)arg3;

@end


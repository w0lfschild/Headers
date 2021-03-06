//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SRDefaults : NSObject
{
    unsigned long long _datastoreVersion;
    unsigned long long _segmentSize;
    unsigned long long _metadataSize;
    unsigned long long _maxAllowedMappedPages;
    float _segmentResizeFactor;
    float _segmentPaddingFactor;
    NSString *_className;
    NSString *_exportingClassName;
}

@property(readonly, nonatomic) unsigned long long metadataSize; // @synthesize metadataSize=_metadataSize;
@property(readonly, nonatomic) NSString *exportingClassName; // @synthesize exportingClassName=_exportingClassName;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) float segmentPaddingFactor; // @synthesize segmentPaddingFactor=_segmentPaddingFactor;
@property(readonly, nonatomic) float segmentResizeFactor; // @synthesize segmentResizeFactor=_segmentResizeFactor;
@property(readonly, nonatomic) unsigned long long maxAllowedMappedPages; // @synthesize maxAllowedMappedPages=_maxAllowedMappedPages;
@property(readonly, nonatomic) unsigned long long segmentSize; // @synthesize segmentSize=_segmentSize;
@property(readonly, nonatomic) unsigned long long datastoreVersion; // @synthesize datastoreVersion=_datastoreVersion;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end


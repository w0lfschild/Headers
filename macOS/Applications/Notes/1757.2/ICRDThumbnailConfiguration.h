//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICAppearanceInfo, NSColor, NSString;

@interface ICRDThumbnailConfiguration : NSObject
{
    NSString *_associatedObjectIdentifier;
    long long _thumbnailType;
    NSString *_uniqueKey;
    double _scale;
    ICAppearanceInfo *_appearanceInfo;
    NSColor *_backgroundColor;
    CDUnknownBlockType _fallbackBlock;
    struct CGSize _preferredSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property(readonly, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) ICAppearanceInfo *appearanceInfo; // @synthesize appearanceInfo=_appearanceInfo;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(readonly, nonatomic) long long thumbnailType; // @synthesize thumbnailType=_thumbnailType;
@property(readonly, copy, nonatomic) NSString *associatedObjectIdentifier; // @synthesize associatedObjectIdentifier=_associatedObjectIdentifier;
- (id)debugDescription;
@property(readonly, nonatomic) BOOL isUniqueForAppearanceType;
- (id)initForAttachment:(id)arg1 preferredSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForNoteActivityWithNote:(id)arg1 scale:(double)arg2 appearanceInfo:(id)arg3;
- (id)initForNoteGridSubFolderWithFolder:(id)arg1 preferredSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForNoteGridWithNote:(id)arg1 preferredSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForNoteListWithFoundAttachment:(id)arg1 preferredSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForNoteListWithNote:(id)arg1 preferredSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)init;
- (id)initWithThumbnailType:(long long)arg1 associatedObjectIdentifier:(id)arg2 preferredSize:(struct CGSize)arg3 scale:(double)arg4 appearanceInfo:(id)arg5 backgroundColor:(id)arg6;

@end


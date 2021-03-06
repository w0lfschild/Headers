//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;

@interface PXCuratedLibraryInlineHeaderViewConfiguration : NSObject <NSCopying>
{
    unsigned long long _style;
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 style:(unsigned long long)arg3;

@end


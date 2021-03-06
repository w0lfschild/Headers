//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TPDocumentRoot;

@interface TPSectionDuplicator : NSObject
{
    TPDocumentRoot *_documentRoot;
    unsigned long long _sectionIndex;
    struct _NSRange _sectionPageRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange sectionPageRange; // @synthesize sectionPageRange=_sectionPageRange;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (id)p_actionString;
- (void)p_removeBibliographyFieldsFromStorage:(id)arg1;
- (void)duplicateWithSelectionBehavior:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1 sectionIndex:(unsigned long long)arg2;

@end


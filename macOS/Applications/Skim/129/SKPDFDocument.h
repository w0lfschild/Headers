//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDFDocument.h"

@class NSDocument;

__attribute__((visibility("hidden")))
@interface SKPDFDocument : PDFDocument
{
    struct _SKLanguageDirections *languageDirections;
    NSDocument *containingDocument;
}

@property(nonatomic) NSDocument *containingDocument; // @synthesize containingDocument;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)realAllowsCommenting;
- (BOOL)allowsCommenting;
- (id)findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (BOOL)unlockWithPassword:(id)arg1;
- (struct _SKLanguageDirections)languageDirections;
- (Class)pageClass;
- (void)dealloc;

@end


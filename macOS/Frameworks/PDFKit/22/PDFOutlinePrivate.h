//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, PDFAction, PDFDocument, PDFOutline;

__attribute__((visibility("hidden")))
@interface PDFOutlinePrivate : NSObject
{
    PDFDocument *document;
    NSString *title;
    PDFAction *action;
    PDFOutline *parent;
    NSMutableArray *children;
    _Bool childrenLoaded;
    struct __CFDictionary *dictionary;
    _Bool open;
    struct CGPDFDictionary *srcDictionary;
}

- (void).cxx_destruct;

@end


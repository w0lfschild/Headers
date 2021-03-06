//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBValidationObject-Protocol.h"

@class FBFile, NSArray, NSData, NSImage, NSNumber, NSString;

@interface FBValidationFile : NSObject <FBValidationObject>
{
    BOOL _selected;
    id _dest;
    FBFile *_file;
    NSImage *_image;
    NSArray *_faces;
    NSArray *_report;
    NSData *_validationInfo;
    NSNumber *_pass;
    NSNumber *_warn;
    NSNumber *_error;
}

@property BOOL selected; // @synthesize selected=_selected;
@property(copy) NSNumber *error; // @synthesize error=_error;
@property(copy) NSNumber *warn; // @synthesize warn=_warn;
@property(copy) NSNumber *pass; // @synthesize pass=_pass;
@property(copy) NSData *validationInfo; // @synthesize validationInfo=_validationInfo;
@property(copy) NSArray *report; // @synthesize report=_report;
@property(copy) NSArray *faces; // @synthesize faces=_faces;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(retain) FBFile *file; // @synthesize file=_file;
@property(retain) id dest; // @synthesize dest=_dest;
- (BOOL)matchesSearchTerms:(id)arg1;
- (id)filteredRecordWithSearchTerms:(id)arg1;
- (id)filteredRecordWithSeverity:(long long)arg1;
- (id)initWithValidationFile:(id)arg1 andFaces:(id)arg2;
- (void)toggleSelectionButton;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)statusImage;
- (id)helpText;
- (id)children;
- (long long)numberOfChildren;
@property(readonly, copy) NSString *location;
@property(readonly, copy) NSString *searchableContent;
- (id)name;
@property(readonly) BOOL isProtected;
- (void)dealloc;
- (id)initWithFile:(id)arg1 destination:(id)arg2 andReportArray:(id)arg3 andValidationInfo:(id)arg4;

@end


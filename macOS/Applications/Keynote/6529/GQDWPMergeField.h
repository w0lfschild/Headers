//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICExportable.h"

@class NSString;

@interface GQDWPMergeField : NSObject <ICExportable>
{
    NSString *mProperty;
    NSString *mLabel;
    NSString *mKey;
    int mCategory;
    BOOL mRequiresFollowingWhitespace;
    NSString *mWhitespace;
    NSString *mGUID;
    BOOL mLocalizable;
    NSString *mTableField;
}

@property(copy, nonatomic) NSString *tableField; // @synthesize tableField=mTableField;
@property(nonatomic) BOOL localizable; // @synthesize localizable=mLocalizable;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=mGUID;
@property(copy, nonatomic) NSString *whitespace; // @synthesize whitespace=mWhitespace;
@property(nonatomic) BOOL requiresFollowingWhitespace; // @synthesize requiresFollowingWhitespace=mRequiresFollowingWhitespace;
@property(nonatomic) int category; // @synthesize category=mCategory;
@property(copy, nonatomic) NSString *key; // @synthesize key=mKey;
@property(copy, nonatomic) NSString *label; // @synthesize label=mLabel;
@property(copy, nonatomic) NSString *property; // @synthesize property=mProperty;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (void)dealloc;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


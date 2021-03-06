//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSAccessibilityElement-Protocol.h"

@class ICTableAccessibilityController, NSAttributedString, NSString, NSUUID;

@interface ICTableCellAccessibilityElement : NSObject <NSAccessibilityElement>
{
    ICTableAccessibilityController *_tableAXController;
    NSUUID *_rowID;
    NSUUID *_columnID;
    struct CGRect _boundingRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) NSUUID *columnID; // @synthesize columnID=_columnID;
@property(readonly, nonatomic) NSUUID *rowID; // @synthesize rowID=_rowID;
@property(nonatomic) __weak ICTableAccessibilityController *tableAXController; // @synthesize tableAXController=_tableAXController;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isEditing;
@property(readonly, nonatomic) struct CGRect frameInScreenSpace;
@property(readonly, nonatomic) NSAttributedString *attributedContentString;
@property(readonly, nonatomic) unsigned long long columnIndex;
@property(readonly, nonatomic) unsigned long long rowIndex;
- (id)initWithTableAccessibilityController:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;
- (id)parentTableElement;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityChildren;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityParent;
- (struct _NSRange)accessibilityRowIndexRange;
- (struct _NSRange)accessibilityColumnIndexRange;
- (id)accessibilityTitle;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


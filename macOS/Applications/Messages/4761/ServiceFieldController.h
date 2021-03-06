//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import "NSTokenFieldDelegate-Protocol.h"

@class NSObject, NSString, NSTextField, NSTokenField;
@protocol ServiceFieldControllerDelegate><NSTokenFieldDelegate;

@interface ServiceFieldController : NSCollectionViewItem <NSTokenFieldDelegate>
{
    NSTextField *_serviceLabel;
    NSTokenField *_handlesTokenField;
    NSObject<ServiceFieldControllerDelegate><NSTokenFieldDelegate> *_delegate;
}

- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (void)handleTokensDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)handlesTokenField;
- (void)setEditable:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTextFinderAsynchronousDocumentFindMatch-Protocol.h"

@class ConversationViewFindController, MUICollectionView, NSArray, NSString;
@protocol NSTextFinderAsynchronousDocumentFindMatch;

@interface _ConversationFindMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch>
{
    MUICollectionView *_containingView;
    id <NSTextFinderAsynchronousDocumentFindMatch> _backingFindMatch;
    unsigned long long _cellIndex;
    NSArray *_textRectsInDocument;
    ConversationViewFindController *_findController;
}

@property(retain, nonatomic) ConversationViewFindController *findController; // @synthesize findController=_findController;
@property(retain, nonatomic) NSArray *textRectsInDocument; // @synthesize textRectsInDocument=_textRectsInDocument;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) id <NSTextFinderAsynchronousDocumentFindMatch> backingFindMatch; // @synthesize backingFindMatch=_backingFindMatch;
@property(retain, nonatomic) MUICollectionView *containingView; // @synthesize containingView=_containingView;
- (void).cxx_destruct;
- (void)generateTextImage:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *textRects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


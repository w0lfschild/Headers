//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@protocol WBSFormAutoFillNode;

@protocol WBSFormAutoFillNode <NSObject>
- (id <WBSFormAutoFillNode>)htmlTableCellElementCellAbove;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (BOOL)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(BOOL)arg1;
- (BOOL)isHTMLInputElementAutofilled;
- (struct CGRect)elementBounds;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
@end


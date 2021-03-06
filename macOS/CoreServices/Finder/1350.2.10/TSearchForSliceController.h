//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TViewController.h"

@class NSObject, NSString, SGTSearchField;
@protocol NSTextFieldDelegate;

@interface TSearchForSliceController : TViewController
{
    SGTSearchField *_searchForField;
}

- (void).cxx_destruct;
- (void)searchTextChanged:(id)arg1;
- (_Bool)makeSliceFirstResponder;
@property(retain, nonatomic) NSString *searchString; // @dynamic searchString;
@property(nonatomic) __weak NSObject<NSTextFieldDelegate> *searchForFieldDelegate; // @dynamic searchForFieldDelegate;
@property(readonly, nonatomic) SGTSearchField *searchForField; // @dynamic searchForField;
- (void)configureView;
- (id)nibName;
- (void)dealloc;

@end


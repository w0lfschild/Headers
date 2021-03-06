//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSLevelIndicator, NSMatrix, NSMutableArray, NSPopUpButton, NSScrollView, NSTableView, NSTextField, NSWindow;

@interface SimpleCocoaDialogController : NSObject
{
    NSWindow *_window;
    NSMatrix *_radioButtons;
    NSPopUpButton *_popupButton;
    NSTextField *_colorTextField;
    NSLevelIndicator *_levelIndicator;
    NSScrollView *_scrollView;
    NSTableView *_tableView;
    NSButton *_disclosureTriangle;
    NSButton *_okButton;
    NSMutableArray *_dataTable;
}

@property(retain, nonatomic) NSMutableArray *dataTable; // @synthesize dataTable=_dataTable;
@property(nonatomic) NSButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) NSButton *disclosureTriangle; // @synthesize disclosureTriangle=_disclosureTriangle;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) NSLevelIndicator *levelIndicator; // @synthesize levelIndicator=_levelIndicator;
@property(nonatomic) NSTextField *colorTextField; // @synthesize colorTextField=_colorTextField;
@property(nonatomic) NSPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
@property(nonatomic) NSMatrix *radioButtons; // @synthesize radioButtons=_radioButtons;
@property(nonatomic) NSWindow *window; // @synthesize window=_window;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)clickDisclosureTriangle:(id)arg1;
- (void)adjustTableViewVisibility:(BOOL)arg1;
- (void)growWindowByDelta:(double)arg1;
- (void)clickLevelIndicator:(id)arg1;
- (void)clickOKButton:(id)arg1;
- (void)changePopupButton:(id)arg1;
- (void)clickRadioButtons:(id)arg1;
- (long long)doModal;
- (void)dealloc;
- (id)init;

@end


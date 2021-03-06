//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCSheetController.h"

@class FTPKitError, NSArrayController, NSButton, NSImage, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface GroupErrorSheetController : PCSheetController
{
    FTPKitError *iError;
    NSArrayController *oArrayController;
    NSTableView *oErrorTableView;
    NSButton *oDisclosureButton;
    NSString *iTitle;
    NSString *iMessage;
    NSString *iDisclosureMessage;
    NSImage *iReportErrorIcon;
}

+ (id)queuedSheetControllerWithGroupError:(id)arg1 tag:(long long)arg2 delegate:(id)arg3 interfaceDelegate:(id)arg4 contextInfo:(id)arg5;
@property(retain) NSArrayController *arrayController; // @synthesize arrayController=oArrayController;
@property(retain) FTPKitError *error; // @synthesize error=iError;
@property(retain) NSString *disclosureMessage; // @synthesize disclosureMessage=iDisclosureMessage;
@property(retain) NSString *message; // @synthesize message=iMessage;
@property(retain) NSString *title; // @synthesize title=iTitle;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)toggleErrorList:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)nibName;
- (void)beginSheetForWindow:(id)arg1;
- (void)dealloc;

@end


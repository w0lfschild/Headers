//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ReplayKit/RPVideoEditorExtensionHostProtocol-Protocol.h>

@class RPPreviewViewController, RPVideoEditorExtensionHostContext;

@interface RPVideoEditorHostViewController : _UIRemoteViewController <RPVideoEditorExtensionHostProtocol>
{
    RPPreviewViewController *_previewViewController;
    RPVideoEditorExtensionHostContext *_hostContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RPVideoEditorExtensionHostContext *hostContext; // @synthesize hostContext=_hostContext;
@property(nonatomic) __weak RPPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;

@end


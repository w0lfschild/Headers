//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ConnectBackgroundView, ConnectViewController, NSButton, NSMatrix, NSSecureTextField, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface ProtocolConnectController : NSObject
{
    NSView *iView;
    NSTextField *iServerField;
    NSTextField *iUsernameField;
    NSSecureTextField *iPasswordField;
    NSTextField *iInitialPathField;
    NSTextField *iPortField;
    NSButton *iConnectButton;
    NSButton *iMountDiskButton;
    ConnectBackgroundView *iBackgroundView;
    NSMatrix *iTypeMatrix;
    ConnectViewController *iConnectViewController;
    unsigned long long iStringEncoding;
}

@property unsigned long long stringEncoding; // @synthesize stringEncoding=iStringEncoding;
- (void)frameDidChangeNotification:(id)arg1;
- (id)view;
- (void)typeMatrixAction:(id)arg1;
- (struct CGLayer *)stampLayer;
- (BOOL)shouldEnableMountAsDiskButton;
- (BOOL)shouldEnableConnectButton;
@property(getter=isMountDiskButtonHidden) BOOL mountDiskButtonHidden;
- (void)setMountButtonEnabled:(BOOL)arg1;
- (void)setCredentials:(id)arg1;
- (unsigned int)protocol;
- (void)mountAsDisk:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)credentials;
- (void)setConnectButtonEnabled:(BOOL)arg1;
- (void)controlTextDidChange:(id)arg1;
- (int)viewMode;
- (void)connect:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)awakeFromNib;

@end


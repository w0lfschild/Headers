//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRemoteViewController.h"

#import "AutomatorSecurityHelperHostViewController.h"

@class AMSecurityHelperWindowController;

@interface AutomatorSecurityHelperHostViewController : NSRemoteViewController <AutomatorSecurityHelperHostViewController>
{
    AMSecurityHelperWindowController *_sheetController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AMSecurityHelperWindowController *sheetController; // @synthesize sheetController=_sheetController;
- (void)hostCloseWindowWithReply:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end


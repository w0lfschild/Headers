//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@class NSMenu, NSOpenGLContext, NSOpenGLView, NSPanel, NSStatusItem, NSString, NSTimer, NSWindow;

@interface iCursorAppDelegate : NSObject <NSApplicationDelegate>
{
    NSMenu *statusMenu;
    NSStatusItem *statusItem;
    NSWindow *dWindow;
    struct CGPoint mouseLoc;
    NSOpenGLView *glView;
    NSOpenGLContext *glContext;
    NSTimer *timer;
    NSPanel *Startup;
}

- (void)RenderTimer;
- (void)InitOpenGL;
- (void)InitWindow;
- (void)MenuWasChanged:(id)arg1;
- (void)FillMenu;
- (void)awakeFromNib;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)WritePrefs;
- (void)ReadPrefs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


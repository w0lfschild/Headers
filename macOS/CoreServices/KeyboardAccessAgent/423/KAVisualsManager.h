//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXVisualsAgentDelegateInterface-Protocol.h"

@class KAVisualsCursorWindow, KAVisualsMenuWindow, NSXPCConnection;
@protocol AXVisualsAgentInterface;

@interface KAVisualsManager : NSObject <AXVisualsAgentDelegateInterface>
{
    KAVisualsCursorWindow *_cursorWindow;
    KAVisualsMenuWindow *_menuWindow;
    id <AXVisualsAgentInterface> __visualsAgent;
    NSXPCConnection *__visualsAgentConnection;
}

+ (void)_logIfNotOnMainThread;
@property(retain, nonatomic, setter=_setVisualsAgentConnection:) NSXPCConnection *_visualsAgentConnection; // @synthesize _visualsAgentConnection=__visualsAgentConnection;
@property(retain, nonatomic, setter=_setVisualsAgent:) id <AXVisualsAgentInterface> _visualsAgent; // @synthesize _visualsAgent=__visualsAgent;
@property(retain, nonatomic) KAVisualsMenuWindow *menuWindow; // @synthesize menuWindow=_menuWindow;
@property(retain, nonatomic) KAVisualsCursorWindow *cursorWindow; // @synthesize cursorWindow=_cursorWindow;
- (void).cxx_destruct;
- (void)mouseDownOnMenuItem:(id)arg1 atRowIndex:(long long)arg2;
- (void)dealloc;
- (void)_initializeVisualsAgent;
- (id)init;

@end


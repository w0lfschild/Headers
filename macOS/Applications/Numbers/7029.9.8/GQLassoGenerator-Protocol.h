//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GQDConnectionInfo, GQDLSDocument, GQDLSSimpleTreeNode, GQDLSTablePrototype, GQDSStyle, GQDWPHeaderFooterStorage, GQSDocument, NSArray;

@protocol GQLassoGenerator <NSObject>
+ (int)endTablePrototypes:(GQDLSSimpleTreeNode *)arg1 state:(GQSDocument *)arg2;
+ (int)endTablePrototype:(GQDLSTablePrototype *)arg1 state:(GQSDocument *)arg2;
+ (int)beginTablePrototype:(GQDLSTablePrototype *)arg1 state:(GQSDocument *)arg2;
+ (int)beginTablePrototypes:(GQDLSSimpleTreeNode *)arg1 state:(GQSDocument *)arg2;
+ (int)handleCalcEngine:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)handleHiddenStickyNotes:(NSArray *)arg1 state:(GQSDocument *)arg2;
+ (int)handleFooter:(GQDWPHeaderFooterStorage *)arg1 state:(GQSDocument *)arg2;
+ (int)handleHeader:(GQDWPHeaderFooterStorage *)arg1 state:(GQSDocument *)arg2;
+ (int)handleConnection:(GQDConnectionInfo *)arg1 state:(GQSDocument *)arg2;
+ (int)handleDrawableZOrder:(const char *)arg1 state:(GQSDocument *)arg2;
+ (Class)beginWorkspacePage:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)handleWorkspaceStyle:(GQDSStyle *)arg1 state:(GQSDocument *)arg2;
+ (int)endWorkspace:(GQSDocument *)arg1;
+ (int)beginWorkspace:(const char *)arg1 state:(GQSDocument *)arg2 shouldRead:(char *)arg3;
+ (int)handleStylesheet:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)endDocument:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)beginDocument:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
@end


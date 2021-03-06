//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSString, NSTimer, TTProfile, TTTabController, TTUUID;

@interface TTShell : NSObject
{
    TTTabController *_controller;
    TTProfile *_profile;
    id _target;
    SEL _action;
    int _fd;
    int _pid;
    int _shellPid;
    int _basePid;
    int _ttyDevice;
    char _ptyPath[12];
    int _exitStatus;
    BOOL _childTerminated;
    BOOL _pipeClosed;
    BOOL _wasDirty;
    BOOL _isUpdatingDirty;
    char *_shellArgs[255];
    NSString *_loginCommand;
    NSMutableArray *_runningProcesses;
    NSMutableDictionary *_runningProcessesKeyedByPID;
    NSTimer *_runningProcessesUpdateTimer;
    BOOL _isLongDurationTimer;
    NSString *_frontmostProcess;
    NSString *_frontmostProcessShortName;
    NSString *_frontmostProcessLabel;
    int _frontmostProcessPID;
    NSString *_shellCommand;
    NSString *_shellCommandName;
    BOOL _commandAsShell;
    BOOL _usrbinlogin;
    TTUUID *_sessionClassID;
    TTUUID *_sessionRestorationID;
    int _shellExitAction;
    BOOL _useOptionAsMetaKey;
    BOOL _deleteSendsBackspace;
    NSMutableData *_writeBuffer;
}

+ (BOOL)isShellCommand:(id)arg1;
+ (id)pathForExecutable:(id)arg1;
+ (void)childDidTerminate:(id)arg1;
+ (void)signalPipeHandler:(id)arg1;
+ (id)runningShells;
+ (void)initialize;
@property(retain) NSTimer *runningProcessesUpdateTimer; // @synthesize runningProcessesUpdateTimer=_runningProcessesUpdateTimer;
@property(retain) NSDictionary *runningProcessesKeyedByPID; // @synthesize runningProcessesKeyedByPID=_runningProcessesKeyedByPID;
@property(readonly, retain) TTUUID *sessionRestorationID; // @synthesize sessionRestorationID=_sessionRestorationID;
@property(readonly, retain) TTUUID *sessionClassID; // @synthesize sessionClassID=_sessionClassID;
@property(copy) NSString *shellCommandName; // @synthesize shellCommandName=_shellCommandName;
- (BOOL)isBufferingWrites;
- (void)setShouldBufferWrites:(BOOL)arg1;
@property(readonly) NSString *loginCommand;
@property(readonly) NSString *shellCommand;
- (int)shellExitAction;
- (id)ptyPathNSString;
- (id)exitStatusMessage:(int)arg1;
- (void)updateContentSize:(struct CGSize)arg1 rowCount:(unsigned int)arg2 columnCount:(unsigned int)arg3;
- (BOOL)frontmostProcessIsShell;
- (id)frontmostProcessLabel;
- (id)frontmostProcessShortName;
- (id)frontmostProcess;
- (void)toggleShowAllProcesses;
- (id)warningProcesses;
- (id)runningProcessNames;
- (id)runningProcesses;
@property(readonly, getter=isDirty) BOOL dirty;
- (id)pathnameAndArgv:(id *)arg1 forPid:(int)arg2;
- (void)scheduleRunningProcessesUpdateTimer:(BOOL)arg1;
- (void)writeData:(id)arg1 escapingCharacters:(BOOL)arg2;
- (void)writeData:(id)arg1;
- (void)terminate;
- (void)processEnded;
- (void)ioManagerDidEncounterError:(id)arg1;
- (void)childTerminated:(int)arg1;
- (id)controller;
- (SEL)action;
- (id)target;
- (void)detachTarget;
- (BOOL)isRunning;
- (int)ttyDevice;
- (int)fileDescriptor;
- (int)pid;
- (void)dealloc;
- (void)setShellExitActionOverride:(int)arg1;
- (void)setProfile:(id)arg1;
- (id)initShellArgs:(id)arg1 userInfo:(struct passwd *)arg2 forCustomWorkingDirectory:(BOOL)arg3;
- (id)description;
- (id)initWithAction:(SEL)arg1 target:(id)arg2 profile:(id)arg3 controller:(id)arg4 customShell:(id)arg5 commandAsShell:(BOOL)arg6 workingDirectory:(id)arg7 sessionClass:(id)arg8 restoreSession:(id)arg9;

@end


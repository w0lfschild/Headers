//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUserInterfaceAction-Protocol.h"

@class ABBookGroupPasteCategorizer, NSString;
@protocol ABCommand, ABCommandExecutor;

@interface ABGroupPasteAction : NSObject <ABUserInterfaceAction>
{
    BOOL executionWasAuthorized;
    id <ABCommand> _pasteCommand;
    id <ABCommandExecutor> _commandExecutor;
    ABBookGroupPasteCategorizer *_groupPasteCategorizer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ABBookGroupPasteCategorizer *groupPasteCategorizer; // @synthesize groupPasteCategorizer=_groupPasteCategorizer;
@property(readonly, nonatomic) id <ABCommandExecutor> commandExecutor; // @synthesize commandExecutor=_commandExecutor;
@property(readonly, nonatomic) id <ABCommand> pasteCommand; // @synthesize pasteCommand=_pasteCommand;
@property(nonatomic) BOOL executionWasAuthorized; // @synthesize executionWasAuthorized;
- (void)performWithSender:(id)arg1;
- (BOOL)validateWithMenuItem:(id)arg1;
@property(readonly, nonatomic) BOOL requiresAuthorizationBeforeExecution;
- (id)initWithPasteCommand:(id)arg1 commandExecutor:(id)arg2 groupPasteCategorizer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


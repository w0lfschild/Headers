//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UndoGroup : NSObject
{
    UndoGroup *_parent;
    NSMutableArray *_actions;
    NSString *_actionName;
}

- (void)setActionName:(id)arg1;
- (id)parent;
- (id)initWithParent:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)lastAction;
- (void)addAction:(id)arg1;
- (id)actionName;
- (id)actions;

@end


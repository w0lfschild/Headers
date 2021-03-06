//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInteractionHandlerManager-Protocol.h>

@class NSMapTable, NSString;

@interface SXComponentInteractionHandlerManager : NSObject <SXComponentInteractionHandlerManager>
{
    NSMapTable *_interactionHandlers;
}

@property(readonly, nonatomic) NSMapTable *interactionHandlers; // @synthesize interactionHandlers=_interactionHandlers;
- (void).cxx_destruct;
- (void)updateUserInteractionForComponentView:(id)arg1;
- (id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2;
- (id)interactionsForComponentView:(id)arg1;
- (id)componentViewForLocation:(struct CGPoint)arg1;
- (void)removeInteractionHandler:(id)arg1 componentView:(id)arg2;
- (void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


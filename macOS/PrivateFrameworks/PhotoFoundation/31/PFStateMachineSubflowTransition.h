//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFStateMachineTransition.h>

@class NSString;

@interface PFStateMachineSubflowTransition : PFStateMachineTransition
{
    NSString *_subflowName;
}

- (void).cxx_destruct;
@property(readonly) NSString *subflowName; // @synthesize subflowName=_subflowName;
- (id)description;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (void)performAction:(id)arg1;
- (id)returnDestination:(id)arg1;
- (id)destination:(id)arg1;
- (id)initWithEventName:(id)arg1 subflow:(id)arg2 to:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXGridBasedTestElement-Protocol.h"
#import "IPXNavigableTestElement-Protocol.h"
#import "IPXOneUpTriggerableTestElement-Protocol.h"

@protocol IPXOneUpTransitionableElement <IPXGridBasedTestElement, IPXOneUpTriggerableTestElement, IPXNavigableTestElement>

@optional
- (void)testElement_prepareForOneUpTransitionWithCompletion:(void (^)(void))arg1;
@end


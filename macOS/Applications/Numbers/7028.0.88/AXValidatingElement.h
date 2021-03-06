//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CXElement.h"

@class NSMutableArray;

@interface AXValidatingElement : CXElement
{
    BOOL m_hasBeenValidated;
    NSMutableArray *m_unvalidatedAttributes;
}

- (void)reportUnvalidated;
- (void)attributeHasBeenValidated:(id)arg1;
- (void)isNonValidating;
- (void)hasBeenValidated;
- (void)validateUsingList:(id)arg1;
- (void)validateSelf;
- (void)prepareToValidate;
- (void)dealloc;
- (id)axGetContainingSlide;

@end


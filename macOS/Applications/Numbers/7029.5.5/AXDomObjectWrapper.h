//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CXElement, NSString;

@interface AXDomObjectWrapper : NSObject
{
    id m_wrappedObject;
    CXElement *m_ownerElement;
    NSString *m_attribute;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1 forElement:(id)arg2 attribute:(id)arg3;

@end


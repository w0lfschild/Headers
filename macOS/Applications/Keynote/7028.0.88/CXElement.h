//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CXTreeNode.h"

@class NSMutableDictionary, NSString;

@interface CXElement : CXTreeNode
{
    NSString *m_name;
    NSMutableDictionary *m_attributes;
}

+ (id)expandEntitiesForAttributeString:(id)arg1;
+ (id)collapseEntitiesForAttributeString:(id)arg1;
+ (void)initialize;
- (void)initializeNewElement;
- (void)processElementsMatching:(id)arg1 withObject:(id)arg2 selector:(SEL)arg3;
- (BOOL)matchesPathComponents:(id)arg1;
- (id)getElementText;
- (void)addText:(id)arg1;
- (id)getChildElementsNamed:(id)arg1;
- (id)getFirstChildWithAttribute:(id)arg1 withValue:(id)arg2;
- (id)getFirstChildElementNamed:(id)arg1;
- (id)getChildElement:(int)arg1;
- (int)getChildElementCount;
- (id)insertElementNamed:(id)arg1 after:(id)arg2;
- (id)addElementNamed:(id)arg1;
- (void)removeAllAttributes;
- (id)getAttributes;
- (void)removeAttribute:(id)arg1;
- (void)setReferenceAttribute:(id)arg1 toElement:(id)arg2;
- (id)getReferenceAttribute:(id)arg1;
- (id)resolvePossibleReference;
- (id)getFilenameAttribute:(id)arg1;
- (void)setPointAttribute:(id)arg1 toValue:(struct CGPoint)arg2 defaultValue:(struct CGPoint)arg3;
- (void)setPointAttribute:(id)arg1 toValue:(struct CGPoint)arg2;
- (struct CGPoint)getPointAttribute:(id)arg1 defaultValue:(struct CGPoint)arg2;
- (struct CGPoint)getPointAttribute:(id)arg1;
- (void)setSizeAttribute:(id)arg1 toValue:(struct CGSize)arg2 defaultValue:(struct CGSize)arg3;
- (void)setSizeAttribute:(id)arg1 toValue:(struct CGSize)arg2;
- (struct CGSize)getSizeAttribute:(id)arg1 defaultValue:(struct CGSize)arg2;
- (struct CGSize)getSizeAttribute:(id)arg1;
- (void)setEnumeratedAttribute:(id)arg1 toValue:(int)arg2 enumeration:(id)arg3;
- (void)setEnumeratedAttribute:(id)arg1 toValue:(int)arg2 defaultValue:(int)arg3 enumeration:(id)arg4;
- (int)getEnumeratedAttribute:(id)arg1 defaultValue:(int)arg2 enumeration:(id)arg3;
- (int)getEnumeratedAttribute:(id)arg1 enumeration:(id)arg2;
- (void)setBooleanAttribute:(id)arg1 toValue:(BOOL)arg2 defaultValue:(BOOL)arg3;
- (void)setBooleanAttribute:(id)arg1 toValue:(BOOL)arg2;
- (BOOL)getOptionalBooleanAttribute:(id)arg1 outValue:(char *)arg2;
- (BOOL)getBooleanAttribute:(id)arg1 defaultValue:(BOOL)arg2 required:(BOOL)arg3;
- (BOOL)getBooleanAttribute:(id)arg1 defaultValue:(BOOL)arg2;
- (BOOL)getBooleanAttribute:(id)arg1;
- (void)setUnsignedAttribute:(id)arg1 toValue:(unsigned int)arg2 defaultValue:(unsigned int)arg3;
- (void)setUnsignedAttribute:(id)arg1 toValue:(unsigned int)arg2;
- (unsigned int)getUnsignedAttribute:(id)arg1 defaultValue:(unsigned int)arg2;
- (unsigned int)getUnsignedAttribute:(id)arg1;
- (void)setIntAttribute:(id)arg1 toValue:(int)arg2 defaultValue:(int)arg3;
- (void)setIntAttribute:(id)arg1 toValue:(int)arg2;
- (int)getIntAttribute:(id)arg1 defaultValue:(int)arg2;
- (int)getIntAttribute:(id)arg1;
- (void)setFloatAttribute:(id)arg1 toValue:(float)arg2 defaultValue:(float)arg3;
- (void)setFloatAttribute:(id)arg1 toValue:(float)arg2;
- (float)getFloatAttribute:(id)arg1 defaultValue:(float)arg2;
- (float)getFloatAttribute:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setAttribute:(id)arg1 toValue:(id)arg2;
- (id)getRequiredAttribute:(id)arg1;
- (id)getAttribute:(id)arg1;
- (id)getName;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

@interface CXWriter : NSObject
{
    NSMutableString *m_serialisedData;
    NSMutableString *m_indent;
    int m_state;
}

- (BOOL)writeFile:(id)arg1 fromDocument:(id)arg2;
- (id)dataForDocument:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)writeTextNode:(id)arg1;
- (void)writeDomSubtree:(id)arg1;
- (void)writeIndent;
- (void)decreaseIndent;
- (void)increaseIndent;
- (void)writeAttribute:(id)arg1 value:(id)arg2;
- (void)endElement:(id)arg1;
- (void)startElement:(id)arg1;

@end


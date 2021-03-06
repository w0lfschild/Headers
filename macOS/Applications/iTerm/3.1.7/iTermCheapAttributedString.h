//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "iTermAttributedString-Protocol.h"

@class NSDictionary, NSMutableData, NSString;

@interface iTermCheapAttributedString : NSObject <iTermAttributedString>
{
    NSDictionary *_attributes;
    NSMutableData *_characterData;
}

@property(retain, nonatomic) NSMutableData *characterData; // @synthesize characterData=_characterData;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)appendAttributedString:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)addAttribute:(id)arg1 value:(id)arg2;
@property(readonly) unsigned long long length;
@property(readonly, nonatomic) unsigned short *characters;
- (void)dealloc;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GQDIBAObject.h"

@class NSArray, NSString;

@interface GQDIBAGlossaryTerm : GQDIBAObject
{
    NSString *_string;
    NSArray *_relatedTermGUIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *relatedTermGUIDs; // @synthesize relatedTermGUIDs=_relatedTermGUIDs;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)description;

@end


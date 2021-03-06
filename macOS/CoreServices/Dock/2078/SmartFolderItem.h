//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SmartFolderItem : NSObject
{
    id _item;
    NSString *_displayName;
    id _sortingAttribute;
    _Bool _isSortingAttributeDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (long long)compare:(id)arg1;
- (_Bool)update:(id)arg1;
@property(readonly, nonatomic) NSURL *url; // @dynamic url;
- (id)description;
- (id)initWithItem:(id)arg1 sortAttribute:(id)arg2;

@end


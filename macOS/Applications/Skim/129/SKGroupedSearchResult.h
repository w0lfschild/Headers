//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKImageToolTipContext.h"

@class NSArray, NSMutableArray, NSString, PDFPage;

__attribute__((visibility("hidden")))
@interface SKGroupedSearchResult : NSObject <SKImageToolTipContext>
{
    PDFPage *page;
    unsigned long long maxCount;
    NSMutableArray *matches;
}

+ (id)groupedSearchResultWithPage:(id)arg1 maxCount:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *matches; // @synthesize matches;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount;
@property(readonly, nonatomic) PDFPage *page; // @synthesize page;
- (void)addMatch:(id)arg1;
@property(readonly, nonatomic) unsigned long long count; // @dynamic count;
@property(readonly, nonatomic) unsigned long long pageIndex; // @dynamic pageIndex;
- (void)dealloc;
- (id)initWithPage:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)toolTipImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


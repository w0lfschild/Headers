//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXSuggester-Protocol.h"
#import "IPXSuggestionViewProvider-Protocol.h"
#import "MKSearchCompleterDelegate-Protocol.h"

@class MKLocalSearch, MKLocalSearchCompleter, NSString;
@protocol GEOMapServiceCompletionTicket, IPXMapKitSuggestionsDelegate;

__attribute__((visibility("hidden")))
@interface IPXMapKitSuggester : NSObject <MKSearchCompleterDelegate, IPXSuggestionViewProvider, IPXSuggester>
{
    id <IPXMapKitSuggestionsDelegate> _delegate;
    MKLocalSearchCompleter *_searchCompleter;
    MKLocalSearch *_currentLocalSearch;
}

- (void).cxx_destruct;
@property(retain) MKLocalSearch *currentLocalSearch; // @synthesize currentLocalSearch=_currentLocalSearch;
@property(retain) MKLocalSearchCompleter *searchCompleter; // @synthesize searchCompleter=_searchCompleter;
@property __weak id <IPXMapKitSuggestionsDelegate> delegate; // @synthesize delegate=_delegate;
- (double)tableCellViewHeightForSuggestion:(id)arg1;
- (void)updateResultView:(id)arg1 withSuggestion:(id)arg2;
- (Class)tableCellViewClassForSuggestion:(id)arg1;
- (id)_suggestionsForMapItems:(id)arg1;
- (void)_finishSearchForInput:(id)arg1;
- (BOOL)_reportSuggestions:(id)arg1 toInput:(id)arg2;
- (CDStruct_26e8d939)_coordinateRegion;
- (id)_suggestionsForLocalSearchResponse:(id)arg1;
- (void)_startLocalSearchWithInput:(id)arg1;
- (id)_newSearchRequestWithSearchString:(id)arg1;
- (id)_suggestionsForSearchCompleterResults:(id)arg1;
- (void)_startCompleterSearchWithInput:(id)arg1;
- (void)completerDidFail:(id)arg1 error:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2;
- (void)setInput:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <GEOMapServiceCompletionTicket> lastTicket;
@property(readonly) Class superclass;

@end


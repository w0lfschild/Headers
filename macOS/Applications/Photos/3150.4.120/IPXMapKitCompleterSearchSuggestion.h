//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXMapKitSearchSuggestion.h"

@class MKSearchCompletion;

@interface IPXMapKitCompleterSearchSuggestion : IPXMapKitSearchSuggestion
{
    MKSearchCompletion *_searchCompletion;
    IPXMapKitSearchSuggestion *_secondarySuggestion;
}

@property(retain) IPXMapKitSearchSuggestion *secondarySuggestion; // @synthesize secondarySuggestion=_secondarySuggestion;
@property(retain) MKSearchCompletion *searchCompletion; // @synthesize searchCompletion=_searchCompletion;
- (void).cxx_destruct;
- (void)validateSuggestion:(CDUnknownBlockType)arg1;
- (BOOL)needsValidation;
- (void)sendFeedback;
- (BOOL)getLocationType:(long long *)arg1;
- (BOOL)getMapRect:(CDStruct_02837cd9 *)arg1 centeredOnCoordinate:(BOOL)arg2;
- (BOOL)getCoordinate:(struct CLLocationCoordinate2D *)arg1;
- (id)alternateName;
- (id)name;
- (id)initWithSearchCompletion:(id)arg1;

@end


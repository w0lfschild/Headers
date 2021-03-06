//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PLMetricEvent-Protocol.h>

@class NSDictionary, NSString, PGGraph;

@interface PGStatisticsMetricEvent : NSObject <PLMetricEvent>
{
    NSString *_identifier;
    PGGraph *_graph;
    NSDictionary *_payload;
    unsigned long long _numberOfHighlights;
    unsigned long long _numberOfLongTripHighlights;
    unsigned long long _numberOfShortTripHighlights;
    unsigned long long _numberOfDefaultHighlights;
    unsigned long long _numberOfAggregationHighlights;
    NSDictionary *_numberOfHighlightsByNumberOfMoments;
    NSDictionary *_numberOfHighlightsByNumberOfAssets;
    NSDictionary *_numberOfHighlightsByNumberOfCuratedAssets;
    NSDictionary *_numberOfHighlightsByNumberOfUtilityAssets;
    unsigned long long _numberOfMoments;
    unsigned long long _numberOfMomentsNotInHighlights;
    unsigned long long _numberOfMeaningfulMomentsNotInHighlights;
    NSDictionary *_numberOfMomentsByNumberOfAssets;
    NSDictionary *_numberOfMomentsByNumberOfUtilityAssets;
    unsigned long long _numberOfMeaningfulMoments;
    unsigned long long _numberOfMeaningfulGatheringMoments;
    unsigned long long _numberOfMeaningfulActivityMoments;
    unsigned long long _numberOfMeaningfulActivityBeachMoments;
    unsigned long long _numberOfMeaningfulActivityDivingMoments;
    unsigned long long _numberOfMeaningfulActivityHikingMoments;
    unsigned long long _numberOfMeaningfulActivityWinterSportsMoments;
    unsigned long long _numberOfMeaningfulEntertainmentMoments;
    unsigned long long _numberOfMeaningfulEntertainmentNightOutMoments;
    unsigned long long _numberOfMeaningfulEntertainmentPerformanceMoments;
    unsigned long long _numberOfMeaningfulEntertainmentSportEventMoments;
    unsigned long long _numberOfMeaningfulCelebration;
    unsigned long long _numberOfMeaningfulCelebrationAnniversary;
    unsigned long long _numberOfMeaningfulCelebrationBirthday;
    unsigned long long _numberOfMeaningfulCelebrationHolidayEvent;
    unsigned long long _numberOfMeaningfulCelebrationWedding;
    unsigned long long _numberOfMeaningfulRestaurant;
    unsigned long long _numberOfMeaningfulRestaurantBreakfast;
    unsigned long long _numberOfMeaningfulRestaurantLunch;
    unsigned long long _numberOfMeaningfulRestaurantDinner;
    unsigned long long _numberOfPublicEvents;
    unsigned long long _numberOfPublicEventsCategoryMusicConcerts;
    unsigned long long _numberOfPublicEventsCategoryNightLife;
    unsigned long long _numberOfPublicEventsCategoryTheater;
    unsigned long long _numberOfPublicEventsCategoryDance;
    unsigned long long _numberOfPublicEventsCategoryFestivalsAndFairs;
    unsigned long long _numberOfPublicEventsCategoryArtsAndMuseums;
    unsigned long long _numberOfPublicEventsCategorySports;
    unsigned long long _numberOfPublicEventsCategoryBusinessAndTechnology;
    unsigned long long _numberOfPublicEventsCategoryCommunity;
    unsigned long long _numberOfPublicEventsCategoryEducational;
    unsigned long long _numberOfPublicEventsCategoryFamilyEvents;
    unsigned long long _numberOfPublicEventsCategoryTours;
    unsigned long long _numberOfPublicEventsCategoryAppleEvents;
    double _averageNumberOfMomentsPerPublicEvent;
    unsigned long long _numberOfBusinessItems;
    double _numberOfMomentsPerBusinessItem;
    unsigned long long _numberOfAssets;
    unsigned long long _numberOfAssetsPast24Hours;
    unsigned long long _numberOfAssetsWithLocation;
    unsigned long long _numberOfUtilityAssets;
    unsigned long long _numberOfAssetsPerMeaningfullMoment;
    unsigned long long _numberOfPeople;
    unsigned long long _numberOfPeopleFavorited;
    unsigned long long _numberOfPeopleWithContact;
    unsigned long long _numberOfUnnamedPeopleWithHighConfidentContactSuggestion;
    unsigned long long _numberOfNamedPeopleWithBirthdayDate;
    unsigned long long _numberOfNamedPeopleWithPotentialBirthdayDate;
    unsigned long long _numberOfUnnamedPeopleWithPotentialBirthdayDate;
}

@property(nonatomic) unsigned long long numberOfUnnamedPeopleWithPotentialBirthdayDate; // @synthesize numberOfUnnamedPeopleWithPotentialBirthdayDate=_numberOfUnnamedPeopleWithPotentialBirthdayDate;
@property(nonatomic) unsigned long long numberOfNamedPeopleWithPotentialBirthdayDate; // @synthesize numberOfNamedPeopleWithPotentialBirthdayDate=_numberOfNamedPeopleWithPotentialBirthdayDate;
@property(nonatomic) unsigned long long numberOfNamedPeopleWithBirthdayDate; // @synthesize numberOfNamedPeopleWithBirthdayDate=_numberOfNamedPeopleWithBirthdayDate;
@property(nonatomic) unsigned long long numberOfUnnamedPeopleWithHighConfidentContactSuggestion; // @synthesize numberOfUnnamedPeopleWithHighConfidentContactSuggestion=_numberOfUnnamedPeopleWithHighConfidentContactSuggestion;
@property(nonatomic) unsigned long long numberOfPeopleWithContact; // @synthesize numberOfPeopleWithContact=_numberOfPeopleWithContact;
@property(nonatomic) unsigned long long numberOfPeopleFavorited; // @synthesize numberOfPeopleFavorited=_numberOfPeopleFavorited;
@property(nonatomic) unsigned long long numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
@property(nonatomic) unsigned long long numberOfAssetsPerMeaningfullMoment; // @synthesize numberOfAssetsPerMeaningfullMoment=_numberOfAssetsPerMeaningfullMoment;
@property(nonatomic) unsigned long long numberOfUtilityAssets; // @synthesize numberOfUtilityAssets=_numberOfUtilityAssets;
@property(nonatomic) unsigned long long numberOfAssetsWithLocation; // @synthesize numberOfAssetsWithLocation=_numberOfAssetsWithLocation;
@property(nonatomic) unsigned long long numberOfAssetsPast24Hours; // @synthesize numberOfAssetsPast24Hours=_numberOfAssetsPast24Hours;
@property(nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(nonatomic) double numberOfMomentsPerBusinessItem; // @synthesize numberOfMomentsPerBusinessItem=_numberOfMomentsPerBusinessItem;
@property(nonatomic) unsigned long long numberOfBusinessItems; // @synthesize numberOfBusinessItems=_numberOfBusinessItems;
@property(nonatomic) double averageNumberOfMomentsPerPublicEvent; // @synthesize averageNumberOfMomentsPerPublicEvent=_averageNumberOfMomentsPerPublicEvent;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryAppleEvents; // @synthesize numberOfPublicEventsCategoryAppleEvents=_numberOfPublicEventsCategoryAppleEvents;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryTours; // @synthesize numberOfPublicEventsCategoryTours=_numberOfPublicEventsCategoryTours;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryFamilyEvents; // @synthesize numberOfPublicEventsCategoryFamilyEvents=_numberOfPublicEventsCategoryFamilyEvents;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryEducational; // @synthesize numberOfPublicEventsCategoryEducational=_numberOfPublicEventsCategoryEducational;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryCommunity; // @synthesize numberOfPublicEventsCategoryCommunity=_numberOfPublicEventsCategoryCommunity;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryBusinessAndTechnology; // @synthesize numberOfPublicEventsCategoryBusinessAndTechnology=_numberOfPublicEventsCategoryBusinessAndTechnology;
@property(nonatomic) unsigned long long numberOfPublicEventsCategorySports; // @synthesize numberOfPublicEventsCategorySports=_numberOfPublicEventsCategorySports;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryArtsAndMuseums; // @synthesize numberOfPublicEventsCategoryArtsAndMuseums=_numberOfPublicEventsCategoryArtsAndMuseums;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryFestivalsAndFairs; // @synthesize numberOfPublicEventsCategoryFestivalsAndFairs=_numberOfPublicEventsCategoryFestivalsAndFairs;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryDance; // @synthesize numberOfPublicEventsCategoryDance=_numberOfPublicEventsCategoryDance;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryTheater; // @synthesize numberOfPublicEventsCategoryTheater=_numberOfPublicEventsCategoryTheater;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryNightLife; // @synthesize numberOfPublicEventsCategoryNightLife=_numberOfPublicEventsCategoryNightLife;
@property(nonatomic) unsigned long long numberOfPublicEventsCategoryMusicConcerts; // @synthesize numberOfPublicEventsCategoryMusicConcerts=_numberOfPublicEventsCategoryMusicConcerts;
@property(nonatomic) unsigned long long numberOfPublicEvents; // @synthesize numberOfPublicEvents=_numberOfPublicEvents;
@property(nonatomic) unsigned long long numberOfMeaningfulRestaurantDinner; // @synthesize numberOfMeaningfulRestaurantDinner=_numberOfMeaningfulRestaurantDinner;
@property(nonatomic) unsigned long long numberOfMeaningfulRestaurantLunch; // @synthesize numberOfMeaningfulRestaurantLunch=_numberOfMeaningfulRestaurantLunch;
@property(nonatomic) unsigned long long numberOfMeaningfulRestaurantBreakfast; // @synthesize numberOfMeaningfulRestaurantBreakfast=_numberOfMeaningfulRestaurantBreakfast;
@property(nonatomic) unsigned long long numberOfMeaningfulRestaurant; // @synthesize numberOfMeaningfulRestaurant=_numberOfMeaningfulRestaurant;
@property(nonatomic) unsigned long long numberOfMeaningfulCelebrationWedding; // @synthesize numberOfMeaningfulCelebrationWedding=_numberOfMeaningfulCelebrationWedding;
@property(nonatomic) unsigned long long numberOfMeaningfulCelebrationHolidayEvent; // @synthesize numberOfMeaningfulCelebrationHolidayEvent=_numberOfMeaningfulCelebrationHolidayEvent;
@property(nonatomic) unsigned long long numberOfMeaningfulCelebrationBirthday; // @synthesize numberOfMeaningfulCelebrationBirthday=_numberOfMeaningfulCelebrationBirthday;
@property(nonatomic) unsigned long long numberOfMeaningfulCelebrationAnniversary; // @synthesize numberOfMeaningfulCelebrationAnniversary=_numberOfMeaningfulCelebrationAnniversary;
@property(nonatomic) unsigned long long numberOfMeaningfulCelebration; // @synthesize numberOfMeaningfulCelebration=_numberOfMeaningfulCelebration;
@property(nonatomic) unsigned long long numberOfMeaningfulEntertainmentSportEventMoments; // @synthesize numberOfMeaningfulEntertainmentSportEventMoments=_numberOfMeaningfulEntertainmentSportEventMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulEntertainmentPerformanceMoments; // @synthesize numberOfMeaningfulEntertainmentPerformanceMoments=_numberOfMeaningfulEntertainmentPerformanceMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulEntertainmentNightOutMoments; // @synthesize numberOfMeaningfulEntertainmentNightOutMoments=_numberOfMeaningfulEntertainmentNightOutMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulEntertainmentMoments; // @synthesize numberOfMeaningfulEntertainmentMoments=_numberOfMeaningfulEntertainmentMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulActivityWinterSportsMoments; // @synthesize numberOfMeaningfulActivityWinterSportsMoments=_numberOfMeaningfulActivityWinterSportsMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulActivityHikingMoments; // @synthesize numberOfMeaningfulActivityHikingMoments=_numberOfMeaningfulActivityHikingMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulActivityDivingMoments; // @synthesize numberOfMeaningfulActivityDivingMoments=_numberOfMeaningfulActivityDivingMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulActivityBeachMoments; // @synthesize numberOfMeaningfulActivityBeachMoments=_numberOfMeaningfulActivityBeachMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulActivityMoments; // @synthesize numberOfMeaningfulActivityMoments=_numberOfMeaningfulActivityMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulGatheringMoments; // @synthesize numberOfMeaningfulGatheringMoments=_numberOfMeaningfulGatheringMoments;
@property(nonatomic) unsigned long long numberOfMeaningfulMoments; // @synthesize numberOfMeaningfulMoments=_numberOfMeaningfulMoments;
@property(retain, nonatomic) NSDictionary *numberOfMomentsByNumberOfUtilityAssets; // @synthesize numberOfMomentsByNumberOfUtilityAssets=_numberOfMomentsByNumberOfUtilityAssets;
@property(retain, nonatomic) NSDictionary *numberOfMomentsByNumberOfAssets; // @synthesize numberOfMomentsByNumberOfAssets=_numberOfMomentsByNumberOfAssets;
@property(nonatomic) unsigned long long numberOfMeaningfulMomentsNotInHighlights; // @synthesize numberOfMeaningfulMomentsNotInHighlights=_numberOfMeaningfulMomentsNotInHighlights;
@property(nonatomic) unsigned long long numberOfMomentsNotInHighlights; // @synthesize numberOfMomentsNotInHighlights=_numberOfMomentsNotInHighlights;
@property(nonatomic) unsigned long long numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property(retain, nonatomic) NSDictionary *numberOfHighlightsByNumberOfUtilityAssets; // @synthesize numberOfHighlightsByNumberOfUtilityAssets=_numberOfHighlightsByNumberOfUtilityAssets;
@property(retain, nonatomic) NSDictionary *numberOfHighlightsByNumberOfCuratedAssets; // @synthesize numberOfHighlightsByNumberOfCuratedAssets=_numberOfHighlightsByNumberOfCuratedAssets;
@property(retain, nonatomic) NSDictionary *numberOfHighlightsByNumberOfAssets; // @synthesize numberOfHighlightsByNumberOfAssets=_numberOfHighlightsByNumberOfAssets;
@property(retain, nonatomic) NSDictionary *numberOfHighlightsByNumberOfMoments; // @synthesize numberOfHighlightsByNumberOfMoments=_numberOfHighlightsByNumberOfMoments;
@property(nonatomic) unsigned long long numberOfAggregationHighlights; // @synthesize numberOfAggregationHighlights=_numberOfAggregationHighlights;
@property(nonatomic) unsigned long long numberOfDefaultHighlights; // @synthesize numberOfDefaultHighlights=_numberOfDefaultHighlights;
@property(nonatomic) unsigned long long numberOfShortTripHighlights; // @synthesize numberOfShortTripHighlights=_numberOfShortTripHighlights;
@property(nonatomic) unsigned long long numberOfLongTripHighlights; // @synthesize numberOfLongTripHighlights=_numberOfLongTripHighlights;
@property(nonatomic) unsigned long long numberOfHighlights; // @synthesize numberOfHighlights=_numberOfHighlights;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (id)_numberOfEventsWithAtLeast:(unsigned long long)arg1 from:(id)arg2;
- (id)_numberOfEventsWithMinimum:(unsigned long long)arg1 maximum:(unsigned long long)arg2 from:(id)arg3;
- (void)_fillPeopleStatisticsWithGraph:(id)arg1;
- (void)_fillBusinessStatisticsWithGraph:(id)arg1;
- (void)_fillPublicEventsStatisticsWithGraph:(id)arg1;
- (void)_fillMeaningStatisticsWithGraph:(id)arg1;
- (void)_fillMomentsStatisticsWithGraph:(id)arg1;
- (id)_numberOfEventsByNumberOfUnitFromCountedSet:(id)arg1;
- (void)_fillHighlightStatisticsWithGraph:(id)arg1;
- (BOOL)_isUtilityAsset:(id)arg1;
- (unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)arg1;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithGraphManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PGHighlightsTitleSpecFactory : NSObject
{
}

+ (id)orderedHighlightTitleSpecTypesForMeaningLabel:(id)arg1;
+ (id)titleSpecForHolidayEventIncludingLocationIfPossible:(BOOL)arg1;
+ (id)specPoolsForHolidayEventIncludingLocationIfPossible:(BOOL)arg1 allowAllCities:(BOOL)arg2;
+ (id)specPoolsForBirthdayIncludingLocationIfPossible:(BOOL)arg1 allowAllCities:(BOOL)arg2;
+ (id)specPoolForAOILocation;
+ (id)titleSpecForGenericLocation:(BOOL)arg1;
+ (id)specPoolForGenericLocation:(BOOL)arg1;
+ (id)specPoolForBusinessItem;
+ (id)specPoolForPublicEvent;
+ (id)specPoolForPublicEventWithBusiness;
+ (id)specCollectionForMeaningLabel:(id)arg1 allowAllCities:(BOOL)arg2;

@end


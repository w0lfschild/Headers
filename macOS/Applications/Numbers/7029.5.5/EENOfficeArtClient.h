//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EETOfficeArtClient.h"

@interface EENOfficeArtClient : EETOfficeArtClient
{
}

+ (id)targetLocationForSheetURL:(id)arg1 state:(id)arg2;
- (id)mapHyperlink:(id)arg1 state:(id)arg2;
- (void)mapClientDataFromDrawable:(id)arg1 toDrawables:(id)arg2 state:(id)arg3;
- (void)createClientAnchorForDrawable:(id)arg1 state:(id)arg2;
- (struct CGPoint)mapAnchorMarkerToPoint:(struct EDCellAnchorMarker)arg1 withState:(id)arg2;
- (struct EDCellAnchorMarker)mapPointToAnchorMarker:(struct CGPoint)arg1 fromRow:(int)arg2 fromColumn:(int)arg3 withState:(id)arg4;
- (struct EDCellAnchorMarker)mapPointToAnchorMarker:(struct CGPoint)arg1 withState:(id)arg2;
- (_Bool)isPointAheadOfTable:(struct CGPoint)arg1 withState:(id)arg2;

@end


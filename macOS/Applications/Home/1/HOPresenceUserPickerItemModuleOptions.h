//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HOPresenceCurrentUserLocationDevice;

@interface HOPresenceUserPickerItemModuleOptions : NSObject
{
    BOOL _customLocationSelected;
    HOPresenceCurrentUserLocationDevice *_locationDevice;
}

@property(readonly, nonatomic) BOOL customLocationSelected; // @synthesize customLocationSelected=_customLocationSelected;
@property(readonly, nonatomic) HOPresenceCurrentUserLocationDevice *locationDevice; // @synthesize locationDevice=_locationDevice;
- (void).cxx_destruct;
- (id)initWithLocationDevice:(id)arg1 customLocationSelected:(BOOL)arg2;

@end


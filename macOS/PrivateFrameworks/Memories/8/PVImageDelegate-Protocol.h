//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSURL;

@protocol PVImageDelegate
- (BOOL)isImageValid:(NSURL *)arg1 renderingIntent:(int)arg2 size:(struct CGSize *)arg3;
- (struct CGImage *)imageForURL:(NSURL *)arg1 renderingIntent:(int)arg2;
@end


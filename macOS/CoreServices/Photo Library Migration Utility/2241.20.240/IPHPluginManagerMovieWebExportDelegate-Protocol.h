//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol ILPhotoRefProtocol, IPHPluginManagerProtocol;

@protocol IPHPluginManagerMovieWebExportDelegate
- (void)pluginManager:(id <IPHPluginManagerProtocol>)arg1 didFailExportingMovieRef:(NSObject<ILPhotoRefProtocol> *)arg2;
- (void)pluginManager:(id <IPHPluginManagerProtocol>)arg1 didFinishExportingMovieRef:(NSObject<ILPhotoRefProtocol> *)arg2 exportedRef:(NSObject<ILPhotoRefProtocol> *)arg3;
- (BOOL)pluginManager:(id <IPHPluginManagerProtocol>)arg1 shouldContinueExportingMovieRef:(NSObject<ILPhotoRefProtocol> *)arg2 withProgress:(double)arg3;
@end


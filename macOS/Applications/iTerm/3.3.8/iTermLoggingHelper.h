//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSObject<OS_dispatch_queue>, NSString;

@interface iTermLoggingHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _enabled;
    BOOL _plainText;
    BOOL _appending;
    NSString *_path;
    id <iTermLogging> _rawLogger;
    id <iTermLogging> _plainLogger;
    NSFileHandle *_fileHandle;
}

@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(readonly, nonatomic) BOOL appending; // @synthesize appending=_appending;
@property(nonatomic) __weak id <iTermLogging> plainLogger; // @synthesize plainLogger=_plainLogger;
@property(nonatomic) __weak id <iTermLogging> rawLogger; // @synthesize rawLogger=_rawLogger;
@property(readonly, nonatomic) BOOL plainText; // @synthesize plainText=_plainText;
@property(readonly, nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)logData:(id)arg1;
- (id)newFileHandle;
- (BOOL)isLoggingPlainText;
- (BOOL)isLoggingRaw;
- (void)start;
- (void)close;
- (void)stop;
- (void)setPath:(id)arg1 enabled:(BOOL)arg2 plainText:(BOOL)arg3 append:(id)arg4;
- (id)initWithRawLogger:(id)arg1 plainLogger:(id)arg2;

@end


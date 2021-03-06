//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/NSCoding-Protocol.h>
#import <SoftwareUpdate/PKPackageSource-Protocol.h>

@class SUCatalog;

@interface SUPackageSource : NSObject <NSCoding, PKPackageSource>
{
    SUCatalog *_catalog;
    BOOL _packageSourceIsValid;
}

@property(retain) SUCatalog *catalog; // @synthesize catalog=_catalog;
@property BOOL packageSourceIsValid; // @synthesize packageSourceIsValid=_packageSourceIsValid;
- (id)allPackageReferences;
- (BOOL)doScanFinishedOps;
- (id)digestForPackageAtURLPath:(id)arg1;
- (BOOL)registerProduct:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCatalog:(id)arg1;

@end


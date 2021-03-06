//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICAirDropDocument-Protocol.h"

@interface ICAirDropDocument : NSObject <ICAirDropDocument>
{
    struct Document _document;
}

+ (id)documentAtURL:(id)arg1;
+ (id)legacyNoteAirDropDocumentWithWebArchive:(id)arg1;
+ (BOOL)canAirDropImportIntoAccount:(struct NFAccount *)arg1 context:(struct NSManagedObjectContext *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id activityItem;
- (struct Document *)document;
@property(readonly, nonatomic) BOOL hasDocumentForLegacyNote;
@property(readonly, nonatomic) BOOL hasDocumentForNote;
- (id)initWithData:(id)arg1;
- (id)webArchiveFromLegacyNoteDocument;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPRecordIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPAsset : PBCodable <NSCopying>
{
    long long _downloadURLExpiration;
    long long _size;
    NSString *_contentBaseURL;
    NSData *_data;
    NSString *_derivedContentType;
    NSString *_downloadBaseURL;
    NSData *_downloadRequest;
    NSString *_downloadToken;
    NSData *_header;
    NSString *_owner;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordId;
    NSData *_referenceSignature;
    NSString *_requestor;
    NSData *_signature;
    NSString *_uploadReceipt;
    struct {
        unsigned int downloadURLExpiration:1;
        unsigned int size:1;
    } _has;
}

@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(nonatomic) long long downloadURLExpiration; // @synthesize downloadURLExpiration=_downloadURLExpiration;
@property(retain, nonatomic) NSString *downloadBaseURL; // @synthesize downloadBaseURL=_downloadBaseURL;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(retain, nonatomic) CKDPRecordIdentifier *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSString *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property(retain, nonatomic) NSString *derivedContentType; // @synthesize derivedContentType=_derivedContentType;
@property(retain, nonatomic) NSData *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(retain, nonatomic) NSString *downloadToken; // @synthesize downloadToken=_downloadToken;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *header; // @synthesize header=_header;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasReferenceSignature;
@property(readonly, nonatomic) BOOL hasProtectionInfo;
@property(nonatomic) BOOL hasDownloadURLExpiration;
@property(readonly, nonatomic) BOOL hasDownloadBaseURL;
@property(readonly, nonatomic) BOOL hasData;
@property(readonly, nonatomic) BOOL hasUploadReceipt;
@property(readonly, nonatomic) BOOL hasRecordId;
@property(readonly, nonatomic) BOOL hasRequestor;
@property(readonly, nonatomic) BOOL hasContentBaseURL;
@property(readonly, nonatomic) BOOL hasDerivedContentType;
@property(readonly, nonatomic) BOOL hasDownloadRequest;
@property(readonly, nonatomic) BOOL hasDownloadToken;
@property(nonatomic) BOOL hasSize;
@property(readonly, nonatomic) BOOL hasHeader;
@property(readonly, nonatomic) BOOL hasSignature;
@property(readonly, nonatomic) BOOL hasOwner;

@end


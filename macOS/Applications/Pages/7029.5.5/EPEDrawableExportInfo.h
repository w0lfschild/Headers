//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPESDocument, EPXImageBinary, EPXMediaBinary, NSArray, NSDictionary, NSString, NSURL, TSDDrawableInfo, TSDImageInfo, TSDInfoGeometry, TSDLayout, TSDMovieInfo;

@interface EPEDrawableExportInfo : NSObject
{
    BOOL _isImagedDrawable;
    BOOL _showMovieControls;
    BOOL _useSpan;
    EPESDocument *_state;
    NSArray *_inputDrawableArray;
    TSDDrawableInfo *_inputDrawable;
    TSDLayout *_inputDrawableLayout;
    TSDImageInfo *_inputImage;
    EPXImageBinary *_epxImageBinary;
    TSDMovieInfo *_inputMovie;
    TSDInfoGeometry *_movieGeometryRelativeToImage;
    EPXMediaBinary *_epxMovieBinary;
    NSString *_movieCssClass;
    EPXImageBinary *_epxMovieGifImageBinary;
    EPXImageBinary *_epxMoviePosterImageBinary;
    NSURL *_webVideoURL;
    TSDInfoGeometry *_outputDrawableGeometry;
    NSDictionary *_extraOutputDrawableProperties;
    struct CGSize _outputMovieSize;
    struct CGAffineTransform _textContainerTransformInRoot;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL useSpan; // @synthesize useSpan=_useSpan;
@property(retain, nonatomic) NSDictionary *extraOutputDrawableProperties; // @synthesize extraOutputDrawableProperties=_extraOutputDrawableProperties;
@property(retain, nonatomic) TSDInfoGeometry *outputDrawableGeometry; // @synthesize outputDrawableGeometry=_outputDrawableGeometry;
@property(copy, nonatomic) NSURL *webVideoURL; // @synthesize webVideoURL=_webVideoURL;
@property(retain, nonatomic) EPXImageBinary *epxMoviePosterImageBinary; // @synthesize epxMoviePosterImageBinary=_epxMoviePosterImageBinary;
@property(retain, nonatomic) EPXImageBinary *epxMovieGifImageBinary; // @synthesize epxMovieGifImageBinary=_epxMovieGifImageBinary;
@property(nonatomic) BOOL showMovieControls; // @synthesize showMovieControls=_showMovieControls;
@property(copy, nonatomic) NSString *movieCssClass; // @synthesize movieCssClass=_movieCssClass;
@property(nonatomic) struct CGSize outputMovieSize; // @synthesize outputMovieSize=_outputMovieSize;
@property(retain, nonatomic) EPXMediaBinary *epxMovieBinary; // @synthesize epxMovieBinary=_epxMovieBinary;
@property(retain, nonatomic) TSDInfoGeometry *movieGeometryRelativeToImage; // @synthesize movieGeometryRelativeToImage=_movieGeometryRelativeToImage;
@property(retain, nonatomic) TSDMovieInfo *inputMovie; // @synthesize inputMovie=_inputMovie;
@property(nonatomic) BOOL isImagedDrawable; // @synthesize isImagedDrawable=_isImagedDrawable;
@property(retain, nonatomic) EPXImageBinary *epxImageBinary; // @synthesize epxImageBinary=_epxImageBinary;
@property(retain, nonatomic) TSDImageInfo *inputImage; // @synthesize inputImage=_inputImage;
@property(nonatomic) struct CGAffineTransform textContainerTransformInRoot; // @synthesize textContainerTransformInRoot=_textContainerTransformInRoot;
@property(retain, nonatomic) TSDLayout *inputDrawableLayout; // @synthesize inputDrawableLayout=_inputDrawableLayout;
@property(retain, nonatomic) TSDDrawableInfo *inputDrawable; // @synthesize inputDrawable=_inputDrawable;
@property(retain, nonatomic) NSArray *inputDrawableArray; // @synthesize inputDrawableArray=_inputDrawableArray;
@property(readonly, nonatomic) EPESDocument *state; // @synthesize state=_state;
- (id)initWithState:(id)arg1;

@end


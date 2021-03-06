//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AMSUIWebCameraReaderInfoView, AMSUIWebCameraReaderPageModel, AMSUIWebClientContext, CRCameraReader, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSUIWebCameraReaderViewController : UIViewController
{
    CRCameraReader *_cameraController;
    AMSUIWebClientContext *_context;
    AMSUIWebCameraReaderInfoView *_infoView;
    AMSUIWebCameraReaderPageModel *_model;
    NSDictionary *_output;
}

+ (BOOL)cameraSupported;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *output; // @synthesize output=_output;
@property(retain, nonatomic) AMSUIWebCameraReaderPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIWebCameraReaderInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) CRCameraReader *cameraController; // @synthesize cameraController=_cameraController;
- (void)_handleCameraOutput:(id)arg1 error:(id)arg2;
- (void)_applyAppearance:(id)arg1;
- (void)_setupPageForCreditCard;
- (void)_layoutPageForCreditCard;
- (id)_outputForCreditCardReaderObjects:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithModel:(id)arg1 context:(id)arg2;

@end


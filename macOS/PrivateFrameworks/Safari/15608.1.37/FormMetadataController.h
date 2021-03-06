//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSFormMetadataController.h>

__attribute__((visibility("hidden")))
@interface FormMetadataController : WBSFormMetadataController
{
    struct BundleScriptWorld _scriptWorld;
}

+ (id)sharedFormMetadataController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_formMetadataObserverForBundlePage:(const struct BundlePage *)arg1;
- (BOOL)shouldIncludeNonEmptyFields;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3;
- (void)oneTimeCodeFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)oneTimeCodeFieldFocused:(id)arg1 withFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)addressBookAutoFillableFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (BOOL)addressBookAutoFillableFieldFocused:(id)arg1 withAddressBookAutoFillableFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)usernameFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4;
- (void)creditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)_hideAutoFillButtonInField:(id)arg1;
- (void)_requestToShowCreditCardButtonInFieldIfNecessary:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)otherCreditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)otherCreditCardFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)unidentifiedTextFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)unidentifiedTextFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)_otherCreditCardFieldOrUnidentifiedFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)_otherCreditCardFieldOrUnidentifiedFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)passwordFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(BOOL)arg3;
- (BOOL)_fieldContainsStrongPasswordButton:(id)arg1;
- (BOOL)manualAutoFillButtonWillFitInFieldWithMetadata:(id)arg1;
- (void)_requestToShowAutoFillButtonForAddressBookFieldWithMetadataIfAvailable:(id)arg1 formMetadata:(id)arg2 inFrame:(id)arg3 textFieldNodeHandle:(const struct BundleNodeHandle *)arg4;
- (BOOL)_isAddressBookAutoFillAllowedInFormWithType:(unsigned long long)arg1;
- (void)textDidChangeDelayCompletedField:(id)arg1 inFrame:(id)arg2;
- (BOOL)isAutoFillAllowedInFrame:(const struct BundleFrame *)arg1;
- (void)clearScriptWorld;
- (struct BundleScriptWorld *)scriptWorld;

@end


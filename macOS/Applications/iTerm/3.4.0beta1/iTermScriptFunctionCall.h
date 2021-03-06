//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface iTermScriptFunctionCall : NSObject
{
    NSMutableDictionary *_argToExpression;
    NSMutableArray *_evaluators;
    NSMutableSet *_remainingArgs;
    NSString *_name;
    NSString *_namespace;
    NSString *_connectionKey;
}

+ (id)callFunction:(id)arg1 receiver:(id)arg2 timeout:(double)arg3 scope:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)callFunction:(id)arg1 receiver:(id)arg2 timeout:(double)arg3 scope:(id)arg4 retainSelf:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)callFunction:(id)arg1 timeout:(double)arg2 scope:(id)arg3 retainSelf:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)callMethod:(id)arg1 receiver:(id)arg2 timeout:(double)arg3 retainSelf:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *connectionKey; // @synthesize connectionKey=_connectionKey;
@property(copy, nonatomic) NSString *namespace; // @synthesize namespace=_namespace;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)errorForDependentCall:(id)arg1 thatFailedWithError:(id)arg2 connectionKey:(id)arg3;
- (void)evaluateArgumentWithParsedExpression:(id)arg1 invocation:(id)arg2 scope:(id)arg3 synchronous:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)evaluateParametersWithScope:(id)arg1 invocation:(id)arg2 synchronous:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didEvaluateArgument:(id)arg1;
- (void)callBuiltinFunctionWithScope:(id)arg1 parameterValues:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isBuiltinFunction;
- (void)didEvaluateParametersWithScope:(id)arg1 synchronous:(BOOL)arg2 parameterValues:(id)arg3 receiver:(id)arg4 depError:(id)arg5 missing:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)callWithScope:(id)arg1 invocation:(id)arg2 receiver:(id)arg3 synchronous:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addParameterWithName:(id)arg1 parsedExpression:(id)arg2;
- (void)performFunctionCallFromInvocation:(id)arg1 receiver:(id)arg2 scope:(id)arg3 timeout:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)functionCallDidTimeOutAfter:(double)arg1 invocation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performMethodCallFromInvocation:(id)arg1 receiver:(id)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *signature;
- (id)description;
- (id)fullyQualifiedName;
- (id)init;

@end


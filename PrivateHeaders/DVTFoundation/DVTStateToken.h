//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, DVTStateRepository, DVTWeakInterposer, NSDictionary, NSString;

@interface DVTStateToken : NSObject <DVTInvalidation>
{
    DVTWeakInterposer *_statefulObject_dvtWeakInterposer;
    DVTStateRepository *_repository;
    DVTStateRepository *_childRepository;
    NSString *_identifier;
    NSDictionary *_stateSavingObjectPersistenceByName;
    BOOL _isRestoringState;
    BOOL _canPullFromRepository;
    BOOL _checkCanPullFromRepositoryAgain;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_deleteStateFromRepositoryForObjectWithIdentifier:(id)arg1;
- (void)deleteStateFromRepository;
- (void)pullStateFromRepository;
- (void)_pullStateFromDictionary:(id)arg1;
- (id)_stateDictionary;
- (BOOL)pushStateToRepositoryAndReturnError:(id *)arg1;
- (id)_copyStatefulObjectState;
- (void)stateChanged;
- (BOOL)_pushState:(id)arg1 error:(id *)arg2;
- (void)cloneStateForIdentifier:(id)arg1 toIdentifier:(id)arg2;
- (void)unregisterObjectWithIdentifier:(id)arg1;
- (BOOL)registerObject:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
- (id)statefulObjectStateIdentifiers;
- (id)_stateSavingObjectPersistenceByName;
- (id)identifier;
- (id)repository;
- (id)_childRepository;
- (void)_updateCanPullFromRepositoryAndCheckAgain:(BOOL)arg1;
- (void)primitiveInvalidate;
- (id)initWithStatefulObject:(id)arg1 identifier:(id)arg2 inRepository:(id)arg3;
- (void)setStatefulObject:(id)arg1;
- (id)statefulObject;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end


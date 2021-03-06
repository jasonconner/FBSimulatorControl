/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "FBSimulatorControlConfiguration.h"

#import "FBSimulatorApplication.h"

@interface FBSimulatorControlConfiguration ()

@property (nonatomic, copy, readwrite) FBSimulatorApplication *simulatorApplication;
@property (nonatomic, assign, readwrite) NSInteger bucketID;
@property (nonatomic, assign, readwrite) FBSimulatorManagementOptions options;

@end

@implementation FBSimulatorControlConfiguration

+ (instancetype)configurationWithSimulatorApplication:(FBSimulatorApplication *)simulatorApplication bucket:(NSInteger)bucketID options:(FBSimulatorManagementOptions)options
{
  NSParameterAssert(simulatorApplication);
  NSParameterAssert(bucketID >= 0);

  FBSimulatorControlConfiguration *configuration = [self new];
  configuration.simulatorApplication = simulatorApplication;
  configuration.bucketID = bucketID;
  configuration.options = options;
  return configuration;
}

- (instancetype)copyWithZone:(NSZone *)zone
{
  return [self.class
    configurationWithSimulatorApplication:self.simulatorApplication
    bucket:self.bucketID
    options:self.options];
}

- (NSUInteger)hash
{
  return self.simulatorApplication.hash | self.bucketID | self.options;
}

- (BOOL)isEqual:(FBSimulatorControlConfiguration *)object
{
  if (![object isKindOfClass:self.class]) {
    return NO;
  }
  return [self.simulatorApplication isEqual:object.simulatorApplication] &&
  self.options == object.options &&
  self.bucketID == object.bucketID;
}

- (NSString *)description
{
  return [NSString stringWithFormat:
    @"Pool Config | Sim App %@ | Bucket Id %ld | Options %ld",
    self.simulatorApplication,
    self.bucketID,
    self.options
  ];
}

@end

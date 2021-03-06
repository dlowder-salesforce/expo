/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <SystemConfiguration/SystemConfiguration.h>

#import <ReactABI16_0_0/ABI16_0_0RCTEventEmitter.h>

@interface ABI16_0_0RCTNetInfo : ABI16_0_0RCTEventEmitter

- (instancetype)initWithHost:(NSString *)host;

@end

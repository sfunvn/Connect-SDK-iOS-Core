//
//  KeyControl.h
//  Connect SDK
//
//  Created by Jeremy White on 1/3/14.
//  Copyright (c) 2014 LG Electronics.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "Capability.h"

#define kKeyControlAny @"KeyControl.Any"

#define kKeyControlPower @"KeyControl.Power"
#define kKeyControlUp @"KeyControl.Up"
#define kKeyControlDown @"KeyControl.Down"
#define kKeyControlLeft @"KeyControl.Left"
#define kKeyControlRight @"KeyControl.Right"
#define kKeyControlEnter @"KeyControl.Enter"
#define kKeyControlHome @"KeyControl.Home"
#define kKeyControlBack @"KeyControl.Back"
#define kKeyControlInfo @"KeyControl.Info"
#define kKeyControlSetting @"KeyControl.Setting"
#define kKeyControlInputSource @"KeyControl.InputSource"
#define kKeyControlVolumeUp @"KeyControl.VolumeUp"
#define kKeyControlVolumeDown @"KeyControl.VolumeDown"
#define kKeyControlMute @"KeyControl.Mute"
#define kKeyControlHeadPhoneMode @"KeyControl.HeadPhoneMode"
#define kKeyControlChannelUp @"KeyControl.ChannelUp"
#define kKeyControlChannelDown @"KeyControl.ChannelDown"
#define kKeyControlChannelList @"KeyControl.ChannelList"
#define kKeyControlRed @"KeyControl.Red"
#define kKeyControlGreen @"KeyControl.Green"
#define kKeyControlYellow @"KeyControl.Yellow"
#define kKeyControlBlue @"KeyControl.Blue"
#define kKeyControlPlay @"KeyControl.Play"
#define kKeyControlPause @"KeyControl.Pause"
#define kKeyControlForward @"KeyControl.Forward"
#define kKeyControlRewind @"KeyControl.Rewind"
#define kKeyControlReplay @"KeyControl.Replay"
#define kKeyControlBackspace @"KeyControl.Backspace"

#define kKeyControlCapabilities @[\
    kKeyControlPower,\
    kKeyControlUp,\
    kKeyControlDown,\
    kKeyControlLeft,\
    kKeyControlRight,\
    kKeyControlEnter,\
    kKeyControlHome,\
    kKeyControlBack,\
    kKeyControlInfo,\
    kKeyControlSetting,\
    kKeyControlInputSource,\
    kKeyControlVolumeUp,\
    kKeyControlVolumeDown,\
    kKeyControlMute,\
    kKeyControlHeadPhoneMode,\
    kKeyControlChannelUp,\
    kKeyControlChannelDown,\
    kKeyControlChannelList,\
    kKeyControlRed,\
    kKeyControlGreen,\
    kKeyControlYellow,\
    kKeyControlBlue,\
    kKeyControlPlay,\
    kKeyControlPause,\
    kKeyControlForward,\
    kKeyControlRewind,\
    kKeyControlReplay,\
    kKeyControlBackspace\
]

@protocol KeyControl <NSObject>

- (id<KeyControl>) keyControl;
- (CapabilityPriorityLevel) keyControlPriority;

- (void) upWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) downWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) leftWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) rightWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) okWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) backWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) homeWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void) sendKeyCode:(NSUInteger)keyCode success:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) sendKeyCodeString:(NSString*)keyCode success:(SuccessBlock)success failure:(FailureBlock)failure;

@end

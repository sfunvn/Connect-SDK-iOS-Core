//
//  WebOSTVServiceMouse.h
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

typedef enum {
    WebOSTVMouseButtonHome = 1000,
    WebOSTVMouseButtonBack = 1001,
    WebOSTVMouseButtonUp = 1002,
    WebOSTVMouseButtonDown = 1003,
    WebOSTVMouseButtonLeft = 1004,
    WebOSTVMouseButtonRight = 1005,
    WebOSTVMouseButtonEnter = 1006,
    WebOSTVMouseButtonVolumnUp = 1007,
    WebOSTVMouseButtonVolumnDown = 1008,
    WebOSTVMouseButtonMute = 1009,

    WebOSTVKeyCodeRed = 403,
    WebOSTVKeyCodeGreen = 404,
    WebOSTVKeyCodeYellow = 405,
    WebOSTVKeyCodeBlue = 406,
    WebOSTVKeyCodePlay = 415,
    WebOSTVKeyCodePause = 19,
    WebOSTVKeyCodeFastForward = 417,
    WebOSTVKeyCodeRewind = 412,
    WebOSTVKeyCodeStop = 413
} WebOSTVMouseButton;

@interface WebOSTVServiceMouse : NSObject

- (instancetype) initWithSocket:(NSString*)socket success:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) move:(CGVector)distance;
- (void) scroll:(CGVector)distance;
- (void) click;
- (void) button:(WebOSTVMouseButton)keyName;
- (void) disconnect;

@end

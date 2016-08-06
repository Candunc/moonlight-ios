//
//  Controller.h
//  Moonlight
//
//  Created by Diego Waxemberg on 2/1/15.
//  Copyright (c) 2015 Moonlight Stream. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Controller : NSObject

@property (nonatomic) int playerIndex;
@property (nonatomic) int lastButtonFlags;
@property (nonatomic) int emulatingButtonFlags;
@property (nonatomic) char lastLeftTrigger;
@property (nonatomic) char lastRightTrigger;
@property (nonatomic) short lastLeftStickX;
@property (nonatomic) short lastLeftStickY;
@property (nonatomic) short lastRightStickX;
@property (nonatomic) short lastRightStickY;

@end

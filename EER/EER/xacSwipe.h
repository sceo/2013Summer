//
//  xacSwipe.h
//  EER
//
//  Created by Xiang 'Anthony' Chen on 5/30/13.
//  Copyright (c) 2013 hotnAny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "xacTouch.h"

#define EPS         0.0001f
#define THETA       M_PI_4
#define TAPWIDTH    20

#define UNKNOWN     -1

#define NORTH       0
#define NORTHEAST   1
#define EAST        2
#define SOUTHEAST   3
#define SOUTH       4
#define SOUTHWEST   5
#define WEST        6
#define NORTHWEST   7
#define CENTER      8

@interface xacSwipe : NSObject

//@property CGPoint start;
//@property CGPoint end;

@property NSMutableDictionary *touchPoints;
@property long timeStamp;
@property int gesture;

-(void) addTouchPoint :(CGPoint)start :(NSString*) key;
-(void) endTouchPoint :(CGPoint)end :(NSString*) key;
- (int) getGesture;
- (void) cleanTouchPoint;

@end

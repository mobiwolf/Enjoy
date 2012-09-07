//
//  JoystickController.h
//  Enjoy
//
//  Created by Sam McCall on 4/05/09.
//  Copyright 2009 University of Otago. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <IOKit/hid/IOHIDLib.h>
@class Joystick;
@class ConfigsController;

@class TargetController;

@interface JoystickController : NSObject {
	NSMutableArray *joysticks;
	IOHIDManagerRef hidManager;
	IBOutlet NSOutlineView* outlineView;
	IBOutlet TargetController* targetController;
	IBOutlet ConfigsController* configsController;
	id selectedAction;
	BOOL programmaticallySelecting;
}

-(void) setup;
-(Joystick*) findJoystickByRef: (IOHIDDeviceRef) device;

@property(readonly) id selectedAction;
@property(readonly) NSMutableArray *joysticks;

@end

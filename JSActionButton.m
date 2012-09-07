//
//  JSActionButton.m
//  Enjoy
//
//  Created by Sam McCall on 5/05/09.
//

@implementation JSActionButton

@synthesize max, active;

-(id)initWithIndex: (int)newIndex {
	if(self= [ super init]) {
		subActions = NULL;
		index = newIndex;
		name = [[NSString alloc] initWithFormat: @"Button %d", (index+1)];
	}
	return self;
}

-(id) findSubActionForValue: (IOHIDValueRef) val {
	if(IOHIDValueGetIntegerValue(val) == max)
		return self;
	return NULL;
}

-(void) notifyEvent: (IOHIDValueRef) value {
	active = IOHIDValueGetIntegerValue(value) == max;
}

@end

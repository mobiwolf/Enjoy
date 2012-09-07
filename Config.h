//
//  Config.h
//  Enjoy
//
//  Created by Sam McCall on 4/05/09.
//  Copyright 2009 University of Otago. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class Target;

@interface Config : NSObject {
	NSString *name;
	BOOL protect;
	NSMutableDictionary *entries;
}

@property(readwrite) BOOL protect;
@property(readwrite, copy) NSString* name;
@property(readonly) NSMutableDictionary* entries;

-(void) setTarget:(Target*)target forAction:(id)jsa;
-(Target*) getTargetForAction: (id) jsa;

@end

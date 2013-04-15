//
//  SRPebbleSimView.h
//  PebbleSimulator
//
//  Created by Steven van Rossum on 14-04-13.
//  Copyright (c) 2013 Steven van Rossum. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreFoundation/CoreFoundation.h>
#import "pebble_sim.h"

@interface SRPebbleSimView : NSView
{
    CGColorRef clear;
    CGColorRef black;
    CGColorRef white;
    
    void * dlhandle;
    void (*pbl_main)(void * params);
}

- (IBAction)upButtonClick:(id)sender;
- (IBAction)selectButtonClick:(id)sender;
- (IBAction)downButtonClick:(id)sender;


@property (assign) IBOutlet NSButton * upButton;
@property (assign) IBOutlet NSButton * downButton;
@property (assign) IBOutlet NSButton * selectButton;
@property (assign) IBOutlet NSButton * backButton;

@end
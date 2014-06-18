//
//  LogViewer.h
//  stack-manager
//
//  Created by Leonardo Murillo on 6/18/14.
//  Copyright (c) 2014 High Fidelity. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AssignmentClientTask.h"

@interface LogViewer : NSWindowController
@property (weak) IBOutlet NSTextField *assignmentTypeLabel;
@property (unsafe_unretained) IBOutlet NSTextView *stdoutTextField;
@property (unsafe_unretained) IBOutlet NSTextView *stderrTextField;

- (void)loadStdoutDataIntoView:(AssignmentClientTask *)assignmentTask;

@end

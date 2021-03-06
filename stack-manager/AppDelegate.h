//
//  AppDelegate.h
//  stack-manager
//
//  Created by Leonardo Murillo on 6/10/14.
//  Copyright (c) 2014 High Fidelity. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "LogViewer.h"
#import "AssignmentClientTask.h"
#import "DomainServerTask.h"

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSString *startAllServersString;
    NSString *stopAllServersString;
    NSString *updatingString;
    NSString *upToDateString;
    BOOL qtReady;
    BOOL dsReady;
    BOOL acReady;
    
    NSMutableArray *assignmentInstances;
    DomainServerTask *domainServer;
}

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSButton *domainServerStartButton;
@property (weak) IBOutlet NSButton *domainServerViewLogButton;
@property (weak) IBOutlet NSButton *audioMixerStartButton;
@property (weak) IBOutlet NSButton *audioMixerViewLogButton;
@property (weak) IBOutlet NSButton *avatarMixerStartButton;
@property (weak) IBOutlet NSButton *avatarMixerViewLogButton;
@property (weak) IBOutlet NSButton *voxelServerStartButton;
@property (weak) IBOutlet NSButton *voxelServerViewLogButton;
@property (weak) IBOutlet NSButton *modelServerStartButton;
@property (weak) IBOutlet NSButton *modelServerViewLogButton;
@property (weak) IBOutlet NSButton *particleServerStartButton;
@property (weak) IBOutlet NSButton *particleServerViewLogButton;
@property (weak) IBOutlet NSButton *metavoxelServerStartButton;
@property (weak) IBOutlet NSButton *metavoxelServerViewLogButton;
@property (weak) IBOutlet NSButton *startAllServersButton;
@property (weak) IBOutlet NSTextField *requirementsStatusTextfield;
@property (weak) IBOutlet NSTextField *domainServerStatusTextField;
@property (weak) IBOutlet NSTextField *assignmentClientStatusTextField;

- (void)createExecutablePath;
- (void)downloadLatestExecutablesAndRequirements;
- (AssignmentClientTask *)findAssignment:(long)assignmentType;
- (IBAction)toggleServer:(id)sender;
- (IBAction)createServer:(id)sender;
- (IBAction)destroyServer:(id)sender;
- (IBAction)toggleDomainServer:(id)sender;
- (IBAction)displayAssignmentClientLog:(id)sender;
- (IBAction)displayDomainServerLog:(id)sender;
- (BOOL)doWeHaveThisTypeAlready:(NSInteger)instanceType;
- (IBAction)toggleAllServers:(id)sender;
- (void)restartAllServers;
- (NSString *)getStringFromURL:(NSString *)url;
- (void)URLSession:(NSURLSession *)session
      downloadTask:(NSURLSessionDownloadTask *)downloadTask
didFinishDownloadingToURL:(NSURL *)location;
- (void)URLSession:(NSURLSession *)session
      downloadTask:(NSURLSessionDownloadTask *)downloadTask
      didWriteData:(int64_t)bytesWritten
 totalBytesWritten:(int64_t)totalBytesWritten
totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite;

@end

//
//  AssignmentClientTask.h
//  stack-manager
//
//  Created by Leonardo Murillo on 6/13/14.
//  Copyright (c) 2014 High Fidelity. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AssignmentClientTask : NSObject {
    NSString *instanceWallet;
    NSString *instancePool;
    NSPipe *instanceStdoutPipe;
    NSPipe *instanceStderrorPipe;
    NSFileHandle *instanceStdoutFilehandle;
    NSFileHandle *instanceStderrorFileHandle;
}

@property NSTask *instance;
@property NSInteger instanceType;
@property NSString *typeName;
@property NSString *instanceDomain;

- (id)initWithType:(NSInteger)thisInstanceType
            domain:(NSString *)thisInstanceDomain;

@end
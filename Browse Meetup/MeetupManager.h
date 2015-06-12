//
//  MeetupManager.h
//  BrowseMeetup
//
//  Created by Admin on 12.06.15.
//  Copyright (c) 2015 TAMIM Ziad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "MeetupManagerDelegate.h"
#import "MeetupCommunicatorDelegate.h"

@class MeetupCommunicator;

@interface MeetupManager : NSObject<MeetupCommunicatorDelegate>
@property (strong, nonatomic) MeetupCommunicator *communicator;
@property (weak, nonatomic) id<MeetupManagerDelegate> delegate;

- (void)fetchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate;
@end
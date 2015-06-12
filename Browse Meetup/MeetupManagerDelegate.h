//
//  MeetupManagerDelegate.h
//  BrowseMeetup
//
//  Created by Admin on 12.06.15.
//  Copyright (c) 2015 TAMIM Ziad. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MeetupManagerDelegate <NSObject>

- (void)didReceiveGroups:(NSArray *)groups;
- (void)fetchingGroupsFailedWithError:(NSError *)error;

@end

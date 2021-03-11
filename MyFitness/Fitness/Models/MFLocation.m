//
//  MFLocation.m
//  EagleEyeTest
//
//  Created by Christopher Zhang on 2018/11/24.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import "MFLocation.h"
#import <AVOSCloud/AVOSCloud.h>
#import "TrackRecord.h"
#import "NSString+NSDate.h"

@implementation MFLocation

+(instancetype)locationWithDictionary:(NSDictionary *)obj{
    MFLocation *location = [[MFLocation alloc] init];
    location.objectId = [obj objectForKey:@"objectId"];
    location.trackId = [obj objectForKey:@"trackId"];
    location.latitute = [[obj objectForKey:@"latitude"] doubleValue];
    location.longitude = [[obj objectForKey:@"longitude"] doubleValue];
    location.altitude = [[obj objectForKey:@"altitude"] doubleValue];
    location.course = [[obj objectForKey:@"course"] doubleValue];
    location.speed = [[obj objectForKey:@"speed"] doubleValue];
    location.timestamp = [NSString stringFromDate: [obj objectForKey:@"timestamp"]];
    return location;
}

@end

//
//  TrackRecord.m
//  EagleEyeTest
//
//  Created by Christopher Zhang on 2018/11/24.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import "TrackRecord.h"
#import "TransportModeEnum.h"
#import <AVOSCloud/AVOSCloud.h>

@implementation TrackRecord

+(instancetype)trackWithDictionary:(NSDictionary *)obj{
    TrackRecord *trackRecord = [[TrackRecord alloc] init];
    trackRecord.objectId = [obj objectForKey:@"objectId"];
    AVUser *user = [obj objectForKey:@"user"];
    trackRecord.userName = user.username;
    NSDate *startDate = [obj objectForKey:@"startTime"];
    NSDate *finishedDate = [obj objectForKey:@"finishedTime"];
	trackRecord.startTime = startDate;
	trackRecord.finishedTime = finishedDate;
    trackRecord.startTimeString = [TrackRecord stringFromDate: startDate];
    trackRecord.finishedTimeString = [TrackRecord stringFromDate: finishedDate];
	trackRecord.year = [[obj objectForKey:@"year"] integerValue];
	trackRecord.month = [[obj objectForKey:@"month"] integerValue];
    trackRecord.minuteString = [obj objectForKey:@"minuteString"];
	trackRecord.interval = [[obj objectForKey:@"interval"] doubleValue];
    trackRecord.locationArray = [[NSMutableArray alloc] init];
    trackRecord.mileage = [[obj objectForKey:@"mileage"] doubleValue];
    trackRecord.avgSpeed = [[obj objectForKey:@"avgSpeed"] doubleValue];
	trackRecord.paceSpeed = [[obj objectForKey:@"paceSpeed"] doubleValue];
	trackRecord.paceString = [obj objectForKey:@"paceString"];
    trackRecord.calorie = [[obj objectForKey:@"calorie"] doubleValue];
    trackRecord.carbonSaving = [[obj objectForKey:@"carbonSaving"] doubleValue];
    trackRecord.transportMode = (TransportModeEnum)[[obj objectForKey:@"transportMode"] integerValue];
	trackRecord.imageUrl = [obj objectForKey:@"imageUrl"];
	trackRecord.imageId = [obj objectForKey:@"imageId"];
    return trackRecord;
}

+(NSString*)stringFromDate:(NSDate*)date{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"YYYY-MM-dd HH:mm:ss"];
    
    NSString *dateString = [formatter stringFromDate:date];
    return dateString;
}

@end

//
//  NSString+NSDate.m
//  EagleEyeTest
//
//  Created by Christopher Zhang on 2018/11/24.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import "NSString+NSDate.h"

@implementation NSString (NSDate)

+(NSString*)stringFromDate:(NSDate*)date{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"YYYY-MM-dd HH:mm:ss"];
    
    NSString *dateString = [formatter stringFromDate:date];
    return dateString;
}

@end

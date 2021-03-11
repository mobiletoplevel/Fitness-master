//
//  NSDate+NSString.m
//  EagleEyeTest
//
//  Created by Christopher Zhang on 2018/11/26.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import "NSDate+NSString.h"

@implementation NSDate (NSString)

+(NSDate*)dateFromString:(NSString*)dateString{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = @"YYYY-MM-dd HH:mm:ss";
    NSDate *date = [formatter dateFromString:dateString];
    return date;
}

@end

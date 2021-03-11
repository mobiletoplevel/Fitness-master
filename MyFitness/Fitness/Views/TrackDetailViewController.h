//
//  TrackDetailViewController.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/11.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TransportModeEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface TrackDetailViewController : UIViewController
	
- (instancetype)initWithStartTime:(NSDate*)start FinishedTime:(NSDate*)finish TransportMode:(TransportModeEnum)mode TrackId:(NSString*)objectId;

- (instancetype)initWithStartTime:(NSDate*)start FinishedTime:(NSDate*)finish TransportMode:(TransportModeEnum)mode TrackId:(NSString*)objectId openList:(BOOL)open;

@end

NS_ASSUME_NONNULL_END

//
//  TrackListViewController.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/11.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TransportModeEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface TrackListViewController : UIViewController

- (instancetype)initWithTransportMode:(TransportModeEnum)mode;

@end

NS_ASSUME_NONNULL_END

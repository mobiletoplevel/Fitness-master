//
//  DistanceStepperView.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/24.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AlertTypeEnum){
	AlertTypeEnumDistance = 1,
	AlertTypeEnumTime
};

NS_ASSUME_NONNULL_BEGIN

@interface HomeStepperView : UIView

- (void)setTitleWithString:(NSString*)title;

- (void)setUnitWithString:(NSString*)unit;

- (void)setAlertType:(AlertTypeEnum)type;

- (NSInteger)getNumber;

@end

NS_ASSUME_NONNULL_END

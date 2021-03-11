//
//  MonthSectionHeader.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/14.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MonthSectionHeader : UITableViewHeaderFooterView
@property (weak, nonatomic) IBOutlet UILabel *monthLabel;
@property (weak, nonatomic) IBOutlet UILabel *infoLabel;

@end

NS_ASSUME_NONNULL_END

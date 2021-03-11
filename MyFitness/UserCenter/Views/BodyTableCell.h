//
//  BodyTableCell.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/19.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BodyTableCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;
@property (weak, nonatomic) IBOutlet UIView *separator;

- (void)showSeparator;

@end

NS_ASSUME_NONNULL_END

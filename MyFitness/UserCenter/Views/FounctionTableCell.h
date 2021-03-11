//
//  FounctionTableCell.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/19.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FounctionTableCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *indicatorView;
@property (weak, nonatomic) IBOutlet UIView *separator;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *leadingConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *trailingConstraint;

- (void)setSeparatorEndSection;

- (void)hideSeparator;

@end

NS_ASSUME_NONNULL_END
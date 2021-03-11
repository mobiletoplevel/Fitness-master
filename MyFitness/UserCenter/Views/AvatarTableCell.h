//
//  AvatarTableCell.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/19.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AvatarTableCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *bgImageView;
@property (weak, nonatomic) IBOutlet UIImageView *avatarImageView;
@property (weak, nonatomic) IBOutlet UILabel *loginNameLabel;

@end

NS_ASSUME_NONNULL_END

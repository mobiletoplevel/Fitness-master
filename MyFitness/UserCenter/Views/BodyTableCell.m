//
//  BodyTableCell.m
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/19.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import "BodyTableCell.h"

@implementation BodyTableCell

- (void)awakeFromNib {
    [super awakeFromNib];
	_separator.hidden = YES;
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)prepareForReuse{
	[super prepareForReuse];
	_separator.hidden = YES;
}

- (void)showSeparator{
	_separator.hidden = NO;
}

@end

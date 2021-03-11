//
//  FitnessItemView.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/11.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FitnessItemView : UIView
	
- (void)setImage:(UIImage*)image;
	
- (void)setItemName:(NSString*)name;
	
- (void)setTitle:(NSString*)text;
	
- (void)setSeparator;

@end

NS_ASSUME_NONNULL_END

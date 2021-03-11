//
//  RightImageButton.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/18.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RightImageButton : UIControl

- (void)setTitle:(NSString*)string;

- (void)setImage:(UIImage*)image;

- (void)setTitleFont:(UIFont*)font;

- (void)setTitleColor:(UIColor*)color;

- (void)rotateImageView;

- (void)cancelRotateImageView;

@end

NS_ASSUME_NONNULL_END

//
//  ButtonItemView.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/12.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ButtonItemView : UIControl

- (void)setImage:(UIImage*)image;

- (void)setTitle:(NSString*)title;

- (void)setTitleColor:(UIColor*)color;

- (void)setTitleFont:(UIFont*)font;

- (void)setImageViewMarginLeft:(CGFloat)left;

- (void)setImageViewMarginRight:(CGFloat)right;

- (void)setItemHeight:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END

//
//  RecordItemView.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/19.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

IB_DESIGNABLE

@interface RecordItemView : UIView

@property (nonatomic, strong) IBInspectable UIImageView *imageView;

@property (nonatomic, strong) IBInspectable UILabel *titleLabel;

@property (nonatomic, assign) IBInspectable CGFloat imageHeight;

@property (nonatomic, assign) IBInspectable CGFloat labelHeight;

@property (nonatomic, assign) IBInspectable CGFloat topOffset;

@property (nonatomic, strong) UITapGestureRecognizer *tapGesture;

@property (nonatomic, strong) void(^actionBlock)(void);

- (instancetype)init;

- (instancetype)initWithCoder:(NSCoder *)aDecoder;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)setImage:(UIImage*)image;

- (void)setTitle:(NSString*)title;

- (void)setTitleColor:(UIColor*)color;

- (void)setTitleFont:(UIFont*)font;

@end

NS_ASSUME_NONNULL_END

//
//  PageItemViewController.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/10.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SubViewControllerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface PageItemViewController : UIViewController
	
@property (nonatomic, weak) id<SubViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END

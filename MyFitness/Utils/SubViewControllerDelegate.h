//
//  SubViewControllerDelegate.h
//  EagleEyeTest
//
//  Created by Christopher Zhang on 2018/11/30.
//  Copyright © 2019 MDZW. All rights reserved.
//

#ifndef SubViewControllerDelegate_h
#define SubViewControllerDelegate_h

@protocol SubViewControllerDelegate <NSObject>

@optional
- (void)subViewControllerMakePush;

- (void)subViewControllerMakePushWithFlag:(NSInteger)flag;

- (void)leftSideViewControllerMakePush;

- (void)leftSideViewControllerMakePushWithFlag:(NSInteger)flag;

@end

#endif /* SubViewControllerDelegate_h */

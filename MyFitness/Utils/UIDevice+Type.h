//
//  UIDevice+Type.h
//  MyFitness
//
//  Created by Christopher Zhang on 2018/12/10.
//  Copyright © 2019 MDZW. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (Type)
    
-(NSString*)type;
    
-(BOOL)fullScreen;

@end

NS_ASSUME_NONNULL_END

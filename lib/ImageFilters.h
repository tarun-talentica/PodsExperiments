//
//  ImageFilters.h
//  ImageFilters
//
//  Created by ernesto on 15/06/13.
//  Copyright (c) 2013 raywenderlich. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#if __has_feature(modules)
@import CoreMotion;
#endif

@interface ImageFilters : NSObject

@property (nonatomic,readonly) UIImage *originalImage;

-(id)initWithImage:(UIImage*)image;
-(UIImage*)grayScaleImage;
-(UIImage*)oldImageWithIntensity:(CGFloat)level;
@end

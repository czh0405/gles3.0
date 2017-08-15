//
//  ViewController.h
//  opengl_test
//
//  Created by waqu on 2017/8/9.
//  Copyright © 2017年 com.waqu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface ViewController : UIViewController <GLKViewDelegate>

@property (weak, nonatomic) IBOutlet GLKView *glview;

@end


//
//  ViewController.h
//  ConfuseDemo
//
//  Created by 樊建政 on 2019/4/3.
//  Copyright © 2019 Synjones. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (copy  ,nonatomic) NSString *cpString;
@property (copy  ,nonatomic) NSString *cpString2;


- (void)testConfuse;

- (void)testConfu:(NSString *)para1 theSecond:(NSString *)para2;
@end


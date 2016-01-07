//
//  ViewController.h
//  QuizApp2
//
//  Created by tgaiacontentsdev on 2016/01/07.
//  Copyright © 2016年 tgaiacontentsdev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property(nonatomic,weak) IBOutlet UIImageView *backImage;
@property(nonatomic,weak) IBOutlet UITextView *quiz;
@property(nonatomic,weak) IBOutlet UILabel *kazu;
-(IBAction)pushOk:(id)sender;
-(IBAction)pushNg:(id)sender;
-(IBAction)oneMore:(id)sender;


@end


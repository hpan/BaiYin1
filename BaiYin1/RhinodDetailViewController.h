//
//  RhinodDetailViewController.h
//  BaiYin1
//
//  Created by allman-mac on 13-3-13.
//  Copyright (c) 2013年 allman-mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RhinodDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

//
//  DetailViewController.h
//  MyNotes
//
//  Created by 宋海霞 on 2020/4/11.
//  Copyright © 2020 shx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


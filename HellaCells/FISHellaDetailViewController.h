//
//  FISHellaDetailViewController.h
//  HellaCells
//
//  Created by Flatiron School on 6/21/16.
//  Copyright © 2016 FIS. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FISHellaDetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *cellDetailLabel;
@property (strong, nonatomic) UITableViewCell *cellDetailSource;

@end

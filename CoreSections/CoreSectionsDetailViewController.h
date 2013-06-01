//
//  CoreSectionsDetailViewController.h
//  CoreSections
//
//  Created by Piotr Denis on 01.06.2013.
//  Copyright (c) 2013 Piotr Denis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CoreSectionsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

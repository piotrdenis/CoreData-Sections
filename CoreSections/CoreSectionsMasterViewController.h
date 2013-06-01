//
//  CoreSectionsMasterViewController.h
//  CoreSections
//
//  Created by Piotr Denis on 01.06.2013.
//  Copyright (c) 2013 Piotr Denis. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CoreSectionsDetailViewController;

#import <CoreData/CoreData.h>

@interface CoreSectionsMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) CoreSectionsDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

//
//  CoreSectionsAppDelegate.h
//  CoreSections
//
//  Created by Piotr Denis on 01.06.2013.
//  Copyright (c) 2013 Piotr Denis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CoreSectionsAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) UINavigationController *navigationController;

@end

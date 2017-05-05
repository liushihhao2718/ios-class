//
//  AppDelegate.h
//  photo-wal
//
//  Created by 劉士豪 on 2017/5/5.
//  Copyright © 2017年 劉士豪. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


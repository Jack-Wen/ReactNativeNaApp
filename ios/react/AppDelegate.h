//
//  AppDelegate.h
//  react
//
//  Created by Wen,Shengping on 2016/11/9.
//  Copyright © 2016年 Wen,Shengping. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


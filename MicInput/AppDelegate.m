//
//  AppDelegate.m
//  MicInput
//
//  Created by Gstream on 21.09.15.
//  Copyright (c) 2011 http://www.stefanpopp.de/2011/capture-iphone-microphone/ . All rights reserved.
//

#import "AppDelegate.h"
#import "MyAudioViewController.h"

@implementation AppDelegate

@synthesize window = _window;

- (void)dealloc
{
    [_window release];
    [super dealloc];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]] autorelease];
    
    self.window.rootViewController = [[[MyAudioViewController alloc] initWithNibName:@"MyAudioViewController" bundle:nil] autorelease];
    
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
}

- (void)applicationWillTerminate:(UIApplication *)application
{
}

@end

//
//  StickupAppDelegate.h
//  Stickup
//
//  Created by Tim Burks on 2/11/10.
//  Copyright Neon Design Technology, Inc. 2010. All rights reserved.
//

@interface StickupAppDelegate : NSObject <UIApplicationDelegate, CLLocationManagerDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
	
	CLLocationManager *locationManager;
	NSString *server;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSString *server;
@end


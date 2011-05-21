//
//  OCRDemoAppDelegate.h
//  OCRDemo
//
//  Created by Nolan Brown on 12/30/09.

//

#import <UIKit/UIKit.h>

@class PhotoslatorViewController;

@interface PhotoslatorAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    PhotoslatorViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet PhotoslatorViewController *viewController;

@end


//
//  ViewController.h
//  ZLSwipeableViewDemo
//
//  Created by Zhixuan Lai on 11/1/14.
//  Copyright (c) 2014 Zhixuan Lai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZLSwipeableView.h"
#import "SWRevealViewController.h"

@interface ZLSwipeableViewController
    : UIViewController <ZLSwipeableViewDataSource, ZLSwipeableViewDelegate, UIActionSheetDelegate>
@property (weak, nonatomic) IBOutlet UIBarButtonItem *SideBarButton;
@property (nonatomic, strong) ZLSwipeableView *swipeableView;

- (UIView *)nextViewForSwipeableView:(ZLSwipeableView *)swipeableView;
@end

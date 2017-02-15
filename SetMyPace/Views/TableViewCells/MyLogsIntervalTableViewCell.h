//
//  MyLogsIntervalTableViewCell.h
//  SetMyPace
//
//  Created by Varun Rathi
//  AddIntervalViewController.h
//  SetMyPace
//
//     02/02/17.
//   Copyright © 2017 varunrathi28. All rights reserved. on 01/02/17.
//   Copyright © 2017 varunrathi28. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyLogsIntervalTableViewCell : UITableViewCell

@property (nonatomic, retain) IBOutlet UIView *mainContainerView;

@property (nonatomic, retain) IBOutlet UILabel *lblIntervalName;
@property (nonatomic, retain) IBOutlet UILabel *lblIntervalTime;

@property (nonatomic, retain) IBOutlet UIView *separatorView;

@end
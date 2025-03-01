//
//  ChatView.h
//  Binder
//
//  Created by Ramesh on 25/06/16.
//  Copyright © 2016 WePop Info Solutions Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContentView.h"
#import "ChatTableViewCell.h"
#import "ChatTableViewCellXIB.h"
#import "ChatCellSettings.h"
#import "webservice.h"

@interface ChatView : UIViewController <UITableViewDataSource,UITableViewDelegate,WebServiceDelegate>
{
     IBOutlet UIButton *btnSend;
    IBOutlet UILabel *lblText;
   // IBOutlet UITextField *txtMessage;
}
@property(strong,nonatomic)NSString *strReciverID,*strReciverName,*strReciverPic, *strTotalMsg;


- (IBAction)onsendMessage:(id)sender;

@end

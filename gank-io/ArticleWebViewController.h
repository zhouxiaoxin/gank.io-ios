//
//  ArticleWebViewController.h
//  gank-io
//
//  Created by horsley on 15/8/23.
//  Copyright (c) 2015年 horsley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ArticleWebViewController : UIViewController <UIWebViewDelegate>
@property (nonatomic) NSString *url;
@property (nonatomic) NSString *pageTitle;
@end

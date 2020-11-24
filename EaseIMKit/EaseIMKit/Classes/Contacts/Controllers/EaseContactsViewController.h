//
//  EaseContactsViewController.h
//  EaseIMKit
//
//  Created by 杜洁鹏 on 2020/11/5.
//

#import <UIKit/UIKit.h>
#import "EaseBaseTableViewController.h"
#import "EaseContactModel.h"
#import "EaseUserDelegate.h"
#import "EaseContactsViewModel.h"


NS_ASSUME_NONNULL_BEGIN

@protocol EaseContactsViewControllerDelegate <EaseBaseViewControllerDelegate>

@optional

- (void)willBeginRefresh;

- (UITableViewCell *)easeTableView:(UITableView *)tableView cellForRowAtContactModel:(EaseContactModel *) contact;

- (NSArray<UIContextualAction *> *)easeTableView:(UITableView *)tableView
        trailingSwipeActionsForRowAtContactModel:(EaseContactModel *) contact
                                         actions:(NSArray<UIContextualAction *> * __nullable)actions;

- (void)easeTableView:(UITableView *)tableView didSelectRowAtContactModel:(EaseContactModel *) contact;

@end

@interface EaseContactsViewController : EaseBaseTableViewController
@property (nonatomic, strong) NSArray<EaseUserDelegate> *customHeaderItems;
@property (nonatomic, strong) NSArray<EaseUserDelegate> *contacts;
@property (nonatomic) id<EaseContactsViewControllerDelegate> delegate;

- (instancetype)initWithViewModel:(EaseContactsViewModel *)model;

@end

@interface EaseContactLetterModel : NSObject
@property (nonatomic, strong) NSString *contactLetter;
@property (nonatomic, strong) NSArray *contacts;
@end

NS_ASSUME_NONNULL_END

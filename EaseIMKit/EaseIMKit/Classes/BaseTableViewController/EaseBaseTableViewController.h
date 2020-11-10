//
//  EaseBaseTableViewController.h
//  EaseIMKit
//
//  Created by 杜洁鹏 on 2020/11/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol EaseTableViewDelegaate <NSObject>

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(nonnull NSIndexPath *)indexPath;

@end

@interface EaseBaseTableViewController : UIViewController

@property (nonatomic, assign) id<EaseTableViewDelegaate>easeDelegate;

// 主动刷新
- (void)beginRefresh;

// 刷新时执行
- (void)refreshTabView;

// 关闭刷新
- (void)endRefresh;


@end

NS_ASSUME_NONNULL_END
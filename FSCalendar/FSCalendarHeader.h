//
//  FSCalendarHeader.h
//  Pods
//
//  Created by Wenchao Ding on 29/1/15.
//
//

#import <UIKit/UIKit.h>

@class FSCalendar, FSCalendarAppearance;

@interface FSCalendarHeader : UIView

@property (assign, nonatomic) CGFloat scrollOffset;
@property (assign, nonatomic) UICollectionViewScrollDirection scrollDirection;
@property (weak  , nonatomic) FSCalendarAppearance *appearance;
@property (assign, nonatomic) BOOL scrollEnabled;

- (void)reloadData;

@end


@interface FSCalendarHeaderCell : UICollectionViewCell

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) FSCalendarHeader *header;

@end
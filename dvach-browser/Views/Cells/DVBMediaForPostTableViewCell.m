//
//  DVBMediaForPostTableViewCell.m
//  dvach-browser
//
//  Created by Andrey Konstantinov on 02/05/15.
//  Copyright (c) 2015 8of. All rights reserved.
//

#import <UIImageView+AFNetworking.h>

#import "DVBConstants.h"

#import "DVBMediaForPostTableViewCell.h"
#import "DVBWebmIconImageView.h"

@interface DVBMediaForPostTableViewCell ()

@property (nonatomic, strong) NSArray *pathesArray;

// Post thumnails
@property (nonatomic) IBOutlet UIImageView *postThumb0;
@property (nonatomic) IBOutlet UIImageView *postThumb1;
@property (nonatomic) IBOutlet UIImageView *postThumb2;
@property (nonatomic) IBOutlet UIImageView *postThumb3;

// WebmIcons
@property (nonatomic) IBOutlet UIImageView *postWebmIcon0;
@property (nonatomic) IBOutlet UIImageView *postWebmIcon1;
@property (nonatomic) IBOutlet UIImageView *postWebmIcon2;
@property (nonatomic) IBOutlet UIImageView *postWebmIcon3;

@end

@implementation DVBMediaForPostTableViewCell

- (void)awakeFromNib
{
    [super awakeFromNib];

    _postWebmIcon0.hidden = YES;
    _postWebmIcon1.hidden = YES;
    _postWebmIcon2.hidden = YES;
    _postWebmIcon3.hidden = YES;

    _postThumb0.image = nil;
    _postThumb1.image = nil;
    _postThumb2.image = nil;
    _postThumb3.image = nil;

    _postThumb0.contentMode = UIViewContentModeScaleAspectFill;
    _postThumb0.clipsToBounds = YES;
    _postThumb1.contentMode = UIViewContentModeScaleAspectFill;
    _postThumb1.clipsToBounds = YES;
    _postThumb2.contentMode = UIViewContentModeScaleAspectFill;
    _postThumb2.clipsToBounds = YES;
    _postThumb3.contentMode = UIViewContentModeScaleAspectFill;
    _postThumb3.clipsToBounds = YES;

    if ([[NSUserDefaults standardUserDefaults] boolForKey:SETTING_ENABLE_DARK_THEME]) {
        self.backgroundColor = CELL_BACKGROUND_COLOR;
        _postThumb0.superview.backgroundColor = CELL_BACKGROUND_COLOR;
        _postThumb1.superview.backgroundColor = CELL_BACKGROUND_COLOR;
        _postThumb2.superview.backgroundColor = CELL_BACKGROUND_COLOR;
        _postThumb3.superview.backgroundColor = CELL_BACKGROUND_COLOR;
    }
}

- (void)prepareForReuse
{
    [super prepareForReuse];

    _postWebmIcon0.hidden = YES;
    _postWebmIcon1.hidden = YES;
    _postWebmIcon2.hidden = YES;
    _postWebmIcon3.hidden = YES;

    _postThumb0.image = nil;
    _postThumb1.image = nil;
    _postThumb2.image = nil;
    _postThumb3.image = nil;
}

- (void)prepareCellWithThumbPathesArray:(NSArray *)thumbPathesArray andPathesArray:(NSArray *)pathesArray
{
    _pathesArray= pathesArray;
    NSUInteger currentImageIndex = 0;

    for (NSString *postThumbUrlString in thumbPathesArray) {

        UIImageView *postThumb = [self valueForKey:[@"postThumb" stringByAppendingString:[NSString stringWithFormat:@"%ld", (unsigned long)currentImageIndex]]];

        [postThumb setImageWithURL:[NSURL URLWithString:postThumbUrlString]];

        DVBWebmIconImageView *webmIconImageView = [self imageViewToShowWebmIconWithArrayOfViews:postThumb.superview.subviews];

        if (webmIconImageView) {
            NSString *pathString = pathesArray[currentImageIndex];
            if ([self isMediaTypeWebmWithPicPath:pathString]) {
                webmIconImageView.hidden = NO;
            }
        }

        currentImageIndex++;
    }
}

// Check if this webm link
- (BOOL)isMediaTypeWebmWithPicPath:(NSString *)picPath
{
    BOOL isContainWebm = ([picPath rangeOfString:@".webm" options:NSCaseInsensitiveSearch].location != NSNotFound);

    return isContainWebm;
}

- (DVBWebmIconImageView *)imageViewToShowWebmIconWithArrayOfViews:(NSArray *)arrayOfViews
{
    for (UIView *view in arrayOfViews) {
        BOOL isItImageView = [view isMemberOfClass:[DVBWebmIconImageView class]];
        if (isItImageView) {
            DVBWebmIconImageView *imageView = (DVBWebmIconImageView *)view;

            return imageView;
        }
    }

    return nil;
}

#pragma mark - Actions

- (IBAction)touchFirstPicture:(id)sender {
    [self openMediaWithMediaIndex:0];
}
- (IBAction)touchSecondPicture:(id)sender {
    [self openMediaWithMediaIndex:1];
}
- (IBAction)touchThirdPicture:(id)sender {
    [self openMediaWithMediaIndex:2];
}
- (IBAction)touchFourthPicture:(id)sender {
    [self openMediaWithMediaIndex:3];
}

- (void)openMediaWithMediaIndex:(NSUInteger)index
{
    if (_threadViewController && (index < [_pathesArray count])) {
        NSString *urlString = _pathesArray[index];
        if (urlString) {
            [_threadViewController openMediaWithUrlString:urlString];
        }
    }
}

@end

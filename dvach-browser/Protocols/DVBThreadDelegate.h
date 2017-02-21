//
//  DVBThreadDelegate.h
//  dvach-browser
//
//  Created by Andrey Konstantinov on 18/12/16.
//  Copyright © 2016 8of. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DVBThreadDelegate <NSObject>

- (void)openGalleryWIthUrl:(NSString *)url;
- (void)quotePostIndex:(NSInteger)index andText:(nullable NSString *)text;
- (void)showAnswersFor:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END

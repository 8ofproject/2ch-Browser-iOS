//
//  DVBconstants.h
//  dvach-browser
//
//  Created by Andy on 05/11/14.
//  Copyright (c) 2014 8of. All rights reserved.
//

#import <Foundation/Foundation.h>

// iOS version checkers
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

// Colors
#define DVACH_COLOR [UIColor colorWithRed:(255.0/255.0) green:(139.0/255.0) blue:(16.0/255.0) alpha:1.0]
#define DVACH_COLOR_CG [[UIColor colorWithRed:(255.0/255.0) green:(139.0/255.0) blue:(16.0/255.0) alpha:1.0] CGColor]
#define DVACH_COLOR_HIGHLIGHTED [UIColor colorWithRed:(255.0/255.0) green:(139.0/255.0) blue:(16.0/255.0) alpha:0.3]
#define DVACH_COLOR_HIGHLIGHTED_CG [[UIColor colorWithRed:(255.0/255.0) green:(139.0/255.0) blue:(16.0/255.0) alpha:0.3] CGColor]
#define THUMBNAIL_GREY_BORDER [[UIColor colorWithRed:(151.0/255.0) green:(151.0/255.0) blue:(151.0/255.0) alpha:1.0] CGColor]

// Colors - Dark theme
#define CELL_BACKGROUND_COLOR [UIColor colorWithRed:(35.0/255.0) green:(35.0/255.0) blue:(37.0/255.0) alpha:1.0]
#define CELL_TEXT_COLOR [UIColor colorWithRed:(199.0/255.0) green:(199.0/255.0) blue:(204.0/255.0) alpha:1.0]
#define CELL_SEPARATOR_COLOR [UIColor colorWithRed:(24.0/255.0) green:(24.0/255.0) blue:(26.0/255.0) alpha:1.0]

// URL schemes
FOUNDATION_EXPORT NSString *const HTTPS_SCHEME;
FOUNDATION_EXPORT NSString *const HTTP_SCHEME;
FOUNDATION_EXPORT NSString *const GOOGLE_CHROME_HTTPS_SCHEME;
FOUNDATION_EXPORT NSString *const GOOGLE_CHROME_HTTP_SCHEME;

// URLS
FOUNDATION_EXPORT NSString *const DVACH_BASE_URL;
FOUNDATION_EXPORT NSString *const DVACH_BASE_URL_WITHOUT_SCHEME;
FOUNDATION_EXPORT NSString *const GET_CAPTCHA_KEY_URL;
FOUNDATION_EXPORT NSString *const GET_CAPTCHA_IMAGE_URL;
FOUNDATION_EXPORT NSString *const REPORT_THREAD_URL;

FOUNDATION_EXPORT NSString *const REAL_ADDRESS_FOR_BOARDS_LIST;
FOUNDATION_EXPORT NSString *const URL_TO_GET_USERCODE;

// Settings
FOUNDATION_EXPORT NSString *const SETTING_ENABLE_DARK_THEME;
FOUNDATION_EXPORT NSString *const SETTING_ENABLE_LITTLE_BODY_FONT;
FOUNDATION_EXPORT NSString *const USER_AGREEMENT_ACCEPTED;
FOUNDATION_EXPORT NSString *const OPEN_EXTERNAL_LINKS_IN_CHROME;
FOUNDATION_EXPORT NSString *const PASSCODE;
FOUNDATION_EXPORT NSString *const USERCODE;
FOUNDATION_EXPORT NSString *const BOARDS_LIST_VERSION;

// Storyboard VC ID's
FOUNDATION_EXPORT NSString *const STORYBOARD_ID_THREAD_VIEW_CONTROLLER;

// Segues
FOUNDATION_EXPORT NSString *const SEGUE_TO_EULA;
FOUNDATION_EXPORT NSString *const SEGUE_TO_BOARD;
FOUNDATION_EXPORT NSString *const SEGUE_TO_THREAD;
FOUNDATION_EXPORT NSString *const SEGUE_TO_NEW_THREAD;
FOUNDATION_EXPORT NSString *const SEGUE_TO_NEW_THREAD_IOS_7;
FOUNDATION_EXPORT NSString *const SEGUE_TO_NEW_POST;
FOUNDATION_EXPORT NSString *const SEGUE_TO_NEW_POST_IOS_7;
FOUNDATION_EXPORT NSString *const SEGUE_DISMISS_TO_THREAD;
FOUNDATION_EXPORT NSString *const SEGUE_DISMISS_TO_NEW_THREAD;

// Cells
FOUNDATION_EXPORT NSString *const BOARD_CELL_IDENTIFIER;
FOUNDATION_EXPORT NSString *const DVB_BOARDVIEWCONTROLLER_IDENTIFIER;
FOUNDATION_EXPORT NSString *const THREAD_CELL_IDENTIFIER;
FOUNDATION_EXPORT NSString *const POST_CELL_IDENTIFIER;
FOUNDATION_EXPORT NSString *const POST_CELL_TITLE_IDENTIFIER;
FOUNDATION_EXPORT NSString *const POST_CELL_MEDIA_IDENTIFIER;
FOUNDATION_EXPORT NSString *const POST_CELL_ACTIONS_IDENTIFIER;

// Placeholders
FOUNDATION_EXPORT NSString *const PLACEHOLDER_COMMENT_FIELD;

// Files
FOUNDATION_EXPORT NSString *const FILENAME_THUMB_IMAGE_PLACEHOLDER;

// Etc
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

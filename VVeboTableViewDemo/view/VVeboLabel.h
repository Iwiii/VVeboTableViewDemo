//
//  VVeboLabel.h
//  VVeboTableViewDemo
//
//  Created by Johnil on 15/5/25.
//  Copyright (c) 2015年 Johnil. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol YALTouchObject
@optional
-(void)touchString:(NSString*)string;
@end
@interface VVeboLabel : UIView

@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic) NSInteger lineSpace;
@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic,weak) id<NSObject,YALTouchObject>delegate;

- (void)debugDraw;
- (void)clear;
- (BOOL)touchPoint:(CGPoint)point;

@end

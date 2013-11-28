/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UITabBar;

@interface UITabBarSwappableImageView : UIImageView {

	id _value;
	id _alternate;
	float _scale;
	BOOL _showAlternate;
	BOOL _flipped;
	int _currentAnimation;
	UITabBar* _tabBar;
	int _buttonTag;

}
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)showAlternateImage:(BOOL)arg1 ;
-(void)setCurrentImage;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 ;
-(void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3 ;
-(void)setAlternateImage:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SBLockScreenViewControllerBase, UIView, SBFakeStatusBarView, SBDisableAppStatusBarAlphaChangesAssertion;

@interface SBLockScreenClippedSlideController : NSObject {

	SBLockScreenViewControllerBase* _lockscreenVC;
	UIView* _clippingView;
	UIView* _viewToClip;
	UIView* _statusBarContainer;
	BOOL _wantsFakeStatusBar;
	BOOL _shouldSlideLockScreenView;
	BOOL _cleanupManually;
	BOOL _needsCleanup;
	BOOL _hidesSpringBoardStatusBarInitially;
	SBFakeStatusBarView* _fakeStatusBar;
	SBDisableAppStatusBarAlphaChangesAssertion* _statusBarAssertion;

}

@property (nonatomic,retain) UIView * viewToClip;                                  //@synthesize viewToClip=_viewToClip - In the implementation block
@property (assign,nonatomic) BOOL wantsFakeStatusBar;                              //@synthesize wantsFakeStatusBar=_wantsFakeStatusBar - In the implementation block
@property (assign,nonatomic) BOOL hidesSpringBoardStatusBarInitially;              //@synthesize hidesSpringBoardStatusBarInitially=_hidesSpringBoardStatusBarInitially - In the implementation block
@property (assign,nonatomic) BOOL shouldSlideLockScreenView;                       //@synthesize shouldSlideLockScreenView=_shouldSlideLockScreenView - In the implementation block
@property (assign,nonatomic) BOOL cleanupManually;                                 //@synthesize cleanupManually=_cleanupManually - In the implementation block
-(void)_setupAndAddFakeStatusBarIfNecessary;
-(/*^block*/ id)_stepperForTransition:(int)arg1 ;
-(/*^block*/ id)_completionForTransition:(int)arg1 ;
-(void)performTransition:(int)arg1 withAnimator:(/*^block*/ id)arg2 ;
-(id)initWithLockScreenViewController:(id)arg1 ;
-(void)setViewToClip:(id)arg1 ;
-(void)performTransition:(int)arg1 duration:(double)arg2 delay:(double)arg3 completion:(/*^block*/ id)arg4 ;
-(void)cleanupIfNecessary;
-(id)viewToClip;
-(BOOL)cleanupManually;
-(void)setCleanupManually:(BOOL)arg1 ;
-(BOOL)wantsFakeStatusBar;
-(void)setWantsFakeStatusBar:(BOOL)arg1 ;
-(BOOL)shouldSlideLockScreenView;
-(void)setShouldSlideLockScreenView:(BOOL)arg1 ;
-(BOOL)hidesSpringBoardStatusBarInitially;
-(void)setHidesSpringBoardStatusBarInitially:(BOOL)arg1 ;
-(void)dealloc;
-(void)_cleanup;
@end

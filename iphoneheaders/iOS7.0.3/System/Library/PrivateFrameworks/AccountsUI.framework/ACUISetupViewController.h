/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@interface ACUISetupViewController : PSSetupController {

	BOOL _didAttemptDataclassSetup;
	BOOL _shouldForceMailSetup;

}
-(id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3 ;
-(void)_dismissAndNotifyParent;
-(void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2 ;
-(void)finishedAccountSetup;
@end

/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class PSKeychainSyncManager;

@interface KeychainSyncSetupController : PSSetupController {

	PSKeychainSyncManager* _manager;

}
-(id)initWithManager:(id)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)cancelPressed;
@end

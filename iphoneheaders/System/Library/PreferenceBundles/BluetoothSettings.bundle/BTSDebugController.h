/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface BTSDebugController : PSListController {

	NSString* stdoutPath;

}
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)saveLogs:(id)arg1 ;
-(id)readASLLogs;
-(void)clearLogs:(id)arg1 ;
-(id)specifiers;
@end

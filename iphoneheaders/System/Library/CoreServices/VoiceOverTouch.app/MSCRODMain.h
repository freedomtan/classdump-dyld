/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/scrod
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <scrod/scrod-Structs.h>
#import <ScreenReaderCore/SCRCArgumentParser.h>
#import <scrod/SCROServerDelegate.h>

@class SCROHandler;

@interface MSCRODMain : SCRCArgumentParser <SCROServerDelegate> {

	SCROHandler* _handlers[3];
	_CFRunLoop* _runLoops;
	CFRunLoopRef _mainRunLoop;
	BOOL _stop;

}
+(id)processIdentifier;
+(id)versionString;
+(id)commandPath;
-(void)_serverTimeoutNotificationHandler:(id)arg1 ;
-(id)_safeHandlerForType:(int*)arg1 ;
-(void)_goDogGo:(id)arg1 ;
-(void)dealloc;
-(int)run;
-(void)stop;
-(id)initWithArgc:(int)arg1 argv:(const char**)arg2 ;
-(void)handleCallback:(id)arg1 ;
-(int)handleEvent:(id)arg1 handlerType:(int)arg2 trusted:(BOOL)arg3 ;
-(int)registerCallbackForKey:(int)arg1 forClientIdentifier:(unsigned)arg2 handlerType:(int)arg3 trusted:(BOOL)arg4 ;
-(int)setValue:(id)arg1 forKey:(int)arg2 handlerType:(int)arg3 trusted:(BOOL)arg4 ;
-(int)getValue:(id*)arg1 forKey:(int)arg2 handlerType:(int)arg3 trusted:(BOOL)arg4 ;
-(int)getValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 handlerType:(int)arg4 trusted:(BOOL)arg5 ;
-(int)performActionForKey:(int)arg1 handlerType:(int)arg2 trusted:(BOOL)arg3 ;
@end

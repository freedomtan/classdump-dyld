/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSString, NSTimer;

@interface EAUnregisteredClient : NSObject {

	int _processId;
	NSString* _bundleId;
	SBSProcessAssertionRef _processAssertion;
	long _processAssertionStartTime;
	NSTimer* _processAssertionTimer;

}

@property (nonatomic,readonly) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
-(void)releaseProcessAssertion;
-(void)takeProcessAssertion:(id)arg1 ;
-(int)_getProcessIdForUnregisteredClient;
-(id)initWithBundleId:(id)arg1 ;
-(id)bundleId;
-(void)dealloc;
@end

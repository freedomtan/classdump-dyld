/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSURLRequestProperties.h>

@class NSString, NSData, NSURL, NSArray, NSDictionary, NSInputStream;

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property (@dynamic) int allowedRetryCount; 
@property (@dynamic) unsigned cachePolicy; 
@property (@dynamic,copy) NSString * clientIdentifier; 
@property (@dynamic) long long expectedContentLength; 
@property (@dynamic,copy) NSData * HTTPBody; 
@property (@dynamic,copy) NSString * HTTPMethod; 
@property (getter=isITunesStoreRequest,@dynamic) BOOL ITunesStoreRequest; 
@property (@dynamic) unsigned networkServiceType; 
@property (@dynamic) double timeoutInterval; 
@property (@dynamic,copy) NSString * URLBagKey; 
@property (@dynamic,retain) NSURL * URL; 
@property (@dynamic,copy) NSArray * userAgentComponents; 
@property (@dynamic,copy) NSDictionary * HTTPHeaders; 
@property (@dynamic,copy) NSDictionary * requestParameters; 
@property (@dynamic,copy) NSString * clientAuditBundleIdentifier; 
@property (@dynamic,copy) NSData * clientAuditTokenData; 
@property (@dynamic,retain) NSInputStream * HTTPBodyStream; 
@property (getter=isLargeDownload,@dynamic) BOOL largeDownload; 
@property (@dynamic) BOOL requiresExtendedValidationCertificates; 
@property (@dynamic) BOOL shouldAddKBSyncData; 
@property (@dynamic) BOOL shouldDecodeResponse; 
@property (@dynamic) BOOL shouldDisableCellular; 
@property (@dynamic) BOOL shouldDisableCellularFallback; 
@property (@dynamic) BOOL shouldProcessProtocol; 
@property (@dynamic) BOOL shouldSendSecureToken; 
@property (@dynamic) BOOL shouldSetCookies; 
@property (@dynamic) int URLBagType; 
@property (@dynamic,copy) id URLBagURLBlock; 
@property (@dynamic,copy) NSArray * URLs; 
+(id)newForRadioRequestURL:(id)arg1 ;
-(void)radio_mescalSignWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setNetworkServiceType:(unsigned)arg1 ;
-(void)setCachePolicy:(unsigned)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPMethod:(id)arg1 ;
-(void)setHTTPBody:(id)arg1 ;
-(void)setHTTPBodyStream:(id)arg1 ;
-(void)setITunesStoreRequest:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)setURLBagKey:(id)arg1 ;
-(void)setShouldProcessProtocol:(BOOL)arg1 ;
-(void)setShouldAddKBSyncData:(BOOL)arg1 ;
-(void)setRequestParameters:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)setURLs:(id)arg1 ;
-(void)setShouldSendSecureToken:(BOOL)arg1 ;
-(void)setHTTPHeaders:(id)arg1 ;
-(void)setExpectedContentLength:(long long)arg1 ;
-(void)setUserAgentComponents:(id)arg1 ;
-(void)setShouldDisableCellular:(BOOL)arg1 ;
-(void)setShouldDisableCellularFallback:(BOOL)arg1 ;
-(void)setLargeDownload:(BOOL)arg1 ;
-(void)setMultiPartFormDataWithDictionary:(id)arg1 ;
-(void)setRequiresExtendedValidationCertificates:(BOOL)arg1 ;
-(void)setShouldDecodeResponse:(BOOL)arg1 ;
-(void)setShouldSetCookies:(BOOL)arg1 ;
-(void)setClientAuditBundleIdentifier:(id)arg1 ;
-(void)setClientAuditTokenData:(id)arg1 ;
-(void)setURLBagURLBlock:(/*^block*/ id)arg1 ;
-(void)setClientIdentifier:(id)arg1 ;
-(void)setURLBagType:(int)arg1 ;
-(void)setAllowedRetryCount:(int)arg1 ;
@end

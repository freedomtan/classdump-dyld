/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, TSKWarning;

@interface TSWPCharacterStyleValidateFontResult : NSObject {

	NSString* _mappedName;
	int _bold;
	int _italic;
	TSKWarning* _warning;

}

@property (nonatomic,retain) NSString * mappedName;              //@synthesize mappedName=_mappedName - In the implementation block
@property (nonatomic,retain) TSKWarning * warning;               //@synthesize warning=_warning - In the implementation block
@property (assign,nonatomic) int bold;                           //@synthesize bold=_bold - In the implementation block
@property (assign,nonatomic) int italic;                         //@synthesize italic=_italic - In the implementation block
-(id)mappedName;
-(void)setMappedName:(id)arg1 ;
-(void)dealloc;
-(void)setWarning:(id)arg1 ;
-(int)bold;
-(int)italic;
-(void)setBold:(int)arg1 ;
-(void)setItalic:(int)arg1 ;
-(id)warning;
@end

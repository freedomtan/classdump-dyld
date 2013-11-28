/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface RUBrowseGenresDataSource : NSObject {

	NSDictionary* _parentNodeDictionary;
	unsigned long long _parentNodeID;

}

@property (nonatomic,readonly) unsigned long long parentNodeID;              //@synthesize parentNodeID=_parentNodeID - In the implementation block
-(id)init;
-(id)initWithParentNodeID:(unsigned long long)arg1 ;
-(id)initWithParentNodeID:(unsigned long long)arg1 parentNodeDictionary:(id)arg2 ;
-(id)_genresFromGenreTreeResponse:(id)arg1 ;
-(void)reloadGenresWithCompletionHandler:(/*^block*/ id)arg1 ;
-(unsigned long long)parentNodeID;
-(void).cxx_destruct;
@end

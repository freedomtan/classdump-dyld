/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertySimpleCell.h>

@interface ABPropertyEmailAddressCell : ABPropertySimpleCell {

	BOOL _VIP;

}

@property (assign,getter=isVIP,nonatomic) BOOL VIP;              //@synthesize VIP=_VIP - In the implementation block
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)setVIP:(BOOL)arg1 ;
-(void)_updateStar;
-(void)updateTransportButtons;
-(BOOL)isVIP;
-(BOOL)shouldPerformDefaultAction;
@end

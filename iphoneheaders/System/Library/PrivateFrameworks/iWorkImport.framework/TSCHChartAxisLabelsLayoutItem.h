/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem {

	unsigned mStride;
	float mAngleInDegrees;
	float mAngleInRadians;

}

@property (nonatomic,readonly) unsigned stride; 
-(void)clearAll;
-(CGRect)calcDrawingRect;
-(id)mutationTuplesToApplyDuringResize;
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned)arg2 ;
-(id)axisLayoutItem;
-(unsigned)numberOfLabelsForAxis:(id)arg1 ;
-(unsigned)selectionPathLabelIndexForIndex:(unsigned)arg1 axis:(id)arg2 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned)arg2 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned)arg1 range:(NSRange)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(CGAffineTransform)transformForRenderingLabel:(unsigned)arg1 usingString:(id)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 useAngle:(BOOL)arg5 ;
-(id)labelsLayoutItem;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)calcOverhangRect;
-(CGSize)calcMinSize;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/ id)arg2 ;
-(BOOL)showLabelsForAxis:(id)arg1 ;
-(unsigned)strideInLayoutArea:(CGRect)arg1 ;
-(id)selectionPathLabelType;
-(CGPoint)axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(CGRect)arg3 unrotatedSize:(CGSize)arg4 unitSpaceValue:(double)arg5 ;
-(CGPoint)labelAnchorForPosition:(int)arg1 degrees:(float)arg2 ;
-(CGRect)layoutSpaceRectForAllLabels;
-(CGAffineTransform)p_transformForRenderingLabel:(unsigned)arg1 range:(NSRange*)arg2 inLayoutArea:(CGRect)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 usingString:(id)arg6 stride:(unsigned*)arg7 useAngle:(BOOL)arg8 ;
-(unsigned)p_computeAutoStrideInLayoutArea:(CGRect)arg1 ;
-(void)p_rect:(CGRect*)arg1 andTransform:(CGAffineTransform*)arg2 inLayoutArea:(CGRect)arg3 forIndex:(unsigned)arg4 paragraphStyle:(id)arg5 ;
-(int)p_smallestSecondValueLabelIndex:(int)arg1 start:(int)arg2 end:(int)arg3 inLayoutArea:(CGRect)arg4 paragraphStyle:(id)arg5 isTop:(BOOL)arg6 ;
-(int)p_smallestSecondValueLabelIndex:(int)arg1 start:(int)arg2 end:(int)arg3 inLayoutArea:(CGRect)arg4 paragraphStyle:(id)arg5 ;
-(id)p_axisFromLayoutItem;
-(id)p_overrideLabelStringForHitTestingEmptyLabel;
-(unsigned)stride;
-(void)setLayoutSize:(CGSize)arg1 ;
@end

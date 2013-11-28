/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLBindable.h>

@interface TSCH3DGLESRTT : NSObject <TSCH3DGLBindable> {

	unsigned mTexture;

}
+(BOOL)isTexturable;
+(id)colorbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
+(id)depthbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
+(id)bufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 internalFormat:(unsigned)arg2 format:(unsigned)arg3 attachment:(unsigned)arg4 ;
+(BOOL)isEqual:(id)arg1 ;
-(void)destroyResourcesInContext:(id)arg1 ;
-(void)deactivateInContext:(id)arg1 ;
-(void)bindInSession:(id)arg1 ;
-(id)initWithGLTexture:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)valid;
@end

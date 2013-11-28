/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, NSDictionary, NSString;

@interface TSDGLFrameBuffer : NSObject {

	NSArray* _textureConfigs;
	NSDictionary* _namesToTextureDict;
	unsigned* _textures[16];
	unsigned _textureCount[16];
	unsigned _currentTextureIndex[16];
	unsigned _desiredTextureIndex[16];
	unsigned _framebuffer;
	BOOL _isUsingNonDefaultAttachments;
	BOOL _isBound;
	BOOL _shouldDeleteTexturesOnTeardown;
	NSString* _name;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isBound;                                   //@synthesize isBound=_isBound - In the implementation block
@property (assign,nonatomic) BOOL shouldDeleteTexturesOnTeardown;              //@synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(void)setCurrentGLFramebuffer:(int)arg1 ;
+(int)currentGLFramebuffer;
-(id)initWithSize:(CGSize)arg1 textureConfigs:(id)arg2 ;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)setCurrentTextureIndex:(unsigned)arg1 ;
-(void)bindFramebuffer;
-(void)setCurrentTextureNamed:(id)arg1 ;
-(unsigned)currentGLTexture;
-(unsigned)GLTextureNamed:(id)arg1 ;
-(void)setupFramebufferIfNecessary;
-(id)initWithSize:(CGSize)arg1 textureCount:(unsigned)arg2 ;
-(void)setCurrentTextureIndex:(unsigned)arg1 atAttachment:(unsigned)arg2 ;
-(void)setCurrentTextureToNextAtAttachment:(unsigned)arg1 ;
-(unsigned)GLTextureAtIndex:(unsigned)arg1 attachment:(unsigned)arg2 ;
-(unsigned)currentGLTextureAtAttachment:(unsigned)arg1 ;
-(void)setCurrentTextureToNext;
-(unsigned)GLTextureAtIndex:(unsigned)arg1 ;
-(BOOL)shouldDeleteTexturesOnTeardown;
-(void)setShouldDeleteTexturesOnTeardown:(BOOL)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithSize:(CGSize)arg1 ;
-(BOOL)isBound;
-(void)teardown;
@end

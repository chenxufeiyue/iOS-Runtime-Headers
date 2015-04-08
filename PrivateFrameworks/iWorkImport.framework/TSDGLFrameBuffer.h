/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface TSDGLFrameBuffer : NSObject {
    int _currentBindingOption;
    int _currentDrawBufferCount;
    unsigned int _currentDrawBuffers[1];
    unsigned int _currentReadBuffer;
    NSMutableArray *_currentTextureLookupInfoByAttachment;
    NSMutableArray *_desiredTextureLookupInfoByAttachment;
    unsigned int _framebuffer;
    BOOL _isBound;
    BOOL _isUsingNonDefaultAttachments;
    NSString *_name;
    NSDictionary *_namesToTextureDict;
    BOOL _shouldDeleteTexturesOnTeardown;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    NSArray *_textureConfigs;
    NSArray *_textureConfigsByAttachment;
    NSArray *_textureLookupInfosByAttachment;
}

@property(readonly) unsigned int currentGLTexture;
@property(readonly) NSString * currentGLTextureName;
@property(readonly) BOOL isBound;
@property(copy) NSString * name;
@property BOOL shouldDeleteTexturesOnTeardown;
@property(readonly) struct CGSize { float x1; float x2; } size;

+ (int)currentGLFramebuffer;
+ (int)currentGLFramebufferWithBindingOption:(int)arg1;
+ (void)setCurrentGLFramebuffer:(int)arg1;
+ (void)setCurrentGLFramebuffer:(int)arg1 withBindingOption:(int)arg2;

- (unsigned int)GLTextureAtIndex:(unsigned int)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned int)arg1 attachment:(unsigned int)arg2;
- (unsigned int)GLTextureNamed:(id)arg1;
- (void)bindFramebuffer;
- (void)bindFramebufferWithBindingOption:(int)arg1;
- (unsigned int)currentGLTexture;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (id)currentGLTextureName;
- (int)currentTextureIndexAtAttachment:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 textureConfigs:(id)arg2;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 textureCount:(unsigned int)arg2;
- (BOOL)isBound;
- (id)name;
- (id)p_currentTextureLookupInfoAtAttachment:(unsigned int)arg1;
- (BOOL)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned int*)arg1 count:(int)arg2;
- (void)p_setDrawBuffersAndReadBuffer;
- (void)p_setFramebufferTextureAtAttachmentIndex:(int)arg1 bindingOption:(int)arg2;
- (void)setCurrentTextureIndex:(unsigned int)arg1;
- (void)setCurrentTextureIndex:(unsigned int)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureNamed:(id)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (void)setCurrentTexturesToNext;
- (void)setName:(id)arg1;
- (void)setShouldDeleteTexturesOnTeardown:(BOOL)arg1;
- (void)setupFramebufferIfNecessary;
- (BOOL)shouldDeleteTexturesOnTeardown;
- (struct CGSize { float x1; float x2; })size;
- (struct CGSize { float x1; float x2; })sizeOfGLTextureNamed:(id)arg1;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 withBindingOption:(int)arg2;

@end
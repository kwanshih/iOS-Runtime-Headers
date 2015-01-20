/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DFullComponent16AdditionShaderEffect, TSCH3DGLFramebuffer;

@interface TSCH3DFullComponent16AccumulatePipeline : TSCH3DComponent16AccumulatePipeline {
    TSCH3DFullComponent16AdditionShaderEffect *mAdd;
    TSCH3DGLFramebuffer *mBuffer;
}

@property(retain) TSCH3DGLFramebuffer * buffer;

- (void)allocateFramebuffersWithSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (id)buffer;
- (id)bufferFBOResource;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;
- (void)runAccumulation;
- (void)setBuffer:(id)arg1;

@end
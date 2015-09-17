/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSKernel : NSObject <NSCopying> {
    unsigned int _allowedOptions;
    <MTLDevice> *_device;
    int _gpuType;
    NSString *_label;
    unsigned int _options;
}

@property (nonatomic, readonly, retain) <MTLDevice> *device;
@property (copy) NSString *label;
@property (nonatomic) unsigned int options;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (id)label;
- (unsigned int)options;
- (void)setLabel:(id)arg1;
- (void)setOptions:(unsigned int)arg1;

@end
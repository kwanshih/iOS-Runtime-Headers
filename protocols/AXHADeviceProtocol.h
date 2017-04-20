/* Generated by RuntimeBrowser.
 */

@protocol AXHADeviceProtocol <NSObject>

@required

- (int)availableEars;
- (void)connect;
- (BOOL)containsPeripheralWithUUID:(NSString *)arg1;
- (NSString *)deviceUUID;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (void)disconnectAndUnpair:(BOOL)arg1;
- (BOOL)hasConnection;
- (id)initWithPersistentRepresentation:(NSDictionary *)arg1;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isPaired;
- (BOOL)keepInSync;
- (BOOL)leftAvailable;
- (BOOL)leftBass;
- (float)leftBatteryLevel;
- (NSDate *)leftBatteryLowDate;
- (NSString *)leftFirmwareVersion;
- (NSString *)leftHardwareVersion;
- (float)leftMicrophoneVolume;
- (short)leftMicrophoneVolumeSteps;
- (float)leftMixedVolume;
- (short)leftMixedVolumeSteps;
- (NSString *)leftPeripheralUUID;
- (NSArray *)leftPrograms;
- (AXHearingAidMode *)leftSelectedProgram;
- (AXHearingAidMode *)leftSelectedStreamingProgram;
- (float)leftSensitivity;
- (short)leftSensitivitySteps;
- (float)leftStreamVolume;
- (short)leftStreamVolumeSteps;
- (BOOL)leftTreble;
- (NSString *)leftUUID;
- (void)loadRequiredProperties;
- (NSMutableArray *)manufacturer;
- (NSMutableArray *)model;
- (NSString *)name;
- (NSArray *)programs;
- (BOOL)rightAvailable;
- (BOOL)rightBass;
- (float)rightBatteryLevel;
- (NSDate *)rightBatteryLowDate;
- (NSString *)rightFirmwareVersion;
- (NSString *)rightHardwareVersion;
- (float)rightMicrophoneVolume;
- (short)rightMicrophoneVolumeSteps;
- (float)rightMixedVolume;
- (short)rightMixedVolumeSteps;
- (NSString *)rightPeripheralUUID;
- (NSArray *)rightPrograms;
- (AXHearingAidMode *)rightSelectedProgram;
- (AXHearingAidMode *)rightSelectedStreamingProgram;
- (float)rightSensitivity;
- (short)rightSensitivitySteps;
- (float)rightStreamVolume;
- (short)rightStreamVolumeSteps;
- (BOOL)rightTreble;
- (NSString *)rightUUID;
- (void)selectProgram:(AXHearingAidMode *)arg1 forEar:(int)arg2;
- (NSIndexSet *)selectedProgramIndexes;
- (NSArray *)selectedPrograms;
- (void)setAvailableEars:(int)arg1;
- (void)setKeepInSync:(BOOL)arg1;
- (void)setLeftBass:(BOOL)arg1;
- (void)setLeftMicrophoneVolume:(float)arg1;
- (void)setLeftMixedVolume:(float)arg1;
- (void)setLeftSensitivity:(float)arg1;
- (void)setLeftStreamVolume:(float)arg1;
- (void)setLeftTreble:(BOOL)arg1;
- (void)setRightBass:(BOOL)arg1;
- (void)setRightMicrophoneVolume:(float)arg1;
- (void)setRightMixedVolume:(float)arg1;
- (void)setRightSensitivity:(float)arg1;
- (void)setRightStreamVolume:(float)arg1;
- (void)setRightTreble:(BOOL)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (BOOL)supportsBinauralStreaming;
- (BOOL)supportsCombinedPresets;
- (BOOL)supportsCombinedVolumes;
- (id)valueForProperty:(unsigned long long)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitAchievement : PBCodable <NSCopying> {
    int  _achievementType;
    long long  _completedDate;
    NSString * _definitionIdentifier;
    struct { 
        unsigned int completedDate : 1; 
        unsigned int value : 1; 
        unsigned int achievementType : 1; 
        unsigned int workoutActivityType : 1; 
    }  _has;
    long long  _value;
    int  _workoutActivityType;
}

@property (nonatomic) int achievementType;
@property (nonatomic) long long completedDate;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (nonatomic) BOOL hasAchievementType;
@property (nonatomic) BOOL hasCompletedDate;
@property (nonatomic, readonly) BOOL hasDefinitionIdentifier;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) long long value;
@property (nonatomic) int workoutActivityType;

- (void).cxx_destruct;
- (int)StringAsAchievementType:(id)arg1;
- (int)StringAsWorkoutActivityType:(id)arg1;
- (int)achievementType;
- (id)achievementTypeAsString:(int)arg1;
- (long long)completedDate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)definitionIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAchievementType;
- (BOOL)hasCompletedDate;
- (BOOL)hasDefinitionIdentifier;
- (BOOL)hasValue;
- (BOOL)hasWorkoutActivityType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAchievementType:(int)arg1;
- (void)setCompletedDate:(long long)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setHasAchievementType:(BOOL)arg1;
- (void)setHasCompletedDate:(BOOL)arg1;
- (void)setHasValue:(BOOL)arg1;
- (void)setHasWorkoutActivityType:(BOOL)arg1;
- (void)setValue:(long long)arg1;
- (void)setWorkoutActivityType:(int)arg1;
- (long long)value;
- (int)workoutActivityType;
- (id)workoutActivityTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

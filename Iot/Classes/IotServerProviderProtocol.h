//
//  IotServerProviderProtocol.h
//  SpeedTest
//
//  Created by Dmtech on 19.03.18.
//  Copyright © 2018 Dmtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^IotServerProviderProtocolSimpleCompletionHandler) (BOOL result);
typedef void (^IotServerProviderProtocolObjectsCompletionHandler) (NSArray<MTLModel *> *objects);

@protocol IotServerProviderProtocol<NSObject>

-(void)turnOnPowerBulbWithBulbId:(NSString *)bulbID withCompletion:(IotServerProviderProtocolSimpleCompletionHandler)completion;
-(void)turnOffPowerBulbWithBulbId:(NSString *)bulbID withCompletion:(IotServerProviderProtocolSimpleCompletionHandler)completion;
-(void)changeColorOfBulbWithBulbId:(NSString *)bulbID color:(UIColor *)color withCompletion:(IotServerProviderProtocolSimpleCompletionHandler)completion;
-(void)returnDefaultStateOfBulbWithId:(NSString *)bulbID withCompletion:(IotServerProviderProtocolSimpleCompletionHandler)completion;
-(void)turnOnNightStateOfBulbWithBulbId:(NSString *)bulbID withCompletion:(IotServerProviderProtocolSimpleCompletionHandler)completion;
-(void)turnOffNightStateOfBulbWithBulbId:(NSString *)bulbID withCompletion:(IotServerProviderProtocolSimpleCompletionHandler)completion;
-(void)getInfoOfBulbWithBulbId:(NSString *)bulbID withCompletionHandler:(IotServerProviderProtocolObjectsCompletionHandler)handler;

-(void)getAllDevicesWithCompletionHandler:(IotServerProviderProtocolObjectsCompletionHandler)handler;
-(void)getXDKdeviceWithID:(NSString *)deviceID withCompletion:(IotServerProviderProtocolObjectsCompletionHandler)completion;
-(void)getConversationAnswerForQuestion:(NSString *)question withCompletion:(IotServerProviderProtocolObjectsCompletionHandler)completion;

@end

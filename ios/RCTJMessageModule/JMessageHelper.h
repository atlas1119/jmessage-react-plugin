//
//  JMessageHelper.h
//  RCTJMessageModule
//
//  Created by oshumini on 2017/8/16.
//  Copyright © 2017年 HXHG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMessage/JMessage.h>

#define kJJMessageReceiveMessage     @"kJJMessageReceiveMessage"
#define kJJMessageSendMessageRespone @"kJJMessageSendMessageRespone"

//Conversation 回调
#define kJJMessageConversationChanged @"kJJMessageConversationChanged"
#define kJJMessageUnreadChanged       @"kJJMessageUnreadChanged"

//离线消息
#define kJJMessageSyncOfflineMessage @"kJJMessageSyncOfflineMessage"

// 漫游消息同步

#define kJJMessageSyncRoamingMessage @"kJJMessageSyncRoamingMessage"

//Group 回调
#define kJJMessageGroupInfoChanged @"kJJMessageGroupInfoChanged"

//User 回调
#define kJJMessageLoginUserKicked  @"kJJMessageLoginUserKicked"
#define kJJMessageLoginStateChanged  @"kJJMessageLoginStateChanged"
#define kJJMessageContactNotify  @"kJJMessageContactNotify"
#define kJJMessageRetractMessage  @"kJJMessageretractMessage"

@interface JMessageHelper : NSObject<JMessageDelegate>
@property(nonatomic, strong)NSString *JMessageAppKey;
@property(strong,nonatomic)NSDictionary *launchOptions;
+ (JMessageHelper *)shareInstance;

-(void)initJMessage:(NSDictionary*)launchOptions;

@end



@interface NSDictionary (JMessage)
-(NSString*)toJsonString;
@end

@interface NSString (JMessage)
-(NSDictionary*)toDictionary;
@end

@interface JMSGConversation (JMessage)
-(NSMutableDictionary*)conversationToDictionary;
@end

@interface JMSGUser (JMessage)
-(NSMutableDictionary*)userToDictionary;
@end

@interface JMSGGroup (JMessage)
-(NSMutableDictionary*)groupToDictionary;
@end

@interface JMSGMessage (JMessage)
- (NSMutableDictionary *)messageToDictionary;
@end

@interface NSError (JMessage)
- (NSDictionary *)errorToDictionary;
@end

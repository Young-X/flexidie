/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
// */
//
//#import <XXUnknownSuperclass.h> // Unknown library
//#import "UIApplicationDelegate.h"
//#import "LINE for iPad-Structs.h"

@class PasscodeViewController, NSString, NLiPadChatSplitViewController, UITabBarController, NLiPadSettingViewController, NLiPadFriendViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface NLiPadAppDelegate : NSObject { //XXUnknownSuperclass <UIApplicationDelegate> {
	BOOL _checkedRegistrationState;
	BOOL _isLocked;
	UIWindow* _window;
	UITabBarController* _tabBarController;
	NSString* _openChatMID;
	int _applicationState;
	NLiPadFriendViewController* _friendViewController;
	NLiPadChatSplitViewController* _chatViewController;
	NLiPadSettingViewController* _settingViewController;
	int _unreadMessageCount;
	UIWindow* _passcodeWindow;
	PasscodeViewController* _passcodeViewController;
	NSString* _temporaryResourceUrl;
	NSString* _temporarySourceApplication;
}
@property(retain, nonatomic) NSString* temporarySourceApplication;
@property(retain, nonatomic) NSString* temporaryResourceUrl;
@property(retain, nonatomic) PasscodeViewController* passcodeViewController;
@property(retain, nonatomic) UIWindow* passcodeWindow;
@property(assign, nonatomic) int unreadMessageCount;
@property(retain, nonatomic) NLiPadSettingViewController* settingViewController;
@property(retain, nonatomic) NLiPadChatSplitViewController* chatViewController;
@property(retain, nonatomic) NLiPadFriendViewController* friendViewController;
@property(assign) int applicationState;
@property(retain) NSString* openChatMID;
@property(assign, nonatomic) BOOL isLocked;
@property(retain, nonatomic) UITabBarController* tabBarController;
@property(retain, nonatomic) UIWindow* window;
+(id)badgeValueForUnreadMessageCount:(int)unreadMessageCount;
+(id)sharedAppDelegate;
//-(void).cxx_destruct;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification fetchCompletionHandler:(id)handler;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification;
-(void)application:(id)application didReceiveLocalNotification:(id)notification;
-(void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;
-(void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
-(void)syncAppBadge;
-(void)updateBadgeOnChatsTab:(int)tab;
-(void)updateBadgeOnChatsTabWithNotification:(id)notification;
-(void)setupChatTabBadge;
-(void)needUpdateChatDisplayName;
-(id)selectSettingTab;
-(id)selectChatListTab;
-(id)selectFriendListTab;
-(void)openChatWithMID:(id)mid type:(int)type beforeSave:(id)save beforeOpen:(id)open;
-(id)targetSelectorViewControllerWithItem:(id)item;
-(void)showSharingTargetSelectorViewWithItem:(id)item;
-(void)openURL:(id)url baseViewController:(id)controller;
-(void)openURL:(id)url;
-(id)currentVisibleViewController;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(BOOL)needDismissWithLocKey:(id)locKey;
-(void)passcodeViewControllerUnlocked:(id)unlocked;
-(void)discardPasscodeView;
-(void)preparePasscodeView;
-(void)dismissPasscodeLock;
-(void)updatePasscodeImage:(id)image;
-(void)showPasscodeLock;
-(void)applicationProtectedDataDidBecomeAvailable:(id)applicationProtectedData;
-(void)applicationProtectedDataWillBecomeUnavailable:(id)applicationProtectedData;
-(void)dismissIfExistModalViewController;
-(void)dismissAlertViewIfExists;
-(void)dismissActionSheetIfExists;
-(void)dismissNotificationCenterPopupIfExists;
-(void)closeAllWindowsIfExists;
-(void)closeAllPopupsIfExists;
-(void)processRemoteNotification:(id)notification fetchCompletionHandler:(id)handler;
-(void)processRemoteNotification:(id)notification;
-(BOOL)needToMoveChatRoomWithLocKey:(id)locKey;
-(BOOL)checkRegistrationState:(unsigned)state;
-(void)startLineModule;
-(void)initializeLineApplication:(id)application withOptions:(id)options;
-(void)launchForLoginState;
-(void)initializeEmojiComponents;
-(void)launchMainTabBarController;
-(id)viewFromRootViewController;
-(void)clearRootViewController;
-(void)setRootViewController:(id)controller;
-(void)applicationWillTerminate:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillResignActive:(id)application;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Prefs : NSObject
{
}

+ (BOOL)playVideosInline;
+ (id)nowPlayingFormatString;
+ (void)setSaveConversationsOnClose:(BOOL)arg1;
+ (BOOL)saveConversationsOnClose;
+ (void)setShowAllBuddyPictures:(BOOL)arg1;
+ (BOOL)showAllBuddyPictures;
+ (void)setNotifyAboutKnockKnock:(BOOL)arg1;
+ (BOOL)notifyAboutKnockKnock;
+ (void)setMenuExtraCanBeVisible:(BOOL)arg1;
+ (BOOL)menuExtraCanBeVisible;
+ (int)setMenuExtraIsVisible:(BOOL)arg1;
+ (BOOL)menuExtraIsVisible;
+ (void)setUseUnifiedBuddyList:(BOOL)arg1;
+ (BOOL)useUnifiedBuddyList;
+ (id)existingDownloadPath;
+ (id)downloadPath;
+ (void)setDownloadURL:(id)arg1;
+ (id)downloadURL;
+ (id)setDownloadsFolderToDefault;
+ (void)setSavedChatPath:(id)arg1;
+ (id)savedChatPath;
+ (BOOL)useBestRecipient;
+ (void)setShowTabBar:(BOOL)arg1;
+ (BOOL)showTabBar;
+ (void)setShowRecipientBar:(BOOL)arg1;
+ (BOOL)showRecipientBar;
+ (void)setAddressMeInGroupchat:(BOOL)arg1;
+ (BOOL)addressMeInGroupchat;
+ (void)purgeChatRoomPrefs;
+ (void)removeGoToChatPrefsForRoom:(id)arg1 accountID:(id)arg2;
+ (void)_updateLastUsedDateForRoom:(id)arg1 account:(id)arg2;
+ (void)removeBookmarkForRoom:(id)arg1 account:(id)arg2;
+ (void)addBookmarkForRoom:(id)arg1 account:(id)arg2;
+ (void)removeBookmarkAtIndex:(long long)arg1;
+ (id)chatBookmarksForAccountID:(id)arg1;
+ (BOOL)_hasBookmarkForRoom:(id)arg1 account:(id)arg2;
+ (void)_setChatBookmarks:(id)arg1;
+ (id)chatBookmarks;
+ (void)setAnimateBuddyIcons:(BOOL)arg1;
+ (BOOL)animateBuddyIcons;
+ (void)setUseSingleStatus:(BOOL)arg1;
+ (BOOL)useSingleStatus;
+ (void)setFileTransferManagerShouldBeVisible:(BOOL)arg1;
+ (BOOL)fileTransferManagerShouldBeVisible;
+ (void)setShowMyLoginIdInBuddyList:(BOOL)arg1;
+ (BOOL)showMyLoginIdInBuddyList;
+ (void)setKnockKnock:(BOOL)arg1;
+ (BOOL)knockKnock;
+ (void)setNumberOfCustomMessagesToRemember:(long long)arg1;
+ (long long)numberOfCustomMessagesToRemember;
+ (void)setUsingABPicture:(BOOL)arg1;
+ (BOOL)usingABPicture;
+ (void)setFastUserSwitchAction:(int)arg1;
+ (int)fastUserSwitchAction;
+ (void)setAccountsToLogInAtLaunch:(id)arg1;
+ (id)accountsToLogInAtLaunch;
+ (void)setOfflineOnQuit:(BOOL)arg1;
+ (BOOL)offlineOnQuit;
+ (void)updateSuddenTerminationForOfflineOnQuit;
+ (void)setUbiquitoustring:(id)arg1 forKey:(id)arg2;
+ (void)setUbiquitousArray:(id)arg1 forKey:(id)arg2;
+ (void)setUbiquitousFloat:(double)arg1 forKey:(id)arg2;
+ (void)setUbiquitousInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setUbiquitousBool:(BOOL)arg1 forKey:(id)arg2;
+ (void)setUbiquitousObject:(id)arg1 forKey:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
+ (void)setFloat:(double)arg1 forKey:(id)arg2;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setArray:(id)arg1 forKey:(id)arg2;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
+ (id)objectForKey:(id)arg1;
+ (id)arrayForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
+ (float)floatForKey:(id)arg1 defaultValue:(double)arg2;
+ (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
+ (void)clearPreferenceForKey:(id)arg1;
+ (void)copyPreference:(id)arg1 toKey:(id)arg2;
+ (id)sharedInstance;
- (void)stopListeningForICloudChanges;
- (void)startListeningForICloudChanges;
- (void)iCloudPrefsUpdated:(id)arg1;
- (void)dealloc;
- (id)init;

@end


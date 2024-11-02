// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADSMANAGER_H
#define DOWNLOADSMANAGER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "JGProgressHUD.h"
#import "AFHTTPSessionManager.h"
#import "ExecuteDelegate-Protocol.h"

@interface DownloadsManager : NSObject <ExecuteDelegate>

 {
    JGProgressHUD *HUD;
    NSMutableDictionary *ffmpegExecutions;
}


@property (retain, nonatomic) NSMutableArray *downloadItemsArray; // ivar: _downloadItemsArray
@property (retain, nonatomic) AFHTTPSessionManager *sessionManager; // ivar: _sessionManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)dealloc;
-(void)setupURLSessionConfiguration;
-(id)topViewController;
-(void)tapticFeedback;
-(BOOL)fileExist:(id)arg0 ;
-(void)sendPushWithTitle:(id)arg0 body:(id)arg1 ;
-(void)localPushWithTitle:(id)arg0 body:(id)arg1 ;
-(void)loadingHUDWithMeessage:(id)arg0 inView:(id)arg1 ;
-(void)downloadingHUDWithMeessage:(id)arg0 inView:(id)arg1 ;
-(void)successHUDWithMeessage:(id)arg0 inView:(id)arg1 ;
-(void)errorHUDWithMeessage:(id)arg0 inView:(id)arg1 delay:(float)arg2 ;
-(void)dismissHUD;
-(void)showHUDMessageWithText:(id)arg0 ;
-(void)getLinksLocallyPlayerItem:(id)arg0 videoID:(id)arg1 sourceView:(id)arg2 isShorts:(BOOL)arg3 ;
-(void)exportVideoToCameraRollWithPath:(id)arg0 removeFile:(BOOL)arg1 ;
-(void)video:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(*void)arg2 ;
-(void)mergeAudioWithMP4VideoForDownloadItem:(id)arg0 ;
-(void)addMetadataToAudioForDownloadItem:(id)arg0 ;
-(int)convertVideo:(id)arg0 toAudio:(id)arg1 ;
-(void)mergeAudioWithVideoForDownloadItem:(id)arg0 ;
-(void)convertAsyncMkvToMp4:(id)arg0 forXYouItem:(id)arg1 ;
-(int)ffmpegWithArguments:(id)arg0 ;
-(void)executeCallback:(NSInteger)arg0 ;
-(void)statisticsCallback:(id)arg0 ;
-(id)downloadItemForIdentifier:(id)arg0 ;
-(void)startDownloadWithRequestItem:(id)arg0 info:(id)arg1 ;
-(void)startDownloadWithDownloadItem:(id)arg0 ;
-(void)pauseDownloadWithDownloadIdentifier:(id)arg0 ;
-(void)pauseDownloadWithXYouItem:(id)arg0 ;
-(void)resumeDownloadWithDownloadIdentifier:(id)arg0 ;
-(void)cancelDownloadWithDownloadIdentifier:(id)arg0 ;
-(void)cancelDownloadWithXYouItem:(id)arg0 ;
-(void)prepareForTermination;
-(void)deleteDownloadItem:(id)arg0 ;
-(void)deleteXYouItem:(id)arg0 ;
-(void)setDownloadingItems;
-(id)getDownloadingItems;
-(void)clearDownloading;
-(void)clearDownloaded;
-(id)openDatabase;
-(void)migrateToSQL;
+(id)sharedInstance;


@end


#endif
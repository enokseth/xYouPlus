// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADITEM_H
#define DOWNLOADITEM_H

@class NSURLSessionDownloadTask;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "xYouItem.h"
#import "NSCoding-Protocol.h"

@interface DownloadItem : NSObject <NSCoding>



@property (retain, nonatomic) NSString *downloadIdentifier; // ivar: _downloadIdentifier
@property (retain, nonatomic) NSString *videoID; // ivar: _videoID
@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (retain, nonatomic) NSString *cachedPath; // ivar: _cachedPath
@property (retain, nonatomic) NSURL *remoteURL; // ivar: _remoteURL
@property (retain, nonatomic) xYouItem *xYouItem; // ivar: _xYouItem
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // ivar: _downloadTask
@property (retain, nonatomic) NSDate *downloadStartDate; // ivar: _downloadStartDate
@property (nonatomic) NSUInteger status; // ivar: _status
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) float progress; // ivar: _progress
@property (retain, nonatomic) NSString *totalSize; // ivar: _totalSize
@property (retain, nonatomic) NSString *downloadedSize; // ivar: _downloadedSize
@property (retain, nonatomic) NSString *speed; // ivar: _speed
@property (nonatomic) int remainingTime; // ivar: _remainingTime


-(id)initWithVideoID:(id)arg0 xYouItem:(id)arg1 downloadID:(id)arg2 url:(id)arg3 filePath:(id)arg4 cachedPath:(id)arg5 type:(int)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)createDownloadTask;
-(void)resumeDownloadTask;
-(void)cancelDownloadTask;
-(void)updateProgress;
-(void)appWillEnterForeground:(id)arg0 ;
-(id)description;


@end


#endif
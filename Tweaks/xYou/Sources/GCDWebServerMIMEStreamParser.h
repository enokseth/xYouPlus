// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERMIMESTREAMPARSER_H
#define GCDWEBSERVERMIMESTREAMPARSER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "GCDWebServerMIMEStreamParser.h"

@interface GCDWebServerMIMEStreamParser : NSObject {
    NSData *_boundary;
    NSString *_defaultcontrolName;
    int _state;
    NSMutableData *_data;
    NSMutableArray *_arguments;
    NSMutableArray *_files;
    NSString *_controlName;
    NSString *_fileName;
    NSString *_contentType;
    NSString *_tmpPath;
    int _tmpFile;
    GCDWebServerMIMEStreamParser *_subParser;
}




-(id)initWithBoundary:(id)arg0 defaultControlName:(id)arg1 arguments:(id)arg2 files:(id)arg3 ;
-(void)dealloc;
-(BOOL)_parseData;
-(BOOL)appendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(BOOL)isAtEnd;
+(void)initialize;


@end


#endif
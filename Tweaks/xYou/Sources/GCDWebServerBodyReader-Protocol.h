// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol GCDWebServerBodyReader


-(BOOL)open:(*id)arg0 ;
-(id)readData:(*id)arg0 ;
-(void)close;

@optional
-(void)asyncReadDataWithCompletion:(id)arg0 ;
@end


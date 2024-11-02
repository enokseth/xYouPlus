// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol AVAudioPlayerDelegate



@optional
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)audioPlayerBeginInterruption:(id)arg0 ;
-(void)audioPlayerEndInterruption:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)audioPlayerEndInterruption:(id)arg0 withFlags:(NSUInteger)arg1 ;
-(void)audioPlayerEndInterruption:(id)arg0 ;
@end


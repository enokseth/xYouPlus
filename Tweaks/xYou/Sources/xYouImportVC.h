// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef XYOUIMPORTVC_H
#define XYOUIMPORTVC_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "FRPreferences.h"
#import "UIImagePickerControllerDelegate-Protocol.h"

@interface xYouImportVC : UINavigationController <UIImagePickerControllerDelegate>

 {
    UIImageView *_headerView;
    NSString *_artworkPath;
    UIImage *_artworkImage;
    NSString *_filePath;
    NSString *_title;
    NSString *_album;
    NSString *_artist;
    NSString *_year;
    int _explicit;
    int _kind;
}


@property (retain, nonatomic) FRPreferences *import; // ivar: _import
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithTitle:(id)arg0 artist:(id)arg1 artworkImage:(id)arg2 filePath:(id)arg3 isAudio:(BOOL)arg4 ;
-(void)changeArtwork;
-(void)dismissVC;
-(void)startImporting;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;


@end


#endif
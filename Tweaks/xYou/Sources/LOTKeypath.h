// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTKEYPATH_H
#define LOTKEYPATH_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface LOTKeypath : NSObject {
    NSInteger _currentDepth;
    NSMutableArray *_fuzzyDepthStack;
    NSMutableArray *_currentStack;
    NSArray *_keys;
    NSMutableDictionary *_searchResults;
}


@property (readonly, nonatomic) NSString *absoluteKeypath; // ivar: _absoluteKeypath
@property (readonly, nonatomic) NSString *currentKey;
@property (readonly, nonatomic) NSString *currentKeyPath;
@property (readonly, nonatomic) NSDictionary *searchResults;
@property (readonly, nonatomic) BOOL hasFuzzyWildcard;
@property (readonly, nonatomic) BOOL hasWildcard;
@property (readonly, nonatomic) BOOL endOfKeypath;


-(id)initWithKeys:(id)arg0 ;
-(BOOL)pushKey:(id)arg0 ;
-(void)popKey;
-(void)popToRootKey;
-(void)addSearchResultForCurrentPath:(id)arg0 ;
+(id)keypathWithString:(id)arg0 ;
+(id)keypathWithKeys:(id)arg0 ;


@end


#endif
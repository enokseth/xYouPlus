@protocol AFMultipartFormData 
/* instance methods */
-[AFMultipartFormData appendPartWithFileURL:name:error:];
-[AFMultipartFormData appendPartWithFileURL:name:fileName:mimeType:error:];
-[AFMultipartFormData appendPartWithInputStream:name:fileName:length:mimeType:];
-[AFMultipartFormData appendPartWithFileData:name:fileName:mimeType:];
-[AFMultipartFormData appendPartWithFormData:name:];
-[AFMultipartFormData appendPartWithHeaders:body:];
-[AFMultipartFormData throttleBandwidthWithPacketSize:delay:];
@end

@protocol AFURLRequestSerialization <NSObject, NSSecureCoding, NSCopying>
/* instance methods */
-[AFURLRequestSerialization requestBySerializingRequest:withParameters:error:];
@end

@protocol AFURLResponseSerialization <NSObject, NSSecureCoding, NSCopying>
/* instance methods */
-[AFURLResponseSerialization responseObjectForResponse:data:error:];
@end

@protocol AVAudioPlayerDelegate <NSObject>
@optional
/* instance methods */
-[AVAudioPlayerDelegate audioPlayerDidFinishPlaying:successfully:];
-[AVAudioPlayerDelegate audioPlayerDecodeErrorDidOccur:error:];
-[AVAudioPlayerDelegate audioPlayerBeginInterruption:];
-[AVAudioPlayerDelegate audioPlayerEndInterruption:withOptions:];
-[AVAudioPlayerDelegate audioPlayerEndInterruption:withFlags:];
-[AVAudioPlayerDelegate audioPlayerEndInterruption:];
@end

@protocol AVPictureInPictureControllerDelegate <NSObject>
@optional
/* instance methods */
-[AVPictureInPictureControllerDelegate pictureInPictureControllerWillStartPictureInPicture:];
-[AVPictureInPictureControllerDelegate pictureInPictureControllerDidStartPictureInPicture:];
-[AVPictureInPictureControllerDelegate pictureInPictureController:failedToStartPictureInPictureWithError:];
-[AVPictureInPictureControllerDelegate pictureInPictureControllerWillStopPictureInPicture:];
-[AVPictureInPictureControllerDelegate pictureInPictureControllerDidStopPictureInPicture:];
-[AVPictureInPictureControllerDelegate pictureInPictureController:restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:];
@end

@protocol AVPlayerViewControllerDelegate <NSObject>
@optional
/* instance methods */
-[AVPlayerViewControllerDelegate playerViewController:willBeginFullScreenPresentationWithAnimationCoordinator:];
-[AVPlayerViewControllerDelegate playerViewController:willEndFullScreenPresentationWithAnimationCoordinator:];
-[AVPlayerViewControllerDelegate playerViewControllerWillStartPictureInPicture:];
-[AVPlayerViewControllerDelegate playerViewControllerDidStartPictureInPicture:];
-[AVPlayerViewControllerDelegate playerViewController:failedToStartPictureInPictureWithError:];
-[AVPlayerViewControllerDelegate playerViewControllerWillStopPictureInPicture:];
-[AVPlayerViewControllerDelegate playerViewControllerDidStopPictureInPicture:];
-[AVPlayerViewControllerDelegate playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:];
-[AVPlayerViewControllerDelegate playerViewController:restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:];
@end

@protocol CAAnimationDelegate <NSObject>
@optional
/* instance methods */
-[CAAnimationDelegate animationDidStart:];
-[CAAnimationDelegate animationDidStop:finished:];
@end

@protocol ExecuteDelegate <NSObject>
/* instance methods */
-[ExecuteDelegate executeCallback::];
@end

@protocol GCDWebServerBodyReader <NSObject>
/* instance methods */
-[GCDWebServerBodyReader open:];
-[GCDWebServerBodyReader readData:];
-[GCDWebServerBodyReader close];
@optional
/* instance methods */
-[GCDWebServerBodyReader asyncReadDataWithCompletion:];
@end

@protocol GCDWebServerBodyWriter <NSObject>
/* instance methods */
-[GCDWebServerBodyWriter open:];
-[GCDWebServerBodyWriter writeData:error:];
-[GCDWebServerBodyWriter close:];
@end

@protocol GLViewPagerViewControllerDataSource <NSObject>
/* instance methods */
-[GLViewPagerViewControllerDataSource numberOfTabsForViewPager:];
-[GLViewPagerViewControllerDataSource viewPager:viewForTabIndex:];
@optional
/* instance methods */
-[GLViewPagerViewControllerDataSource viewPager:contentViewControllerForTabAtIndex:];
-[GLViewPagerViewControllerDataSource viewPager:contentViewForTabAtIndex:];
@end

@protocol GLViewPagerViewControllerDelegate <NSObject>
/* instance methods */
-[GLViewPagerViewControllerDelegate viewPager:didChangeTabToIndex:fromTabIndex:];
-[GLViewPagerViewControllerDelegate viewPager:willChangeTabToIndex:fromTabIndex:withTransitionProgress:];
-[GLViewPagerViewControllerDelegate viewPager:widthForTabIndex:];
@end

@protocol LOTColorValueDelegate <LOTValueDelegate>
/* instance methods */
-[LOTColorValueDelegate colorForFrame:startKeyframe:endKeyframe:interpolatedProgress:startColor:endColor:currentColor:];
@end

@protocol LOTNumberValueDelegate <LOTValueDelegate>
/* instance methods */
-[LOTNumberValueDelegate floatValueForFrame:startKeyframe:endKeyframe:interpolatedProgress:startValue:endValue:currentValue:];
@end

@protocol LOTPathValueDelegate <LOTValueDelegate>
/* instance methods */
-[LOTPathValueDelegate pathForFrame:startKeyframe:endKeyframe:interpolatedProgress:];
@end

@protocol LOTPointValueDelegate <LOTValueDelegate>
/* instance methods */
-[LOTPointValueDelegate pointForFrame:startKeyframe:endKeyframe:interpolatedProgress:startPoint:endPoint:currentPoint:];
@end

@protocol LOTSizeValueDelegate <LOTValueDelegate>
/* instance methods */
-[LOTSizeValueDelegate sizeForFrame:startKeyframe:endKeyframe:interpolatedProgress:startSize:endSize:currentSize:];
@end

@protocol LOTValueDelegate <NSObject>
@end

@protocol NSCoding 
/* instance methods */
-[NSCoding encodeWithCoder:];
-[NSCoding initWithCoder:];
@end

@protocol NSCopying 
/* instance methods */
-[NSCopying copyWithZone:];
@end

@protocol NSObject 

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[NSObject isEqual:];
-[NSObject class];
-[NSObject self];
-[NSObject performSelector:];
-[NSObject performSelector:withObject:];
-[NSObject performSelector:withObject:withObject:];
-[NSObject isProxy];
-[NSObject isKindOfClass:];
-[NSObject isMemberOfClass:];
-[NSObject conformsToProtocol:];
-[NSObject respondsToSelector:];
-[NSObject retain];
-[NSObject release];
-[NSObject autorelease];
-[NSObject retainCount];
-[NSObject zone];
-[NSObject hash];
-[NSObject superclass];
-[NSObject description];
@optional
/* instance methods */
-[NSObject debugDescription];
@end

@protocol NSSecureCoding <NSCoding>
/* class methods */
+[NSSecureCoding supportsSecureCoding];
@end

@protocol NSStreamDelegate <NSObject>
@optional
/* instance methods */
-[NSStreamDelegate stream:handleEvent:];
@end

@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>
@optional
/* instance methods */
-[NSURLSessionDataDelegate URLSession:dataTask:didReceiveResponse:completionHandler:];
-[NSURLSessionDataDelegate URLSession:dataTask:didBecomeDownloadTask:];
-[NSURLSessionDataDelegate URLSession:dataTask:didBecomeStreamTask:];
-[NSURLSessionDataDelegate URLSession:dataTask:didReceiveData:];
-[NSURLSessionDataDelegate URLSession:dataTask:willCacheResponse:completionHandler:];
@end

@protocol NSURLSessionDelegate <NSObject>
@optional
/* instance methods */
-[NSURLSessionDelegate URLSession:didBecomeInvalidWithError:];
-[NSURLSessionDelegate URLSession:didReceiveChallenge:completionHandler:];
-[NSURLSessionDelegate URLSessionDidFinishEventsForBackgroundURLSession:];
@end

@protocol NSURLSessionDownloadDelegate <NSURLSessionTaskDelegate>
/* instance methods */
-[NSURLSessionDownloadDelegate URLSession:downloadTask:didFinishDownloadingToURL:];
@optional
/* instance methods */
-[NSURLSessionDownloadDelegate URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:];
-[NSURLSessionDownloadDelegate URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:];
@end

@protocol NSURLSessionTaskDelegate <NSURLSessionDelegate>
@optional
/* instance methods */
-[NSURLSessionTaskDelegate URLSession:task:willBeginDelayedRequest:completionHandler:];
-[NSURLSessionTaskDelegate URLSession:taskIsWaitingForConnectivity:];
-[NSURLSessionTaskDelegate URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:];
-[NSURLSessionTaskDelegate URLSession:task:didReceiveChallenge:completionHandler:];
-[NSURLSessionTaskDelegate URLSession:task:needNewBodyStream:];
-[NSURLSessionTaskDelegate URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:];
-[NSURLSessionTaskDelegate URLSession:task:didFinishCollectingMetrics:];
-[NSURLSessionTaskDelegate URLSession:task:didCompleteWithError:];
@end

@protocol SDAnimatedImage <SDAnimatedImageProvider>

@property (TB,R,N,GisAllFramesLoaded) allFramesLoaded;
@property (T@"<SDAnimatedImageCoder>",R,N) animatedCoder;

/* instance methods */
-[SDAnimatedImage initWithData:scale:options:];
-[SDAnimatedImage initWithAnimatedCoder:scale:];
@optional
/* instance methods */
-[SDAnimatedImage preloadAllFrames];
-[SDAnimatedImage unloadAllFrames];
-[SDAnimatedImage isAllFramesLoaded];
-[SDAnimatedImage animatedCoder];
@end

@protocol SDAnimatedImageCoder <SDImageCoder, SDAnimatedImageProvider>
/* instance methods */
-[SDAnimatedImageCoder initWithAnimatedImageData:options:];
@end

@protocol SDAnimatedImageProvider <NSObject>

@property (T@"NSData",R,C,N) animatedImageData;
@property (TQ,R,N) animatedImageFrameCount;
@property (TQ,R,N) animatedImageLoopCount;

/* instance methods */
-[SDAnimatedImageProvider animatedImageFrameAtIndex:];
-[SDAnimatedImageProvider animatedImageDurationAtIndex:];
-[SDAnimatedImageProvider animatedImageData];
-[SDAnimatedImageProvider animatedImageFrameCount];
-[SDAnimatedImageProvider animatedImageLoopCount];
@end

@protocol SDDiskCache <NSObject>
/* instance methods */
-[SDDiskCache initWithCachePath:config:];
-[SDDiskCache containsDataForKey:];
-[SDDiskCache dataForKey:];
-[SDDiskCache setData:forKey:];
-[SDDiskCache extendedDataForKey:];
-[SDDiskCache setExtendedData:forKey:];
-[SDDiskCache removeDataForKey:];
-[SDDiskCache removeAllData];
-[SDDiskCache removeExpiredData];
-[SDDiskCache cachePathForKey:];
-[SDDiskCache totalCount];
-[SDDiskCache totalSize];
@end

@protocol SDImageCache <NSObject>
/* instance methods */
-[SDImageCache queryImageForKey:options:context:completion:];
-[SDImageCache queryImageForKey:options:context:cacheType:completion:];
-[SDImageCache storeImage:imageData:forKey:cacheType:completion:];
-[SDImageCache removeImageForKey:cacheType:completion:];
-[SDImageCache containsImageForKey:cacheType:completion:];
-[SDImageCache clearWithCacheType:completion:];
@end

@protocol SDImageCoder <NSObject>
/* instance methods */
-[SDImageCoder canDecodeFromData:];
-[SDImageCoder decodedImageWithData:options:];
-[SDImageCoder canEncodeToFormat:];
-[SDImageCoder encodedDataWithImage:format:options:];
@end

@protocol SDImageLoader <NSObject>
/* instance methods */
-[SDImageLoader canRequestImageForURL:];
-[SDImageLoader requestImageWithURL:options:context:progress:completed:];
-[SDImageLoader shouldBlockFailedURLWithURL:error:];
@optional
/* instance methods */
-[SDImageLoader canRequestImageForURL:options:context:];
-[SDImageLoader shouldBlockFailedURLWithURL:error:options:context:];
@end

@protocol SDImageTransformer <NSObject>

@property (T@"NSString",R,C,N) transformerKey;

/* instance methods */
-[SDImageTransformer transformedImageWithImage:forKey:];
-[SDImageTransformer transformerKey];
@end

@protocol SDMemoryCache <NSObject>
/* instance methods */
-[SDMemoryCache initWithConfig:];
-[SDMemoryCache objectForKey:];
-[SDMemoryCache setObject:forKey:];
-[SDMemoryCache setObject:forKey:cost:];
-[SDMemoryCache removeObjectForKey:];
-[SDMemoryCache removeAllObjects];
@end

@protocol SDProgressiveImageCoder <SDImageCoder>
/* instance methods */
-[SDProgressiveImageCoder canIncrementalDecodeFromData:];
-[SDProgressiveImageCoder initIncrementalWithOptions:];
-[SDProgressiveImageCoder updateIncrementalData:finished:];
-[SDProgressiveImageCoder incrementalDecodedImageWithOptions:];
@end

@protocol SDWebImageCacheKeyFilter <NSObject>
/* instance methods */
-[SDWebImageCacheKeyFilter cacheKeyForURL:];
@end

@protocol SDWebImageCacheSerializer <NSObject>
/* instance methods */
-[SDWebImageCacheSerializer cacheDataWithImage:originalData:imageURL:];
@end

@protocol SDWebImageDownloaderDecryptor <NSObject>
/* instance methods */
-[SDWebImageDownloaderDecryptor decryptedDataWithData:response:];
@end

@protocol SDWebImageDownloaderOperation <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (T@"NSURLRequest",R,N) request;
@property (T@"NSURLResponse",R,N) response;
@property (T@"NSURLSessionTask",R,N) dataTask;
@property (T@"NSURLSessionTaskMetrics",R,N) metrics;
@property (T@"NSURLCredential",&,N) credential;
@property (Td,N) minimumProgressInterval;

/* instance methods */
-[SDWebImageDownloaderOperation initWithRequest:inSession:options:];
-[SDWebImageDownloaderOperation initWithRequest:inSession:options:context:];
-[SDWebImageDownloaderOperation addHandlersForProgress:completed:];
-[SDWebImageDownloaderOperation cancel:];
-[SDWebImageDownloaderOperation request];
-[SDWebImageDownloaderOperation response];
@optional
/* instance methods */
-[SDWebImageDownloaderOperation dataTask];
-[SDWebImageDownloaderOperation metrics];
-[SDWebImageDownloaderOperation credential];
-[SDWebImageDownloaderOperation setCredential:];
-[SDWebImageDownloaderOperation minimumProgressInterval];
-[SDWebImageDownloaderOperation setMinimumProgressInterval:];
@end

@protocol SDWebImageDownloaderRequestModifier <NSObject>
/* instance methods */
-[SDWebImageDownloaderRequestModifier modifiedRequestWithRequest:];
@end

@protocol SDWebImageDownloaderResponseModifier <NSObject>
/* instance methods */
-[SDWebImageDownloaderResponseModifier modifiedResponseWithResponse:];
@end

@protocol SDWebImageIndicator <NSObject>

@property (T@"UIView",R,N) indicatorView;

/* instance methods */
-[SDWebImageIndicator startAnimatingIndicator];
-[SDWebImageIndicator stopAnimatingIndicator];
-[SDWebImageIndicator indicatorView];
@optional
/* instance methods */
-[SDWebImageIndicator updateIndicatorProgress:];
@end

@protocol SDWebImageOperation <NSObject>
/* instance methods */
-[SDWebImageOperation cancel];
@end

@protocol SDWebImageOptionsProcessor <NSObject>
/* instance methods */
-[SDWebImageOptionsProcessor processedResultForURL:options:context:];
@end

@protocol STPopupControllerTransitioning <NSObject>
/* instance methods */
-[STPopupControllerTransitioning popupControllerTransitionDuration:];
-[STPopupControllerTransitioning popupControllerAnimateTransition:completion:];
@end

@protocol STPopupNavigationTouchEventDelegate <NSObject>
/* instance methods */
-[STPopupNavigationTouchEventDelegate popupNavigationBar:touchDidMoveWithOffset:];
-[STPopupNavigationTouchEventDelegate popupNavigationBar:touchDidEndWithOffset:];
@end

@protocol UIAppearanceContainer <NSObject>
@end

@protocol UIGestureRecognizerDelegate <NSObject>
@optional
/* instance methods */
-[UIGestureRecognizerDelegate gestureRecognizerShouldBegin:];
-[UIGestureRecognizerDelegate gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:];
-[UIGestureRecognizerDelegate gestureRecognizer:shouldRequireFailureOfGestureRecognizer:];
-[UIGestureRecognizerDelegate gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:];
-[UIGestureRecognizerDelegate gestureRecognizer:shouldReceiveTouch:];
-[UIGestureRecognizerDelegate gestureRecognizer:shouldReceivePress:];
-[UIGestureRecognizerDelegate gestureRecognizer:shouldReceiveEvent:];
@end

@protocol UIImagePickerControllerDelegate <NSObject>
@optional
/* instance methods */
-[UIImagePickerControllerDelegate imagePickerController:didFinishPickingImage:editingInfo:];
-[UIImagePickerControllerDelegate imagePickerController:didFinishPickingMediaWithInfo:];
-[UIImagePickerControllerDelegate imagePickerControllerDidCancel:];
@end

@protocol UIKeyInput <UITextInputTraits>

@property (TB,R,N) hasText;

/* instance methods */
-[UIKeyInput insertText:];
-[UIKeyInput deleteBackward];
-[UIKeyInput hasText];
@end

@protocol UIPageViewControllerDataSource <NSObject>
/* instance methods */
-[UIPageViewControllerDataSource pageViewController:viewControllerBeforeViewController:];
-[UIPageViewControllerDataSource pageViewController:viewControllerAfterViewController:];
@optional
/* instance methods */
-[UIPageViewControllerDataSource presentationCountForPageViewController:];
-[UIPageViewControllerDataSource presentationIndexForPageViewController:];
@end

@protocol UIPageViewControllerDelegate <NSObject>
@optional
/* instance methods */
-[UIPageViewControllerDelegate pageViewController:willTransitionToViewControllers:];
-[UIPageViewControllerDelegate pageViewController:didFinishAnimating:previousViewControllers:transitionCompleted:];
-[UIPageViewControllerDelegate pageViewController:spineLocationForInterfaceOrientation:];
-[UIPageViewControllerDelegate pageViewControllerSupportedInterfaceOrientations:];
-[UIPageViewControllerDelegate pageViewControllerPreferredInterfaceOrientationForPresentation:];
@end

@protocol UIPointerInteractionDelegate <NSObject>
@optional
/* instance methods */
-[UIPointerInteractionDelegate pointerInteraction:regionForRequest:defaultRegion:];
-[UIPointerInteractionDelegate pointerInteraction:styleForRegion:];
-[UIPointerInteractionDelegate pointerInteraction:willEnterRegion:animator:];
-[UIPointerInteractionDelegate pointerInteraction:willExitRegion:animator:];
@end

@protocol UIScrollViewDelegate <NSObject>
@optional
/* instance methods */
-[UIScrollViewDelegate scrollViewDidScroll:];
-[UIScrollViewDelegate scrollViewDidZoom:];
-[UIScrollViewDelegate scrollViewWillBeginDragging:];
-[UIScrollViewDelegate scrollViewWillEndDragging:withVelocity:targetContentOffset:];
-[UIScrollViewDelegate scrollViewDidEndDragging:willDecelerate:];
-[UIScrollViewDelegate scrollViewWillBeginDecelerating:];
-[UIScrollViewDelegate scrollViewDidEndDecelerating:];
-[UIScrollViewDelegate scrollViewDidEndScrollingAnimation:];
-[UIScrollViewDelegate viewForZoomingInScrollView:];
-[UIScrollViewDelegate scrollViewWillBeginZooming:withView:];
-[UIScrollViewDelegate scrollViewDidEndZooming:withView:atScale:];
-[UIScrollViewDelegate scrollViewShouldScrollToTop:];
-[UIScrollViewDelegate scrollViewDidScrollToTop:];
-[UIScrollViewDelegate scrollViewDidChangeAdjustedContentInset:];
@end

@protocol UISearchResultsUpdating <NSObject>
/* instance methods */
-[UISearchResultsUpdating updateSearchResultsForSearchController:];
@optional
/* instance methods */
-[UISearchResultsUpdating updateSearchResultsForSearchController:selectingSearchSuggestion:];
@end

@protocol UITableViewDataSource <NSObject>
/* instance methods */
-[UITableViewDataSource tableView:numberOfRowsInSection:];
-[UITableViewDataSource tableView:cellForRowAtIndexPath:];
@optional
/* instance methods */
-[UITableViewDataSource numberOfSectionsInTableView:];
-[UITableViewDataSource tableView:titleForHeaderInSection:];
-[UITableViewDataSource tableView:titleForFooterInSection:];
-[UITableViewDataSource tableView:canEditRowAtIndexPath:];
-[UITableViewDataSource tableView:canMoveRowAtIndexPath:];
-[UITableViewDataSource sectionIndexTitlesForTableView:];
-[UITableViewDataSource tableView:sectionForSectionIndexTitle:atIndex:];
-[UITableViewDataSource tableView:commitEditingStyle:forRowAtIndexPath:];
-[UITableViewDataSource tableView:moveRowAtIndexPath:toIndexPath:];
@end

@protocol UITableViewDelegate <NSObject, UIScrollViewDelegate>
@optional
/* instance methods */
-[UITableViewDelegate tableView:willDisplayCell:forRowAtIndexPath:];
-[UITableViewDelegate tableView:willDisplayHeaderView:forSection:];
-[UITableViewDelegate tableView:willDisplayFooterView:forSection:];
-[UITableViewDelegate tableView:didEndDisplayingCell:forRowAtIndexPath:];
-[UITableViewDelegate tableView:didEndDisplayingHeaderView:forSection:];
-[UITableViewDelegate tableView:didEndDisplayingFooterView:forSection:];
-[UITableViewDelegate tableView:heightForRowAtIndexPath:];
-[UITableViewDelegate tableView:heightForHeaderInSection:];
-[UITableViewDelegate tableView:heightForFooterInSection:];
-[UITableViewDelegate tableView:estimatedHeightForRowAtIndexPath:];
-[UITableViewDelegate tableView:estimatedHeightForHeaderInSection:];
-[UITableViewDelegate tableView:estimatedHeightForFooterInSection:];
-[UITableViewDelegate tableView:viewForHeaderInSection:];
-[UITableViewDelegate tableView:viewForFooterInSection:];
-[UITableViewDelegate tableView:accessoryTypeForRowWithIndexPath:];
-[UITableViewDelegate tableView:accessoryButtonTappedForRowWithIndexPath:];
-[UITableViewDelegate tableView:shouldHighlightRowAtIndexPath:];
-[UITableViewDelegate tableView:didHighlightRowAtIndexPath:];
-[UITableViewDelegate tableView:didUnhighlightRowAtIndexPath:];
-[UITableViewDelegate tableView:willSelectRowAtIndexPath:];
-[UITableViewDelegate tableView:willDeselectRowAtIndexPath:];
-[UITableViewDelegate tableView:didSelectRowAtIndexPath:];
-[UITableViewDelegate tableView:didDeselectRowAtIndexPath:];
-[UITableViewDelegate tableView:editingStyleForRowAtIndexPath:];
-[UITableViewDelegate tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:];
-[UITableViewDelegate tableView:editActionsForRowAtIndexPath:];
-[UITableViewDelegate tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:];
-[UITableViewDelegate tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:];
-[UITableViewDelegate tableView:shouldIndentWhileEditingRowAtIndexPath:];
-[UITableViewDelegate tableView:willBeginEditingRowAtIndexPath:];
-[UITableViewDelegate tableView:didEndEditingRowAtIndexPath:];
-[UITableViewDelegate tableView:targetIndexPathForMoveFromRowAtIndexPath:toProposedIndexPath:];
-[UITableViewDelegate tableView:indentationLevelForRowAtIndexPath:];
-[UITableViewDelegate tableView:shouldShowMenuForRowAtIndexPath:];
-[UITableViewDelegate tableView:canPerformAction:forRowAtIndexPath:withSender:];
-[UITableViewDelegate tableView:performAction:forRowAtIndexPath:withSender:];
-[UITableViewDelegate tableView:canFocusRowAtIndexPath:];
-[UITableViewDelegate tableView:shouldUpdateFocusInContext:];
-[UITableViewDelegate tableView:didUpdateFocusInContext:withAnimationCoordinator:];
-[UITableViewDelegate indexPathForPreferredFocusedViewInTableView:];
-[UITableViewDelegate tableView:shouldSpringLoadRowAtIndexPath:withContext:];
-[UITableViewDelegate tableView:shouldBeginMultipleSelectionInteractionAtIndexPath:];
-[UITableViewDelegate tableView:didBeginMultipleSelectionInteractionAtIndexPath:];
-[UITableViewDelegate tableViewDidEndMultipleSelectionInteraction:];
-[UITableViewDelegate tableView:contextMenuConfigurationForRowAtIndexPath:point:];
-[UITableViewDelegate tableView:previewForHighlightingContextMenuWithConfiguration:];
-[UITableViewDelegate tableView:previewForDismissingContextMenuWithConfiguration:];
-[UITableViewDelegate tableView:willPerformPreviewActionForMenuWithConfiguration:animator:];
-[UITableViewDelegate tableView:willDisplayContextMenuWithConfiguration:animator:];
-[UITableViewDelegate tableView:willEndContextMenuInteractionWithConfiguration:animator:];
@end

@protocol UITextFieldDelegate <NSObject>
@optional
/* instance methods */
-[UITextFieldDelegate textFieldShouldBeginEditing:];
-[UITextFieldDelegate textFieldDidBeginEditing:];
-[UITextFieldDelegate textFieldShouldEndEditing:];
-[UITextFieldDelegate textFieldDidEndEditing:];
-[UITextFieldDelegate textFieldDidEndEditing:reason:];
-[UITextFieldDelegate textField:shouldChangeCharactersInRange:replacementString:];
-[UITextFieldDelegate textFieldDidChangeSelection:];
-[UITextFieldDelegate textFieldShouldClear:];
-[UITextFieldDelegate textFieldShouldReturn:];
@end

@protocol UITextInputTraits <NSObject>

@property (Tq,N) autocapitalizationType;
@property (Tq,N) autocorrectionType;
@property (Tq,N) spellCheckingType;
@property (Tq,N) smartQuotesType;
@property (Tq,N) smartDashesType;
@property (Tq,N) smartInsertDeleteType;
@property (Tq,N) keyboardType;
@property (Tq,N) keyboardAppearance;
@property (Tq,N) returnKeyType;
@property (TB,N) enablesReturnKeyAutomatically;
@property (TB,N,GisSecureTextEntry) secureTextEntry;
@property (T@"NSString",C,N) textContentType;
@property (T@"UITextInputPasswordRules",C,N) passwordRules;

@optional
/* instance methods */
-[UITextInputTraits autocapitalizationType];
-[UITextInputTraits setAutocapitalizationType:];
-[UITextInputTraits autocorrectionType];
-[UITextInputTraits setAutocorrectionType:];
-[UITextInputTraits spellCheckingType];
-[UITextInputTraits setSpellCheckingType:];
-[UITextInputTraits smartQuotesType];
-[UITextInputTraits setSmartQuotesType:];
-[UITextInputTraits smartDashesType];
-[UITextInputTraits setSmartDashesType:];
-[UITextInputTraits smartInsertDeleteType];
-[UITextInputTraits setSmartInsertDeleteType:];
-[UITextInputTraits keyboardType];
-[UITextInputTraits setKeyboardType:];
-[UITextInputTraits keyboardAppearance];
-[UITextInputTraits setKeyboardAppearance:];
-[UITextInputTraits returnKeyType];
-[UITextInputTraits setReturnKeyType:];
-[UITextInputTraits enablesReturnKeyAutomatically];
-[UITextInputTraits setEnablesReturnKeyAutomatically:];
-[UITextInputTraits isSecureTextEntry];
-[UITextInputTraits setSecureTextEntry:];
-[UITextInputTraits textContentType];
-[UITextInputTraits setTextContentType:];
-[UITextInputTraits passwordRules];
-[UITextInputTraits setPasswordRules:];
@end

@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>
@optional
/* instance methods */
-[UITextViewDelegate textViewShouldBeginEditing:];
-[UITextViewDelegate textViewShouldEndEditing:];
-[UITextViewDelegate textViewDidBeginEditing:];
-[UITextViewDelegate textViewDidEndEditing:];
-[UITextViewDelegate textView:shouldChangeTextInRange:replacementText:];
-[UITextViewDelegate textViewDidChange:];
-[UITextViewDelegate textViewDidChangeSelection:];
-[UITextViewDelegate textView:shouldInteractWithURL:inRange:interaction:];
-[UITextViewDelegate textView:shouldInteractWithTextAttachment:inRange:interaction:];
-[UITextViewDelegate textView:shouldInteractWithURL:inRange:];
-[UITextViewDelegate textView:shouldInteractWithTextAttachment:inRange:];
@end

@protocol UIViewControllerAnimatedTransitioning <NSObject>
/* instance methods */
-[UIViewControllerAnimatedTransitioning transitionDuration:];
-[UIViewControllerAnimatedTransitioning animateTransition:];
@optional
/* instance methods */
-[UIViewControllerAnimatedTransitioning interruptibleAnimatorForTransition:];
-[UIViewControllerAnimatedTransitioning animationEnded:];
@end

@protocol UIViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinatorContext>
/* instance methods */
-[UIViewControllerTransitionCoordinator animateAlongsideTransition:completion:];
-[UIViewControllerTransitionCoordinator animateAlongsideTransitionInView:animation:completion:];
-[UIViewControllerTransitionCoordinator notifyWhenInteractionEndsUsingBlock:];
-[UIViewControllerTransitionCoordinator notifyWhenInteractionChangesUsingBlock:];
@end

@protocol UIViewControllerTransitionCoordinatorContext <NSObject>

@property (TB,R,N,GisAnimated) animated;
@property (Tq,R,N) presentationStyle;
@property (TB,R,N) initiallyInteractive;
@property (TB,R,N) isInterruptible;
@property (TB,R,N,GisInteractive) interactive;
@property (TB,R,N,GisCancelled) cancelled;
@property (Td,R,N) transitionDuration;
@property (Td,R,N) percentComplete;
@property (Td,R,N) completionVelocity;
@property (Tq,R,N) completionCurve;
@property (T@"UIView",R,N) containerView;
@property (T{CGAffineTransform=dddddd},R,N) targetTransform;

/* instance methods */
-[UIViewControllerTransitionCoordinatorContext viewControllerForKey:];
-[UIViewControllerTransitionCoordinatorContext viewForKey:];
-[UIViewControllerTransitionCoordinatorContext isAnimated];
-[UIViewControllerTransitionCoordinatorContext presentationStyle];
-[UIViewControllerTransitionCoordinatorContext initiallyInteractive];
-[UIViewControllerTransitionCoordinatorContext isInterruptible];
-[UIViewControllerTransitionCoordinatorContext isInteractive];
-[UIViewControllerTransitionCoordinatorContext isCancelled];
-[UIViewControllerTransitionCoordinatorContext transitionDuration];
-[UIViewControllerTransitionCoordinatorContext percentComplete];
-[UIViewControllerTransitionCoordinatorContext completionVelocity];
-[UIViewControllerTransitionCoordinatorContext completionCurve];
-[UIViewControllerTransitionCoordinatorContext containerView];
-[UIViewControllerTransitionCoordinatorContext targetTransform];
@end

@protocol UIViewControllerTransitioningDelegate <NSObject>
@optional
/* instance methods */
-[UIViewControllerTransitioningDelegate animationControllerForPresentedController:presentingController:sourceController:];
-[UIViewControllerTransitioningDelegate animationControllerForDismissedController:];
-[UIViewControllerTransitioningDelegate interactionControllerForPresentation:];
-[UIViewControllerTransitioningDelegate interactionControllerForDismissal:];
-[UIViewControllerTransitioningDelegate presentationControllerForPresentedViewController:presentingViewController:sourceViewController:];
@end

@protocol _LNPopupBarAppearanceDelegate <NSObject>
/* instance methods */
-[_LNPopupBarAppearanceDelegate popupBarAppearanceDidChange:];
@end

@protocol _LNPopupBarDelegate <NSObject>
/* instance methods */
-[_LNPopupBarDelegate _traitCollectionForPopupBarDidChange:];
-[_LNPopupBarDelegate _popupBarMetricsDidChange:];
-[_LNPopupBarDelegate _popupBarStyleDidChange:];
-[_LNPopupBarDelegate _popupBar:updateCustomBarController:cleanup:];
-[_LNPopupBarDelegate _removeInteractionGestureForPopupBar:];
@end

@protocol _LNPopupItemDelegate <NSObject>
/* instance methods */
-[_LNPopupItemDelegate _popupItem:didChangeValueForKey:];
@end

@protocol __MarqueeLabelType <NSObject>

@property (Td,N) rate;
@property (Td,N) animationDelay;
@property (T@"__MarqueeLabel",W,N) synchronizedLabel;
@property (Td,R,N) animationDuration;
@property (TB,N) holdScrolling;

/* instance methods */
-[__MarqueeLabelType resetLabel];
-[__MarqueeLabelType unpauseLabel];
-[__MarqueeLabelType pauseLabel];
-[__MarqueeLabelType restartLabel];
-[__MarqueeLabelType isPaused];
-[__MarqueeLabelType shutdownLabel];
-[__MarqueeLabelType rate];
-[__MarqueeLabelType setRate:];
-[__MarqueeLabelType animationDelay];
-[__MarqueeLabelType setAnimationDelay:];
-[__MarqueeLabelType synchronizedLabel];
-[__MarqueeLabelType setSynchronizedLabel:];
-[__MarqueeLabelType animationDuration];
-[__MarqueeLabelType holdScrolling];
-[__MarqueeLabelType setHoldScrolling:];
@end

@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer {
  /* instance variables */
  @"NSArray" _responseSerializers;
}

@property (T@"NSArray",C,N,V_responseSerializers) responseSerializers;

/* class methods */
-[AFCompoundResponseSerializer compoundSerializerWithResponseSerializers:];
-[AFCompoundResponseSerializer supportsSecureCoding];

/* instance methods */
-[AFCompoundResponseSerializer responseObjectForResponse:data:error:];
-[AFCompoundResponseSerializer initWithCoder:];
-[AFCompoundResponseSerializer encodeWithCoder:];
-[AFCompoundResponseSerializer copyWithZone:];
-[AFCompoundResponseSerializer responseSerializers];
-[AFCompoundResponseSerializer setResponseSerializers:];
@end

@interface AFHTTPBodyPart : <NSCopying> {
  /* instance variables */
  i _phase;
  @"NSInputStream" _inputStream;
  Q _phaseReadOffset;
  B _hasInitialBoundary;
  B _hasFinalBoundary;
  Q _stringEncoding;
  @"NSDictionary" _headers;
  @"NSString" _boundary;
  @ _body;
  Q _bodyContentLength;
}

@property (TQ,N,V_stringEncoding) stringEncoding;
@property (T@"NSDictionary",&,N,V_headers) headers;
@property (T@"NSString",C,N,V_boundary) boundary;
@property (T@,&,N,V_body) body;
@property (TQ,N,V_bodyContentLength) bodyContentLength;
@property (T@"NSInputStream",&,N,V_inputStream) inputStream;
@property (TB,N,V_hasInitialBoundary) hasInitialBoundary;
@property (TB,N,V_hasFinalBoundary) hasFinalBoundary;
@property (TB,R,N,GhasBytesAvailable) bytesAvailable;
@property (TQ,R,N) contentLength;

/* instance methods */
-[AFHTTPBodyPart init];
-[AFHTTPBodyPart dealloc];
-[AFHTTPBodyPart inputStream];
-[AFHTTPBodyPart stringForHeaders];
-[AFHTTPBodyPart contentLength];
-[AFHTTPBodyPart hasBytesAvailable];
-[AFHTTPBodyPart read:maxLength:];
-[AFHTTPBodyPart readData:intoBuffer:maxLength:];
-[AFHTTPBodyPart transitionToNextPhase];
-[AFHTTPBodyPart copyWithZone:];
-[AFHTTPBodyPart stringEncoding];
-[AFHTTPBodyPart setStringEncoding:];
-[AFHTTPBodyPart headers];
-[AFHTTPBodyPart setHeaders:];
-[AFHTTPBodyPart boundary];
-[AFHTTPBodyPart setBoundary:];
-[AFHTTPBodyPart body];
-[AFHTTPBodyPart setBody:];
-[AFHTTPBodyPart bodyContentLength];
-[AFHTTPBodyPart setBodyContentLength:];
-[AFHTTPBodyPart setInputStream:];
-[AFHTTPBodyPart hasInitialBoundary];
-[AFHTTPBodyPart setHasInitialBoundary:];
-[AFHTTPBodyPart hasFinalBoundary];
-[AFHTTPBodyPart setHasFinalBoundary:];
@end

@interface AFHTTPRequestSerializer : <AFURLRequestSerialization> {
  /* instance variables */
  B _allowsCellularAccess;
  B _HTTPShouldHandleCookies;
  B _HTTPShouldUsePipelining;
  Q _stringEncoding;
  Q _cachePolicy;
  Q _networkServiceType;
  d _timeoutInterval;
  @"NSSet" _HTTPMethodsEncodingParametersInURI;
  @"NSMutableSet" _mutableObservedChangedKeyPaths;
  @"NSMutableDictionary" _mutableHTTPRequestHeaders;
  @"NSObject<OS_dispatch_queue>" _requestHeaderModificationQueue;
  Q _queryStringSerializationStyle;
  @? _queryStringSerialization;
}

@property (T@"NSMutableSet",&,N,V_mutableObservedChangedKeyPaths) mutableObservedChangedKeyPaths;
@property (T@"NSMutableDictionary",&,N,V_mutableHTTPRequestHeaders) mutableHTTPRequestHeaders;
@property (T@"NSObject<OS_dispatch_queue>",&,N,V_requestHeaderModificationQueue) requestHeaderModificationQueue;
@property (TQ,N,V_queryStringSerializationStyle) queryStringSerializationStyle;
@property (T@?,C,N,V_queryStringSerialization) queryStringSerialization;
@property (TQ,N,V_stringEncoding) stringEncoding;
@property (TB,N,V_allowsCellularAccess) allowsCellularAccess;
@property (TQ,N,V_cachePolicy) cachePolicy;
@property (TB,N,V_HTTPShouldHandleCookies) HTTPShouldHandleCookies;
@property (TB,N,V_HTTPShouldUsePipelining) HTTPShouldUsePipelining;
@property (TQ,N,V_networkServiceType) networkServiceType;
@property (Td,N,V_timeoutInterval) timeoutInterval;
@property (T@"NSDictionary",R,N) HTTPRequestHeaders;
@property (T@"NSSet",&,N,V_HTTPMethodsEncodingParametersInURI) HTTPMethodsEncodingParametersInURI;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[AFHTTPRequestSerializer serializer];
-[AFHTTPRequestSerializer automaticallyNotifiesObserversForKey:];
-[AFHTTPRequestSerializer supportsSecureCoding];

/* instance methods */
-[AFHTTPRequestSerializer init];
-[AFHTTPRequestSerializer dealloc];
-[AFHTTPRequestSerializer setAllowsCellularAccess:];
-[AFHTTPRequestSerializer setCachePolicy:];
-[AFHTTPRequestSerializer setHTTPShouldHandleCookies:];
-[AFHTTPRequestSerializer setHTTPShouldUsePipelining:];
-[AFHTTPRequestSerializer setNetworkServiceType:];
-[AFHTTPRequestSerializer setTimeoutInterval:];
-[AFHTTPRequestSerializer HTTPRequestHeaders];
-[AFHTTPRequestSerializer setValue:forHTTPHeaderField:];
-[AFHTTPRequestSerializer valueForHTTPHeaderField:];
-[AFHTTPRequestSerializer setAuthorizationHeaderFieldWithUsername:password:];
-[AFHTTPRequestSerializer clearAuthorizationHeader];
-[AFHTTPRequestSerializer setQueryStringSerializationWithStyle:];
-[AFHTTPRequestSerializer setQueryStringSerializationWithBlock:];
-[AFHTTPRequestSerializer requestWithMethod:URLString:parameters:error:];
-[AFHTTPRequestSerializer multipartFormRequestWithMethod:URLString:parameters:constructingBodyWithBlock:error:];
-[AFHTTPRequestSerializer requestWithMultipartFormRequest:writingStreamContentsToFile:completionHandler:];
-[AFHTTPRequestSerializer requestBySerializingRequest:withParameters:error:];
-[AFHTTPRequestSerializer observeValueForKeyPath:ofObject:change:context:];
-[AFHTTPRequestSerializer initWithCoder:];
-[AFHTTPRequestSerializer encodeWithCoder:];
-[AFHTTPRequestSerializer copyWithZone:];
-[AFHTTPRequestSerializer stringEncoding];
-[AFHTTPRequestSerializer setStringEncoding:];
-[AFHTTPRequestSerializer allowsCellularAccess];
-[AFHTTPRequestSerializer cachePolicy];
-[AFHTTPRequestSerializer HTTPShouldHandleCookies];
-[AFHTTPRequestSerializer HTTPShouldUsePipelining];
-[AFHTTPRequestSerializer networkServiceType];
-[AFHTTPRequestSerializer timeoutInterval];
-[AFHTTPRequestSerializer HTTPMethodsEncodingParametersInURI];
-[AFHTTPRequestSerializer setHTTPMethodsEncodingParametersInURI:];
-[AFHTTPRequestSerializer mutableObservedChangedKeyPaths];
-[AFHTTPRequestSerializer setMutableObservedChangedKeyPaths:];
-[AFHTTPRequestSerializer mutableHTTPRequestHeaders];
-[AFHTTPRequestSerializer setMutableHTTPRequestHeaders:];
-[AFHTTPRequestSerializer requestHeaderModificationQueue];
-[AFHTTPRequestSerializer setRequestHeaderModificationQueue:];
-[AFHTTPRequestSerializer queryStringSerializationStyle];
-[AFHTTPRequestSerializer setQueryStringSerializationStyle:];
-[AFHTTPRequestSerializer queryStringSerialization];
-[AFHTTPRequestSerializer setQueryStringSerialization:];
@end

@interface AFHTTPResponseSerializer : <AFURLResponseSerialization> {
  /* instance variables */
  @"NSIndexSet" _acceptableStatusCodes;
  @"NSSet" _acceptableContentTypes;
}

@property (T@"NSIndexSet",C,N,V_acceptableStatusCodes) acceptableStatusCodes;
@property (T@"NSSet",C,N,V_acceptableContentTypes) acceptableContentTypes;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[AFHTTPResponseSerializer serializer];
-[AFHTTPResponseSerializer supportsSecureCoding];

/* instance methods */
-[AFHTTPResponseSerializer init];
-[AFHTTPResponseSerializer validateResponse:data:error:];
-[AFHTTPResponseSerializer responseObjectForResponse:data:error:];
-[AFHTTPResponseSerializer initWithCoder:];
-[AFHTTPResponseSerializer encodeWithCoder:];
-[AFHTTPResponseSerializer copyWithZone:];
-[AFHTTPResponseSerializer acceptableStatusCodes];
-[AFHTTPResponseSerializer setAcceptableStatusCodes:];
-[AFHTTPResponseSerializer acceptableContentTypes];
-[AFHTTPResponseSerializer setAcceptableContentTypes:];
@end

@interface AFHTTPSessionManager : AFURLSessionManager<NSSecureCoding, NSCopying> {
  /* instance variables */
  @"NSURL" _baseURL;
  @"AFHTTPRequestSerializer<AFURLRequestSerialization>" _requestSerializer;
}

@property (T@"NSURL",&,N,V_baseURL) baseURL;
@property (T@"AFHTTPRequestSerializer<AFURLRequestSerialization>",&,N,V_requestSerializer) requestSerializer;
@property (T@"AFHTTPResponseSerializer<AFURLResponseSerialization>",&,D,N) responseSerializer;
@property (T@"AFSecurityPolicy",&,D,N) securityPolicy;

/* class methods */
-[AFHTTPSessionManager manager];
-[AFHTTPSessionManager supportsSecureCoding];

/* instance methods */
-[AFHTTPSessionManager init];
-[AFHTTPSessionManager initWithBaseURL:];
-[AFHTTPSessionManager initWithSessionConfiguration:];
-[AFHTTPSessionManager initWithBaseURL:sessionConfiguration:];
-[AFHTTPSessionManager setRequestSerializer:];
-[AFHTTPSessionManager setResponseSerializer:];
-[AFHTTPSessionManager setSecurityPolicy:];
-[AFHTTPSessionManager GET:parameters:headers:progress:success:failure:];
-[AFHTTPSessionManager HEAD:parameters:headers:success:failure:];
-[AFHTTPSessionManager POST:parameters:headers:progress:success:failure:];
-[AFHTTPSessionManager POST:parameters:headers:constructingBodyWithBlock:progress:success:failure:];
-[AFHTTPSessionManager PUT:parameters:headers:success:failure:];
-[AFHTTPSessionManager PATCH:parameters:headers:success:failure:];
-[AFHTTPSessionManager DELETE:parameters:headers:success:failure:];
-[AFHTTPSessionManager dataTaskWithHTTPMethod:URLString:parameters:headers:uploadProgress:downloadProgress:success:failure:];
-[AFHTTPSessionManager description];
-[AFHTTPSessionManager initWithCoder:];
-[AFHTTPSessionManager encodeWithCoder:];
-[AFHTTPSessionManager copyWithZone:];
-[AFHTTPSessionManager baseURL];
-[AFHTTPSessionManager setBaseURL:];
-[AFHTTPSessionManager requestSerializer];
@end

@interface AFImageResponseSerializer : AFHTTPResponseSerializer {
  /* instance variables */
  B _automaticallyInflatesResponseImage;
  d _imageScale;
}

@property (Td,N,V_imageScale) imageScale;
@property (TB,N,V_automaticallyInflatesResponseImage) automaticallyInflatesResponseImage;

/* class methods */
-[AFImageResponseSerializer supportsSecureCoding];

/* instance methods */
-[AFImageResponseSerializer init];
-[AFImageResponseSerializer responseObjectForResponse:data:error:];
-[AFImageResponseSerializer initWithCoder:];
-[AFImageResponseSerializer encodeWithCoder:];
-[AFImageResponseSerializer copyWithZone:];
-[AFImageResponseSerializer imageScale];
-[AFImageResponseSerializer setImageScale:];
-[AFImageResponseSerializer automaticallyInflatesResponseImage];
-[AFImageResponseSerializer setAutomaticallyInflatesResponseImage:];
@end

@interface AFJSONRequestSerializer : AFHTTPRequestSerializer {
  /* instance variables */
  Q _writingOptions;
}

@property (TQ,N,V_writingOptions) writingOptions;

/* class methods */
-[AFJSONRequestSerializer serializer];
-[AFJSONRequestSerializer serializerWithWritingOptions:];

/* instance methods */
-[AFJSONRequestSerializer requestBySerializingRequest:withParameters:error:];
-[AFJSONRequestSerializer initWithCoder:];
-[AFJSONRequestSerializer encodeWithCoder:];
-[AFJSONRequestSerializer copyWithZone:];
-[AFJSONRequestSerializer writingOptions];
-[AFJSONRequestSerializer setWritingOptions:];
@end

@interface AFJSONResponseSerializer : AFHTTPResponseSerializer {
  /* instance variables */
  B _removesKeysWithNullValues;
  Q _readingOptions;
}

@property (TQ,N,V_readingOptions) readingOptions;
@property (TB,N,V_removesKeysWithNullValues) removesKeysWithNullValues;

/* class methods */
-[AFJSONResponseSerializer serializer];
-[AFJSONResponseSerializer serializerWithReadingOptions:];
-[AFJSONResponseSerializer supportsSecureCoding];

/* instance methods */
-[AFJSONResponseSerializer init];
-[AFJSONResponseSerializer responseObjectForResponse:data:error:];
-[AFJSONResponseSerializer initWithCoder:];
-[AFJSONResponseSerializer encodeWithCoder:];
-[AFJSONResponseSerializer copyWithZone:];
-[AFJSONResponseSerializer readingOptions];
-[AFJSONResponseSerializer setReadingOptions:];
-[AFJSONResponseSerializer removesKeysWithNullValues];
-[AFJSONResponseSerializer setRemovesKeysWithNullValues:];
@end

@interface AFMultipartBodyStream : <NSCopying, NSStreamDelegate> {
  /* instance variables */
  @"<NSStreamDelegate>" delegate;
  Q streamStatus;
  @"NSError" streamError;
  Q _numberOfBytesInPacket;
  d _delay;
  @"NSInputStream" _inputStream;
  Q _stringEncoding;
  @"NSMutableArray" _HTTPBodyParts;
  @"NSEnumerator" _HTTPBodyPartEnumerator;
  @"AFHTTPBodyPart" _currentHTTPBodyPart;
  @"NSOutputStream" _outputStream;
  @"NSMutableData" _buffer;
}

@property (TQ,N,V_stringEncoding) stringEncoding;
@property (T@"NSMutableArray",&,N,V_HTTPBodyParts) HTTPBodyParts;
@property (T@"NSEnumerator",&,N,V_HTTPBodyPartEnumerator) HTTPBodyPartEnumerator;
@property (T@"AFHTTPBodyPart",&,N,V_currentHTTPBodyPart) currentHTTPBodyPart;
@property (T@"NSOutputStream",&,N,V_outputStream) outputStream;
@property (T@"NSMutableData",&,N,V_buffer) buffer;
@property (TQ,N,V_numberOfBytesInPacket) numberOfBytesInPacket;
@property (Td,N,V_delay) delay;
@property (T@"NSInputStream",&,N,V_inputStream) inputStream;
@property (TQ,R,N) contentLength;
@property (TB,R,N,GisEmpty) empty;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[AFMultipartBodyStream initWithStringEncoding:];
-[AFMultipartBodyStream setInitialAndFinalBoundaries];
-[AFMultipartBodyStream appendHTTPBodyPart:];
-[AFMultipartBodyStream isEmpty];
-[AFMultipartBodyStream read:maxLength:];
-[AFMultipartBodyStream getBuffer:length:];
-[AFMultipartBodyStream hasBytesAvailable];
-[AFMultipartBodyStream open];
-[AFMultipartBodyStream close];
-[AFMultipartBodyStream propertyForKey:];
-[AFMultipartBodyStream setProperty:forKey:];
-[AFMultipartBodyStream scheduleInRunLoop:forMode:];
-[AFMultipartBodyStream removeFromRunLoop:forMode:];
-[AFMultipartBodyStream contentLength];
-[AFMultipartBodyStream _scheduleInCFRunLoop:forMode:];
-[AFMultipartBodyStream _unscheduleFromCFRunLoop:forMode:];
-[AFMultipartBodyStream _setCFClientFlags:callback:context:];
-[AFMultipartBodyStream copyWithZone:];
-[AFMultipartBodyStream delegate];
-[AFMultipartBodyStream setDelegate:];
-[AFMultipartBodyStream streamStatus];
-[AFMultipartBodyStream setStreamStatus:];
-[AFMultipartBodyStream streamError];
-[AFMultipartBodyStream setStreamError:];
-[AFMultipartBodyStream numberOfBytesInPacket];
-[AFMultipartBodyStream setNumberOfBytesInPacket:];
-[AFMultipartBodyStream delay];
-[AFMultipartBodyStream setDelay:];
-[AFMultipartBodyStream inputStream];
-[AFMultipartBodyStream setInputStream:];
-[AFMultipartBodyStream stringEncoding];
-[AFMultipartBodyStream setStringEncoding:];
-[AFMultipartBodyStream HTTPBodyParts];
-[AFMultipartBodyStream setHTTPBodyParts:];
-[AFMultipartBodyStream HTTPBodyPartEnumerator];
-[AFMultipartBodyStream setHTTPBodyPartEnumerator:];
-[AFMultipartBodyStream currentHTTPBodyPart];
-[AFMultipartBodyStream setCurrentHTTPBodyPart:];
-[AFMultipartBodyStream outputStream];
-[AFMultipartBodyStream setOutputStream:];
-[AFMultipartBodyStream buffer];
-[AFMultipartBodyStream setBuffer:];
@end

@interface AFNetworkReachabilityManager :  {
  /* instance variables */
  q _networkReachabilityStatus;
  ^{__SCNetworkReachability=} _networkReachability;
  @? _networkReachabilityStatusBlock;
}

@property (T^{__SCNetworkReachability=},R,N,V_networkReachability) networkReachability;
@property (Tq,N,V_networkReachabilityStatus) networkReachabilityStatus;
@property (T@?,C,N,V_networkReachabilityStatusBlock) networkReachabilityStatusBlock;
@property (TB,R,N,GisReachable) reachable;
@property (TB,R,N,GisReachableViaWWAN) reachableViaWWAN;
@property (TB,R,N,GisReachableViaWiFi) reachableViaWiFi;

/* class methods */
-[AFNetworkReachabilityManager sharedManager];
-[AFNetworkReachabilityManager managerForDomain:];
-[AFNetworkReachabilityManager managerForAddress:];
-[AFNetworkReachabilityManager manager];
-[AFNetworkReachabilityManager keyPathsForValuesAffectingValueForKey:];

/* instance methods */
-[AFNetworkReachabilityManager initWithReachability:];
-[AFNetworkReachabilityManager init];
-[AFNetworkReachabilityManager dealloc];
-[AFNetworkReachabilityManager isReachable];
-[AFNetworkReachabilityManager isReachableViaWWAN];
-[AFNetworkReachabilityManager isReachableViaWiFi];
-[AFNetworkReachabilityManager startMonitoring];
-[AFNetworkReachabilityManager stopMonitoring];
-[AFNetworkReachabilityManager localizedNetworkReachabilityStatusString];
-[AFNetworkReachabilityManager setReachabilityStatusChangeBlock:];
-[AFNetworkReachabilityManager networkReachabilityStatus];
-[AFNetworkReachabilityManager setNetworkReachabilityStatus:];
-[AFNetworkReachabilityManager networkReachability];
-[AFNetworkReachabilityManager networkReachabilityStatusBlock];
-[AFNetworkReachabilityManager setNetworkReachabilityStatusBlock:];
@end

@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer {
  /* instance variables */
  Q _format;
  Q _writeOptions;
}

@property (TQ,N,V_format) format;
@property (TQ,N,V_writeOptions) writeOptions;

/* class methods */
-[AFPropertyListRequestSerializer serializer];
-[AFPropertyListRequestSerializer serializerWithFormat:writeOptions:];

/* instance methods */
-[AFPropertyListRequestSerializer requestBySerializingRequest:withParameters:error:];
-[AFPropertyListRequestSerializer initWithCoder:];
-[AFPropertyListRequestSerializer encodeWithCoder:];
-[AFPropertyListRequestSerializer copyWithZone:];
-[AFPropertyListRequestSerializer format];
-[AFPropertyListRequestSerializer setFormat:];
-[AFPropertyListRequestSerializer writeOptions];
-[AFPropertyListRequestSerializer setWriteOptions:];
@end

@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer {
  /* instance variables */
  Q _format;
  Q _readOptions;
}

@property (TQ,N,V_format) format;
@property (TQ,N,V_readOptions) readOptions;

/* class methods */
-[AFPropertyListResponseSerializer serializer];
-[AFPropertyListResponseSerializer serializerWithFormat:readOptions:];
-[AFPropertyListResponseSerializer supportsSecureCoding];

/* instance methods */
-[AFPropertyListResponseSerializer init];
-[AFPropertyListResponseSerializer responseObjectForResponse:data:error:];
-[AFPropertyListResponseSerializer initWithCoder:];
-[AFPropertyListResponseSerializer encodeWithCoder:];
-[AFPropertyListResponseSerializer copyWithZone:];
-[AFPropertyListResponseSerializer format];
-[AFPropertyListResponseSerializer setFormat:];
-[AFPropertyListResponseSerializer readOptions];
-[AFPropertyListResponseSerializer setReadOptions:];
@end

@interface AFQueryStringPair :  {
  /* instance variables */
  @ _field;
  @ _value;
}

@property (T@,&,N,V_field) field;
@property (T@,&,N,V_value) value;

/* instance methods */
-[AFQueryStringPair initWithField:value:];
-[AFQueryStringPair URLEncodedStringValue];
-[AFQueryStringPair field];
-[AFQueryStringPair setField:];
-[AFQueryStringPair value];
-[AFQueryStringPair setValue:];
@end

@interface AFSecurityPolicy : <NSSecureCoding, NSCopying> {
  /* instance variables */
  B _allowInvalidCertificates;
  B _validatesDomainName;
  Q _SSLPinningMode;
  @"NSSet" _pinnedCertificates;
  @"NSSet" _pinnedPublicKeys;
}

@property (TQ,N,V_SSLPinningMode) SSLPinningMode;
@property (T@"NSSet",&,N,V_pinnedPublicKeys) pinnedPublicKeys;
@property (T@"NSSet",&,N,V_pinnedCertificates) pinnedCertificates;
@property (TB,N,V_allowInvalidCertificates) allowInvalidCertificates;
@property (TB,N,V_validatesDomainName) validatesDomainName;

/* class methods */
-[AFSecurityPolicy certificatesInBundle:];
-[AFSecurityPolicy defaultPolicy];
-[AFSecurityPolicy policyWithPinningMode:];
-[AFSecurityPolicy policyWithPinningMode:withPinnedCertificates:];
-[AFSecurityPolicy keyPathsForValuesAffectingPinnedPublicKeys];
-[AFSecurityPolicy supportsSecureCoding];

/* instance methods */
-[AFSecurityPolicy init];
-[AFSecurityPolicy setPinnedCertificates:];
-[AFSecurityPolicy evaluateServerTrust:forDomain:];
-[AFSecurityPolicy initWithCoder:];
-[AFSecurityPolicy encodeWithCoder:];
-[AFSecurityPolicy copyWithZone:];
-[AFSecurityPolicy SSLPinningMode];
-[AFSecurityPolicy setSSLPinningMode:];
-[AFSecurityPolicy pinnedCertificates];
-[AFSecurityPolicy allowInvalidCertificates];
-[AFSecurityPolicy setAllowInvalidCertificates:];
-[AFSecurityPolicy validatesDomainName];
-[AFSecurityPolicy setValidatesDomainName:];
-[AFSecurityPolicy pinnedPublicKeys];
-[AFSecurityPolicy setPinnedPublicKeys:];
@end

@interface AFStreamingMultipartFormData : <AFMultipartFormData> {
  /* instance variables */
  @"NSMutableURLRequest" _request;
  Q _stringEncoding;
  @"NSString" _boundary;
  @"AFMultipartBodyStream" _bodyStream;
}

@property (T@"NSMutableURLRequest",C,N,V_request) request;
@property (TQ,N,V_stringEncoding) stringEncoding;
@property (T@"NSString",C,N,V_boundary) boundary;
@property (T@"AFMultipartBodyStream",&,N,V_bodyStream) bodyStream;

/* instance methods */
-[AFStreamingMultipartFormData initWithURLRequest:stringEncoding:];
-[AFStreamingMultipartFormData setRequest:];
-[AFStreamingMultipartFormData appendPartWithFileURL:name:error:];
-[AFStreamingMultipartFormData appendPartWithFileURL:name:fileName:mimeType:error:];
-[AFStreamingMultipartFormData appendPartWithInputStream:name:fileName:length:mimeType:];
-[AFStreamingMultipartFormData appendPartWithFileData:name:fileName:mimeType:];
-[AFStreamingMultipartFormData appendPartWithFormData:name:];
-[AFStreamingMultipartFormData appendPartWithHeaders:body:];
-[AFStreamingMultipartFormData throttleBandwidthWithPacketSize:delay:];
-[AFStreamingMultipartFormData requestByFinalizingMultipartFormData];
-[AFStreamingMultipartFormData request];
-[AFStreamingMultipartFormData stringEncoding];
-[AFStreamingMultipartFormData setStringEncoding:];
-[AFStreamingMultipartFormData boundary];
-[AFStreamingMultipartFormData setBoundary:];
-[AFStreamingMultipartFormData bodyStream];
-[AFStreamingMultipartFormData setBodyStream:];
@end

@interface AFURLSessionManager : <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSSecureCoding, NSCopying> {
  /* instance variables */
  @"NSOperationQueue" _operationQueue;
  @"<AFURLResponseSerialization>" _responseSerializer;
  @"AFSecurityPolicy" _securityPolicy;
  @"AFNetworkReachabilityManager" _reachabilityManager;
  @"NSObject<OS_dispatch_queue>" _completionQueue;
  @"NSObject<OS_dispatch_group>" _completionGroup;
  @"NSURLSessionConfiguration" _sessionConfiguration;
  @"NSURLSession" _session;
  @"NSMutableDictionary" _mutableTaskDelegatesKeyedByTaskIdentifier;
  @"NSLock" _lock;
  @? _sessionDidBecomeInvalid;
  @? _sessionDidReceiveAuthenticationChallenge;
  @? _didFinishEventsForBackgroundURLSession;
  @? _taskWillPerformHTTPRedirection;
  @? _authenticationChallengeHandler;
  @? _taskNeedNewBodyStream;
  @? _taskDidSendBodyData;
  @? _taskDidComplete;
  @? _taskDidFinishCollectingMetrics;
  @? _dataTaskDidReceiveResponse;
  @? _dataTaskDidBecomeDownloadTask;
  @? _dataTaskDidReceiveData;
  @? _dataTaskWillCacheResponse;
  @? _downloadTaskDidFinishDownloading;
  @? _downloadTaskDidWriteData;
  @? _downloadTaskDidResume;
}

@property (T@"NSURLSessionConfiguration",&,N,V_sessionConfiguration) sessionConfiguration;
@property (T@"NSOperationQueue",&,N,V_operationQueue) operationQueue;
@property (T@"NSURLSession",&,N,V_session) session;
@property (T@"NSMutableDictionary",&,N,V_mutableTaskDelegatesKeyedByTaskIdentifier) mutableTaskDelegatesKeyedByTaskIdentifier;
@property (T@"NSString",R,C,N) taskDescriptionForSessionTasks;
@property (T@"NSLock",&,N,V_lock) lock;
@property (T@?,C,N,V_sessionDidBecomeInvalid) sessionDidBecomeInvalid;
@property (T@?,C,N,V_sessionDidReceiveAuthenticationChallenge) sessionDidReceiveAuthenticationChallenge;
@property (T@?,C,N,V_didFinishEventsForBackgroundURLSession) didFinishEventsForBackgroundURLSession;
@property (T@?,C,N,V_taskWillPerformHTTPRedirection) taskWillPerformHTTPRedirection;
@property (T@?,C,N,V_authenticationChallengeHandler) authenticationChallengeHandler;
@property (T@?,C,N,V_taskNeedNewBodyStream) taskNeedNewBodyStream;
@property (T@?,C,N,V_taskDidSendBodyData) taskDidSendBodyData;
@property (T@?,C,N,V_taskDidComplete) taskDidComplete;
@property (T@?,C,N,V_taskDidFinishCollectingMetrics) taskDidFinishCollectingMetrics;
@property (T@?,C,N,V_dataTaskDidReceiveResponse) dataTaskDidReceiveResponse;
@property (T@?,C,N,V_dataTaskDidBecomeDownloadTask) dataTaskDidBecomeDownloadTask;
@property (T@?,C,N,V_dataTaskDidReceiveData) dataTaskDidReceiveData;
@property (T@?,C,N,V_dataTaskWillCacheResponse) dataTaskWillCacheResponse;
@property (T@?,C,N,V_downloadTaskDidFinishDownloading) downloadTaskDidFinishDownloading;
@property (T@?,C,N,V_downloadTaskDidWriteData) downloadTaskDidWriteData;
@property (T@?,C,N,V_downloadTaskDidResume) downloadTaskDidResume;
@property (T@"<AFURLResponseSerialization>",&,N,V_responseSerializer) responseSerializer;
@property (T@"AFSecurityPolicy",&,N,V_securityPolicy) securityPolicy;
@property (T@"AFNetworkReachabilityManager",&,N,V_reachabilityManager) reachabilityManager;
@property (T@"NSArray",R,N) tasks;
@property (T@"NSArray",R,N) dataTasks;
@property (T@"NSArray",R,N) uploadTasks;
@property (T@"NSArray",R,N) downloadTasks;
@property (T@"NSObject<OS_dispatch_queue>",&,N,V_completionQueue) completionQueue;
@property (T@"NSObject<OS_dispatch_group>",&,N,V_completionGroup) completionGroup;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[AFURLSessionManager supportsSecureCoding];

/* instance methods */
-[AFURLSessionManager init];
-[AFURLSessionManager initWithSessionConfiguration:];
-[AFURLSessionManager dealloc];
-[AFURLSessionManager session];
-[AFURLSessionManager taskDescriptionForSessionTasks];
-[AFURLSessionManager taskDidResume:];
-[AFURLSessionManager taskDidSuspend:];
-[AFURLSessionManager delegateForTask:];
-[AFURLSessionManager setDelegate:forTask:];
-[AFURLSessionManager addDelegateForDataTask:uploadProgress:downloadProgress:completionHandler:];
-[AFURLSessionManager addDelegateForUploadTask:progress:completionHandler:];
-[AFURLSessionManager addDelegateForDownloadTask:progress:destination:completionHandler:];
-[AFURLSessionManager removeDelegateForTask:];
-[AFURLSessionManager tasksForKeyPath:];
-[AFURLSessionManager tasks];
-[AFURLSessionManager dataTasks];
-[AFURLSessionManager uploadTasks];
-[AFURLSessionManager downloadTasks];
-[AFURLSessionManager invalidateSessionCancelingTasks:resetSession:];
-[AFURLSessionManager setResponseSerializer:];
-[AFURLSessionManager addNotificationObserverForTask:];
-[AFURLSessionManager removeNotificationObserverForTask:];
-[AFURLSessionManager dataTaskWithRequest:uploadProgress:downloadProgress:completionHandler:];
-[AFURLSessionManager uploadTaskWithRequest:fromFile:progress:completionHandler:];
-[AFURLSessionManager uploadTaskWithRequest:fromData:progress:completionHandler:];
-[AFURLSessionManager uploadTaskWithStreamedRequest:progress:completionHandler:];
-[AFURLSessionManager downloadTaskWithRequest:progress:destination:completionHandler:];
-[AFURLSessionManager downloadTaskWithResumeData:progress:destination:completionHandler:];
-[AFURLSessionManager uploadProgressForTask:];
-[AFURLSessionManager downloadProgressForTask:];
-[AFURLSessionManager setSessionDidBecomeInvalidBlock:];
-[AFURLSessionManager setSessionDidReceiveAuthenticationChallengeBlock:];
-[AFURLSessionManager setDidFinishEventsForBackgroundURLSessionBlock:];
-[AFURLSessionManager setTaskNeedNewBodyStreamBlock:];
-[AFURLSessionManager setTaskWillPerformHTTPRedirectionBlock:];
-[AFURLSessionManager setTaskDidSendBodyDataBlock:];
-[AFURLSessionManager setTaskDidCompleteBlock:];
-[AFURLSessionManager setTaskDidFinishCollectingMetricsBlock:];
-[AFURLSessionManager setDataTaskDidReceiveResponseBlock:];
-[AFURLSessionManager setDataTaskDidBecomeDownloadTaskBlock:];
-[AFURLSessionManager setDataTaskDidReceiveDataBlock:];
-[AFURLSessionManager setDataTaskWillCacheResponseBlock:];
-[AFURLSessionManager setDownloadTaskDidFinishDownloadingBlock:];
-[AFURLSessionManager setDownloadTaskDidWriteDataBlock:];
-[AFURLSessionManager setDownloadTaskDidResumeBlock:];
-[AFURLSessionManager description];
-[AFURLSessionManager respondsToSelector:];
-[AFURLSessionManager URLSession:didBecomeInvalidWithError:];
-[AFURLSessionManager URLSession:didReceiveChallenge:completionHandler:];
-[AFURLSessionManager URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:];
-[AFURLSessionManager URLSession:task:didReceiveChallenge:completionHandler:];
-[AFURLSessionManager serverTrustErrorForServerTrust:url:];
-[AFURLSessionManager URLSession:task:needNewBodyStream:];
-[AFURLSessionManager URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:];
-[AFURLSessionManager URLSession:task:didCompleteWithError:];
-[AFURLSessionManager URLSession:task:didFinishCollectingMetrics:];
-[AFURLSessionManager URLSession:dataTask:didReceiveResponse:completionHandler:];
-[AFURLSessionManager URLSession:dataTask:didBecomeDownloadTask:];
-[AFURLSessionManager URLSession:dataTask:didReceiveData:];
-[AFURLSessionManager URLSession:dataTask:willCacheResponse:completionHandler:];
-[AFURLSessionManager URLSessionDidFinishEventsForBackgroundURLSession:];
-[AFURLSessionManager URLSession:downloadTask:didFinishDownloadingToURL:];
-[AFURLSessionManager URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:];
-[AFURLSessionManager URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:];
-[AFURLSessionManager initWithCoder:];
-[AFURLSessionManager encodeWithCoder:];
-[AFURLSessionManager copyWithZone:];
-[AFURLSessionManager operationQueue];
-[AFURLSessionManager setOperationQueue:];
-[AFURLSessionManager responseSerializer];
-[AFURLSessionManager securityPolicy];
-[AFURLSessionManager setSecurityPolicy:];
-[AFURLSessionManager reachabilityManager];
-[AFURLSessionManager setReachabilityManager:];
-[AFURLSessionManager completionQueue];
-[AFURLSessionManager setCompletionQueue:];
-[AFURLSessionManager completionGroup];
-[AFURLSessionManager setCompletionGroup:];
-[AFURLSessionManager sessionConfiguration];
-[AFURLSessionManager setSessionConfiguration:];
-[AFURLSessionManager setSession:];
-[AFURLSessionManager mutableTaskDelegatesKeyedByTaskIdentifier];
-[AFURLSessionManager setMutableTaskDelegatesKeyedByTaskIdentifier:];
-[AFURLSessionManager lock];
-[AFURLSessionManager setLock:];
-[AFURLSessionManager sessionDidBecomeInvalid];
-[AFURLSessionManager setSessionDidBecomeInvalid:];
-[AFURLSessionManager sessionDidReceiveAuthenticationChallenge];
-[AFURLSessionManager setSessionDidReceiveAuthenticationChallenge:];
-[AFURLSessionManager didFinishEventsForBackgroundURLSession];
-[AFURLSessionManager setDidFinishEventsForBackgroundURLSession:];
-[AFURLSessionManager taskWillPerformHTTPRedirection];
-[AFURLSessionManager setTaskWillPerformHTTPRedirection:];
-[AFURLSessionManager authenticationChallengeHandler];
-[AFURLSessionManager setAuthenticationChallengeHandler:];
-[AFURLSessionManager taskNeedNewBodyStream];
-[AFURLSessionManager setTaskNeedNewBodyStream:];
-[AFURLSessionManager taskDidSendBodyData];
-[AFURLSessionManager setTaskDidSendBodyData:];
-[AFURLSessionManager taskDidComplete];
-[AFURLSessionManager setTaskDidComplete:];
-[AFURLSessionManager taskDidFinishCollectingMetrics];
-[AFURLSessionManager setTaskDidFinishCollectingMetrics:];
-[AFURLSessionManager dataTaskDidReceiveResponse];
-[AFURLSessionManager setDataTaskDidReceiveResponse:];
-[AFURLSessionManager dataTaskDidBecomeDownloadTask];
-[AFURLSessionManager setDataTaskDidBecomeDownloadTask:];
-[AFURLSessionManager dataTaskDidReceiveData];
-[AFURLSessionManager setDataTaskDidReceiveData:];
-[AFURLSessionManager dataTaskWillCacheResponse];
-[AFURLSessionManager setDataTaskWillCacheResponse:];
-[AFURLSessionManager downloadTaskDidFinishDownloading];
-[AFURLSessionManager setDownloadTaskDidFinishDownloading:];
-[AFURLSessionManager downloadTaskDidWriteData];
-[AFURLSessionManager setDownloadTaskDidWriteData:];
-[AFURLSessionManager downloadTaskDidResume];
-[AFURLSessionManager setDownloadTaskDidResume:];
@end

@interface AFURLSessionManagerTaskDelegate : <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {
  /* instance variables */
  @"AFURLSessionManager" _manager;
  @"NSMutableData" _mutableData;
  @"NSProgress" _uploadProgress;
  @"NSProgress" _downloadProgress;
  @"NSURL" _downloadFileURL;
  @"NSURLSessionTaskMetrics" _sessionTaskMetrics;
  @? _downloadTaskDidFinishDownloading;
  @? _uploadProgressBlock;
  @? _downloadProgressBlock;
  @? _completionHandler;
}

@property (T@"AFURLSessionManager",W,N,V_manager) manager;
@property (T@"NSMutableData",&,N,V_mutableData) mutableData;
@property (T@"NSProgress",&,N,V_uploadProgress) uploadProgress;
@property (T@"NSProgress",&,N,V_downloadProgress) downloadProgress;
@property (T@"NSURL",C,N,V_downloadFileURL) downloadFileURL;
@property (T@"NSURLSessionTaskMetrics",&,N,V_sessionTaskMetrics) sessionTaskMetrics;
@property (T@?,C,N,V_downloadTaskDidFinishDownloading) downloadTaskDidFinishDownloading;
@property (T@?,C,N,V_uploadProgressBlock) uploadProgressBlock;
@property (T@?,C,N,V_downloadProgressBlock) downloadProgressBlock;
@property (T@?,C,N,V_completionHandler) completionHandler;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[AFURLSessionManagerTaskDelegate initWithTask:];
-[AFURLSessionManagerTaskDelegate dealloc];
-[AFURLSessionManagerTaskDelegate observeValueForKeyPath:ofObject:change:context:];
-[AFURLSessionManagerTaskDelegate URLSession:task:didCompleteWithError:];
-[AFURLSessionManagerTaskDelegate URLSession:task:didFinishCollectingMetrics:];
-[AFURLSessionManagerTaskDelegate URLSession:dataTask:didReceiveData:];
-[AFURLSessionManagerTaskDelegate URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:];
-[AFURLSessionManagerTaskDelegate URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:];
-[AFURLSessionManagerTaskDelegate URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:];
-[AFURLSessionManagerTaskDelegate URLSession:downloadTask:didFinishDownloadingToURL:];
-[AFURLSessionManagerTaskDelegate manager];
-[AFURLSessionManagerTaskDelegate setManager:];
-[AFURLSessionManagerTaskDelegate mutableData];
-[AFURLSessionManagerTaskDelegate setMutableData:];
-[AFURLSessionManagerTaskDelegate uploadProgress];
-[AFURLSessionManagerTaskDelegate setUploadProgress:];
-[AFURLSessionManagerTaskDelegate downloadProgress];
-[AFURLSessionManagerTaskDelegate setDownloadProgress:];
-[AFURLSessionManagerTaskDelegate downloadFileURL];
-[AFURLSessionManagerTaskDelegate setDownloadFileURL:];
-[AFURLSessionManagerTaskDelegate sessionTaskMetrics];
-[AFURLSessionManagerTaskDelegate setSessionTaskMetrics:];
-[AFURLSessionManagerTaskDelegate downloadTaskDidFinishDownloading];
-[AFURLSessionManagerTaskDelegate setDownloadTaskDidFinishDownloading:];
-[AFURLSessionManagerTaskDelegate uploadProgressBlock];
-[AFURLSessionManagerTaskDelegate setUploadProgressBlock:];
-[AFURLSessionManagerTaskDelegate downloadProgressBlock];
-[AFURLSessionManagerTaskDelegate setDownloadProgressBlock:];
-[AFURLSessionManagerTaskDelegate completionHandler];
-[AFURLSessionManagerTaskDelegate setCompletionHandler:];
@end

@interface AFXMLParserResponseSerializer : AFHTTPResponseSerializer
/* class methods */
-[AFXMLParserResponseSerializer serializer];

/* instance methods */
-[AFXMLParserResponseSerializer init];
-[AFXMLParserResponseSerializer responseObjectForResponse:data:error:];
@end

@interface AVFAudioReceiver :  {
  /* instance variables */
  ^{?=^{AVClass}iiqq{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}@@{AVRational=ii}iiiiiiiii**iiiiiiii^iii@@@^{opaqueCMSampleBuffer}^{opaqueCMSampleBuffer}} _context;
}

/* instance methods */
-[AVFAudioReceiver initWithContext:];
-[AVFAudioReceiver captureOutput:didOutputSampleBuffer:fromConnection:];
@end

@interface AVFFrameReceiver :  {
  /* instance variables */
  ^{?=^{AVClass}iiqq{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}@@{AVRational=ii}iiiiiiiii**iiiiiiii^iii@@@^{opaqueCMSampleBuffer}^{opaqueCMSampleBuffer}} _context;
}

/* instance methods */
-[AVFFrameReceiver initWithContext:];
-[AVFFrameReceiver captureOutput:didOutputSampleBuffer:fromConnection:];
@end

@interface AccountsCell : FRPCell {
  /* instance variables */
  @"UIViewController" _vc;
  @"NSString" _user;
  @"NSString" _user2;
  @"UserButtonCell" userButton;
  @"UserButtonCell" donationButton;
  @"UserButtonCell" designerButton;
}

/* class methods */
-[AccountsCell initWithColor:twitter:label:designer:designerLabel:designerImage:bundlePath:vc:];

/* instance methods */
-[AccountsCell initWithColor:twitter:label:designer:designerLabel:designerImage:bundlePath:vc:];
-[AccountsCell buttonDidTap:];
-[AccountsCell didTapDonation];
-[AccountsCell setSelected:animated:];
-[AccountsCell urlForTwitterUsername:];
@end

@interface ArchDetect : 
/* class methods */
-[ArchDetect initialize];
-[ArchDetect getCpuArch];
-[ArchDetect getArch];
-[ArchDetect isLTSBuild];
@end

@interface ArtworkImageView :  {
  /* instance variables */
  @"NSLayoutConstraint" widthConstraint;
  @"UIImageView" _imageView;
}

@property (T@"UIImageView",&,N,V_imageView) imageView;

/* instance methods */
-[ArtworkImageView initWithImage:];
-[ArtworkImageView layoutSubviews];
-[ArtworkImageView setImage:];
-[ArtworkImageView imageView];
-[ArtworkImageView setImageView:];
@end

@interface AtomicLong :  {
  /* instance variables */
  @"NSRecursiveLock" lock;
  q value;
}

/* instance methods */
-[AtomicLong initWithInitialValue:];
-[AtomicLong incrementAndGet];
@end

@interface BRYSerialAnimationQueue :  {
  /* instance variables */
  @"NSObject<OS_dispatch_queue>" _queue;
  @"NSObject<OS_dispatch_semaphore>" _semaphore;
}

@property (T@"NSObject<OS_dispatch_queue>",&,N,V_queue) queue;
@property (T@"NSObject<OS_dispatch_semaphore>",&,N,V_semaphore) semaphore;

/* instance methods */
-[BRYSerialAnimationQueue init];
-[BRYSerialAnimationQueue animateWithDuration:delay:options:animations:completion:];
-[BRYSerialAnimationQueue animateWithDuration:animations:completion:];
-[BRYSerialAnimationQueue animateWithDuration:animations:];
-[BRYSerialAnimationQueue animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:];
-[BRYSerialAnimationQueue performAnimationsSerially:];
-[BRYSerialAnimationQueue runCompletionBlock:animationDidFinish:];
-[BRYSerialAnimationQueue queue];
-[BRYSerialAnimationQueue setQueue:];
-[BRYSerialAnimationQueue semaphore];
-[BRYSerialAnimationQueue setSemaphore:];
@end

@interface CallbackData :  {
  /* instance variables */
  i type;
  q executionId;
  i logLevel;
  @"NSString" logData;
  i statisticsFrameNumber;
  f statisticsFps;
  f statisticsQuality;
  q statisticsSize;
  i statisticsTime;
  d statisticsBitrate;
  d statisticsSpeed;
}

/* instance methods */
-[CallbackData initWithId:logLevel:data:];
-[CallbackData initWithId:videoFrameNumber:fps:quality:size:time:bitrate:speed:];
-[CallbackData getType];
-[CallbackData getExecutionId];
-[CallbackData getLogLevel];
-[CallbackData getLogData];
-[CallbackData getStatisticsFrameNumber];
-[CallbackData getStatisticsFps];
-[CallbackData getStatisticsQuality];
-[CallbackData getStatisticsSize];
-[CallbackData getStatisticsTime];
-[CallbackData getStatisticsBitrate];
-[CallbackData getStatisticsSpeed];
@end

@interface DownloadItem : <NSCoding> {
  /* instance variables */
  f _progress;
  i _remainingTime;
  i _type;
  @"NSString" _downloadIdentifier;
  @"NSString" _videoID;
  @"NSString" _filePath;
  @"NSString" _cachedPath;
  @"NSURL" _remoteURL;
  @"xYouItem" _xYouItem;
  @"NSURLSessionDownloadTask" _downloadTask;
  @"NSDate" _downloadStartDate;
  Q _status;
  @"NSError" _error;
  @"NSString" _totalSize;
  @"NSString" _downloadedSize;
  @"NSString" _speed;
}

@property (T@"NSString",&,N,V_downloadIdentifier) downloadIdentifier;
@property (T@"NSString",&,N,V_videoID) videoID;
@property (T@"NSString",&,N,V_filePath) filePath;
@property (T@"NSString",&,N,V_cachedPath) cachedPath;
@property (T@"NSURL",&,N,V_remoteURL) remoteURL;
@property (T@"xYouItem",&,N,V_xYouItem) xYouItem;
@property (Ti,N,V_type) type;
@property (T@"NSURLSessionDownloadTask",&,N,V_downloadTask) downloadTask;
@property (T@"NSDate",&,N,V_downloadStartDate) downloadStartDate;
@property (TQ,N,V_status) status;
@property (T@"NSError",&,N,V_error) error;
@property (Tf,N,V_progress) progress;
@property (T@"NSString",&,N,V_totalSize) totalSize;
@property (T@"NSString",&,N,V_downloadedSize) downloadedSize;
@property (T@"NSString",&,N,V_speed) speed;
@property (Ti,N,V_remainingTime) remainingTime;

/* instance methods */
-[DownloadItem initWithVideoID:xYouItem:downloadID:url:filePath:cachedPath:type:];
-[DownloadItem dealloc];
-[DownloadItem encodeWithCoder:];
-[DownloadItem initWithCoder:];
-[DownloadItem createDownloadTask];
-[DownloadItem resumeDownloadTask];
-[DownloadItem cancelDownloadTask];
-[DownloadItem updateProgress];
-[DownloadItem appWillEnterForeground:];
-[DownloadItem description];
-[DownloadItem downloadIdentifier];
-[DownloadItem setDownloadIdentifier:];
-[DownloadItem videoID];
-[DownloadItem setVideoID:];
-[DownloadItem filePath];
-[DownloadItem setFilePath:];
-[DownloadItem cachedPath];
-[DownloadItem setCachedPath:];
-[DownloadItem remoteURL];
-[DownloadItem setRemoteURL:];
-[DownloadItem xYouItem];
-[DownloadItem setXYouItem:];
-[DownloadItem downloadTask];
-[DownloadItem setDownloadTask:];
-[DownloadItem downloadStartDate];
-[DownloadItem setDownloadStartDate:];
-[DownloadItem status];
-[DownloadItem setStatus:];
-[DownloadItem error];
-[DownloadItem setError:];
-[DownloadItem progress];
-[DownloadItem setProgress:];
-[DownloadItem totalSize];
-[DownloadItem setTotalSize:];
-[DownloadItem downloadedSize];
-[DownloadItem setDownloadedSize:];
-[DownloadItem speed];
-[DownloadItem setSpeed:];
-[DownloadItem remainingTime];
-[DownloadItem setRemainingTime:];
-[DownloadItem type];
-[DownloadItem setType:];
@end

@interface DownloadedCell :  {
  /* instance variables */
  @"UIVisualEffectView" effectView;
  B _isVideo;
  @"UITableView" _tableView;
  @"SSBouncyButton" _mainView;
  @"SSBouncyButton" _optionsButton;
  @"SSBouncyButton" _playButton;
  @"SSBouncyButton" _videoPlayButton;
  @"UIImageView" _albumImage;
  @"UIImage" _albumImagePlaceholder;
  @"__MarqueeLabel" _name;
  @"__MarqueeLabel" _channel;
  @"UILabel" _type;
  @"UILabel" _durationAndSize;
  @"UILabel" _date;
  @"UIImageView" _backgroundImageView;
  @"NSDictionary" _metadata;
}

@property (T@"UITableView",&,N,V_tableView) tableView;
@property (T@"SSBouncyButton",&,N,V_mainView) mainView;
@property (T@"SSBouncyButton",&,N,V_optionsButton) optionsButton;
@property (T@"SSBouncyButton",&,N,V_playButton) playButton;
@property (T@"SSBouncyButton",&,N,V_videoPlayButton) videoPlayButton;
@property (T@"UIImageView",&,N,V_albumImage) albumImage;
@property (T@"UIImage",&,N,V_albumImagePlaceholder) albumImagePlaceholder;
@property (T@"__MarqueeLabel",&,N,V_name) name;
@property (T@"__MarqueeLabel",&,N,V_channel) channel;
@property (T@"UILabel",&,N,V_type) type;
@property (T@"UILabel",&,N,V_durationAndSize) durationAndSize;
@property (T@"UILabel",&,N,V_date) date;
@property (T@"UIImageView",&,N,V_backgroundImageView) backgroundImageView;
@property (T@"NSDictionary",&,N,V_metadata) metadata;
@property (TB,N,V_isVideo) isVideo;

/* instance methods */
-[DownloadedCell initWithStyle:reuseIdentifier:];
-[DownloadedCell dealloc];
-[DownloadedCell layoutSubviews];
-[DownloadedCell isColorLight:];
-[DownloadedCell ytBackgroundColor];
-[DownloadedCell ytTextColor];
-[DownloadedCell updatePageStyles];
-[DownloadedCell tableView];
-[DownloadedCell setTableView:];
-[DownloadedCell mainView];
-[DownloadedCell setMainView:];
-[DownloadedCell optionsButton];
-[DownloadedCell setOptionsButton:];
-[DownloadedCell playButton];
-[DownloadedCell setPlayButton:];
-[DownloadedCell videoPlayButton];
-[DownloadedCell setVideoPlayButton:];
-[DownloadedCell albumImage];
-[DownloadedCell setAlbumImage:];
-[DownloadedCell albumImagePlaceholder];
-[DownloadedCell setAlbumImagePlaceholder:];
-[DownloadedCell name];
-[DownloadedCell setName:];
-[DownloadedCell channel];
-[DownloadedCell setChannel:];
-[DownloadedCell type];
-[DownloadedCell setType:];
-[DownloadedCell durationAndSize];
-[DownloadedCell setDurationAndSize:];
-[DownloadedCell date];
-[DownloadedCell setDate:];
-[DownloadedCell backgroundImageView];
-[DownloadedCell setBackgroundImageView:];
-[DownloadedCell metadata];
-[DownloadedCell setMetadata:];
-[DownloadedCell isVideo];
-[DownloadedCell setIsVideo:];
@end

@interface DownloadedVC : <UITableViewDataSource, UITableViewDelegate, UIImagePickerControllerDelegate> {
  /* instance variables */
  @"LottieHolder" emptyView;
  @"NSString" _searchKey;
  @"NSString" _searchedQuery;
  @"DownloadedCell" selectedCell;
  @"NSString" _sqlQuery;
  @"DownloadsPagerVC" _parentVC;
  @"UITableView" _tableView;
  @"NSMutableArray" _allDownloaded;
  @"NSMutableArray" _searchedDownloaded;
}

@property (T@"DownloadsPagerVC",&,N,V_parentVC) parentVC;
@property (T@"UITableView",&,N,V_tableView) tableView;
@property (T@"NSMutableArray",&,N,V_allDownloaded) allDownloaded;
@property (T@"NSMutableArray",&,N,V_searchedDownloaded) searchedDownloaded;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[DownloadedVC initWithParentVC:];
-[DownloadedVC dealloc];
-[DownloadedVC ytBackgroundColor];
-[DownloadedVC ytTextColor];
-[DownloadedVC updatePageStyles];
-[DownloadedVC initAllWithParentVC:];
-[DownloadedVC initAudiosWithParentVC:];
-[DownloadedVC initVideosWithParentVC:];
-[DownloadedVC initShortsWithParentVC:];
-[DownloadedVC reloadDownloadedVC];
-[DownloadedVC reloadTable];
-[DownloadedVC loadDownloaded];
-[DownloadedVC metadataKey:atIndex:];
-[DownloadedVC updateSearchResultsForKey:];
-[DownloadedVC shouldHideCell];
-[DownloadedVC shouldHideApplicationSpecifiers];
-[DownloadedVC numberOfSectionsInTableView:];
-[DownloadedVC tableView:numberOfRowsInSection:];
-[DownloadedVC tableView:titleForHeaderInSection:];
-[DownloadedVC tableView:canEditRowAtIndexPath:];
-[DownloadedVC tableView:cellForRowAtIndexPath:];
-[DownloadedVC prepareMusicCell:atIndexPath:];
-[DownloadedVC enableEditing:];
-[DownloadedVC selectedCellsOptions];
-[DownloadedVC close];
-[DownloadedVC play:];
-[DownloadedVC pause:];
-[DownloadedVC playVideo:];
-[DownloadedVC createTmpLinkURLToFileAtPath:withName:];
-[DownloadedVC cellOptionsButton:];
-[DownloadedVC video:didFinishSavingWithError:contextInfo:];
-[DownloadedVC imagePickerController:didFinishPickingMediaWithInfo:];
-[DownloadedVC convertDateFormate:];
-[DownloadedVC parentVC];
-[DownloadedVC setParentVC:];
-[DownloadedVC tableView];
-[DownloadedVC setTableView:];
-[DownloadedVC allDownloaded];
-[DownloadedVC setAllDownloaded:];
-[DownloadedVC searchedDownloaded];
-[DownloadedVC setSearchedDownloaded:];
@end

@interface DownloadingCell :  {
  /* instance variables */
  @"UIImage" albumImagePlaceholder;
  @"UIVisualEffectView" effectView;
  @"xYouItem" _xYouItem;
  @"DownloadingVC" _downloadingVC;
  @"SSBouncyButton" _optionsButton;
  @"DownloadingInfoButton" _infoButton;
  @"DownloadingInfoButton" _secondaryInfoButton;
  @"DownloadingConversionInfo" _conversionInfo;
  @"UIImageView" _albumImageView;
  @"__MarqueeLabel" _title;
  @"__MarqueeLabel" _channel;
  @"UILabel" _typeAndQuality;
  @"UIImageView" _backgroundImageView;
  @"UIImageView" _aVideoImage;
}

@property (T@"SSBouncyButton",&,N,V_optionsButton) optionsButton;
@property (T@"DownloadingInfoButton",&,N,V_infoButton) infoButton;
@property (T@"DownloadingInfoButton",&,N,V_secondaryInfoButton) secondaryInfoButton;
@property (T@"DownloadingConversionInfo",&,N,V_conversionInfo) conversionInfo;
@property (T@"UIImageView",&,N,V_albumImageView) albumImageView;
@property (T@"__MarqueeLabel",&,N,V_title) title;
@property (T@"__MarqueeLabel",&,N,V_channel) channel;
@property (T@"UILabel",&,N,V_typeAndQuality) typeAndQuality;
@property (T@"UIImageView",&,N,V_backgroundImageView) backgroundImageView;
@property (T@"UIImageView",&,N,V_aVideoImage) aVideoImage;
@property (T@"xYouItem",&,N,V_xYouItem) xYouItem;
@property (T@"DownloadingVC",&,N,V_downloadingVC) downloadingVC;

/* instance methods */
-[DownloadingCell initWithStyle:reuseIdentifier:];
-[DownloadingCell dealloc];
-[DownloadingCell updateCellInfo];
-[DownloadingCell updateAlbumeImageView];
-[DownloadingCell updateProgressWithNotification:];
-[DownloadingCell updateProgress];
-[DownloadingCell updateProgressForInfoButton:downloadItem:];
-[DownloadingCell updateConversionProgress];
-[DownloadingCell setPlaceholderImage];
-[DownloadingCell cellOptionsButton];
-[DownloadingCell isColorLight:];
-[DownloadingCell ytBackgroundColor];
-[DownloadingCell ytTextColor];
-[DownloadingCell updatePageStyles];
-[DownloadingCell xYouItem];
-[DownloadingCell setXYouItem:];
-[DownloadingCell downloadingVC];
-[DownloadingCell setDownloadingVC:];
-[DownloadingCell optionsButton];
-[DownloadingCell setOptionsButton:];
-[DownloadingCell infoButton];
-[DownloadingCell setInfoButton:];
-[DownloadingCell secondaryInfoButton];
-[DownloadingCell setSecondaryInfoButton:];
-[DownloadingCell conversionInfo];
-[DownloadingCell setConversionInfo:];
-[DownloadingCell albumImageView];
-[DownloadingCell setAlbumImageView:];
-[DownloadingCell title];
-[DownloadingCell setTitle:];
-[DownloadingCell channel];
-[DownloadingCell setChannel:];
-[DownloadingCell typeAndQuality];
-[DownloadingCell setTypeAndQuality:];
-[DownloadingCell backgroundImageView];
-[DownloadingCell setBackgroundImageView:];
-[DownloadingCell aVideoImage];
-[DownloadingCell setAVideoImage:];
@end

@interface DownloadingConversionInfo :  {
  /* instance variables */
  @"UIImageView" icon;
  @"UIImageView" progressImage;
  @"UIImageView" infoImage;
  @"UILabel" _progressLabel;
  @"__MarqueeLabel" _statusLabel;
  @"UIProgressView" _progressBar;
}

@property (T@"UILabel",&,N,V_progressLabel) progressLabel;
@property (T@"__MarqueeLabel",&,N,V_statusLabel) statusLabel;
@property (T@"UIProgressView",&,N,V_progressBar) progressBar;

/* instance methods */
-[DownloadingConversionInfo init];
-[DownloadingConversionInfo dealloc];
-[DownloadingConversionInfo ytBackgroundColor];
-[DownloadingConversionInfo ytTextColor];
-[DownloadingConversionInfo updatePageStyles];
-[DownloadingConversionInfo progressLabel];
-[DownloadingConversionInfo setProgressLabel:];
-[DownloadingConversionInfo statusLabel];
-[DownloadingConversionInfo setStatusLabel:];
-[DownloadingConversionInfo progressBar];
-[DownloadingConversionInfo setProgressBar:];
@end

@interface DownloadingInfoButton : SSBouncyButton {
  /* instance variables */
  @"UIImageView" icon;
  @"UIImageView" sizeImage;
  @"UIImageView" speedImage;
  @"UIImageView" timeImage;
  @"UIImageView" infoImage;
  @"UIImageView" _downloadIcon;
  @"UILabel" _sizeLabel;
  @"UILabel" _speedAndProgressLabel;
  @"UILabel" _timeLabel;
  @"__MarqueeLabel" _statusLabel;
  @"UIProgressView" _progressBar;
}

@property (T@"UIImageView",&,N,V_downloadIcon) downloadIcon;
@property (T@"UILabel",&,N,V_sizeLabel) sizeLabel;
@property (T@"UILabel",&,N,V_speedAndProgressLabel) speedAndProgressLabel;
@property (T@"UILabel",&,N,V_timeLabel) timeLabel;
@property (T@"__MarqueeLabel",&,N,V_statusLabel) statusLabel;
@property (T@"UIProgressView",&,N,V_progressBar) progressBar;

/* instance methods */
-[DownloadingInfoButton initForAudio:];
-[DownloadingInfoButton updateLabelsForProgress:tintColor:statusLabel:];
-[DownloadingInfoButton dealloc];
-[DownloadingInfoButton ytBackgroundColor];
-[DownloadingInfoButton ytTextColor];
-[DownloadingInfoButton updatePageStyles];
-[DownloadingInfoButton downloadIcon];
-[DownloadingInfoButton setDownloadIcon:];
-[DownloadingInfoButton sizeLabel];
-[DownloadingInfoButton setSizeLabel:];
-[DownloadingInfoButton speedAndProgressLabel];
-[DownloadingInfoButton setSpeedAndProgressLabel:];
-[DownloadingInfoButton timeLabel];
-[DownloadingInfoButton setTimeLabel:];
-[DownloadingInfoButton statusLabel];
-[DownloadingInfoButton setStatusLabel:];
-[DownloadingInfoButton progressBar];
-[DownloadingInfoButton setProgressBar:];
@end

@interface DownloadingVC : <UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  @"LottieHolder" emptyView;
  @"NSString" _pauseChar;
  @"NSString" _resumeChar;
  @"UITableView" _tableView;
  @"NSArray" _downloadItemsArray;
}

@property (T@"NSArray",&,N,V_downloadItemsArray) downloadItemsArray;
@property (T@"NSString",&,N,V_pauseChar) pauseChar;
@property (T@"NSString",&,N,V_resumeChar) resumeChar;
@property (T@"UITableView",&,N,V_tableView) tableView;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[DownloadingVC init];
-[DownloadingVC dealloc];
-[DownloadingVC ytBackgroundColor];
-[DownloadingVC ytTextColor];
-[DownloadingVC updatePageStyles];
-[DownloadingVC reloadVC];
-[DownloadingVC numberOfSectionsInTableView:];
-[DownloadingVC tableView:numberOfRowsInSection:];
-[DownloadingVC tableView:titleForHeaderInSection:];
-[DownloadingVC tableView:cellForRowAtIndexPath:];
-[DownloadingVC tableView:canEditRowAtIndexPath:];
-[DownloadingVC prepareDownloadCell:atIndexPath:];
-[DownloadingVC cancelDownload:];
-[DownloadingVC findIndexPathForView:];
-[DownloadingVC onStartIndividualDownload:];
-[DownloadingVC onCancelIndividualDownload:];
-[DownloadingVC onPauseResumeIndividualDownload:];
-[DownloadingVC cancelDownloadWithIdentifier:];
-[DownloadingVC pauseDownloadWithIdentifier:];
-[DownloadingVC resumeDownloadWithIdentifier:];
-[DownloadingVC pauseChar];
-[DownloadingVC setPauseChar:];
-[DownloadingVC resumeChar];
-[DownloadingVC setResumeChar:];
-[DownloadingVC tableView];
-[DownloadingVC setTableView:];
-[DownloadingVC downloadItemsArray];
-[DownloadingVC setDownloadItemsArray:];
@end

@interface DownloadsManager : <ExecuteDelegate> {
  /* instance variables */
  @"JGProgressHUD" HUD;
  @"NSMutableDictionary" ffmpegExecutions;
  @"NSMutableArray" _downloadItemsArray;
  @"AFHTTPSessionManager" _sessionManager;
}

@property (T@"NSMutableArray",&,N,V_downloadItemsArray) downloadItemsArray;
@property (T@"AFHTTPSessionManager",&,N,V_sessionManager) sessionManager;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[DownloadsManager sharedInstance];

/* instance methods */
-[DownloadsManager init];
-[DownloadsManager dealloc];
-[DownloadsManager setupURLSessionConfiguration];
-[DownloadsManager topViewController];
-[DownloadsManager tapticFeedback];
-[DownloadsManager fileExist:];
-[DownloadsManager sendPushWithTitle:body:];
-[DownloadsManager localPushWithTitle:body:];
-[DownloadsManager loadingHUDWithMeessage:inView:];
-[DownloadsManager downloadingHUDWithMeessage:inView:];
-[DownloadsManager successHUDWithMeessage:inView:];
-[DownloadsManager errorHUDWithMeessage:inView:delay:];
-[DownloadsManager dismissHUD];
-[DownloadsManager showHUDMessageWithText:];
-[DownloadsManager getLinksLocallyPlayerItem:videoID:sourceView:isShorts:];
-[DownloadsManager exportVideoToCameraRollWithPath:removeFile:];
-[DownloadsManager video:didFinishSavingWithError:contextInfo:];
-[DownloadsManager mergeAudioWithMP4VideoForDownloadItem:];
-[DownloadsManager addMetadataToAudioForDownloadItem:];
-[DownloadsManager convertVideo:toAudio:];
-[DownloadsManager mergeAudioWithVideoForDownloadItem:];
-[DownloadsManager convertAsyncMkvToMp4:forXYouItem:];
-[DownloadsManager ffmpegWithArguments:];
-[DownloadsManager executeCallback::];
-[DownloadsManager statisticsCallback:];
-[DownloadsManager downloadItemForIdentifier:];
-[DownloadsManager startDownloadWithRequestItem:info:];
-[DownloadsManager startDownloadWithDownloadItem:];
-[DownloadsManager pauseDownloadWithDownloadIdentifier:];
-[DownloadsManager pauseDownloadWithXYouItem:];
-[DownloadsManager resumeDownloadWithDownloadIdentifier:];
-[DownloadsManager cancelDownloadWithDownloadIdentifier:];
-[DownloadsManager cancelDownloadWithXYouItem:];
-[DownloadsManager prepareForTermination];
-[DownloadsManager deleteDownloadItem:];
-[DownloadsManager deleteXYouItem:];
-[DownloadsManager setDownloadingItems];
-[DownloadsManager getDownloadingItems];
-[DownloadsManager clearDownloading];
-[DownloadsManager clearDownloaded];
-[DownloadsManager openDatabase];
-[DownloadsManager migrateToSQL];
-[DownloadsManager downloadItemsArray];
-[DownloadsManager setDownloadItemsArray:];
-[DownloadsManager sessionManager];
-[DownloadsManager setSessionManager:];
@end

@interface DownloadsPagerVC : GLViewPagerViewController<GLViewPagerViewControllerDataSource, GLViewPagerViewControllerDelegate, UISearchResultsUpdating> {
  /* instance variables */
  @"UISearchController" _searchController;
  @"NSString" _searchKey;
  @"DownloadingVC" downloadingVC;
  @"DownloadedVC" allDownloadedVC;
  @"DownloadedVC" audiosVC;
  @"DownloadedVC" videosVC;
  @"DownloadedVC" shortsVC;
  B _fullfillTabs;
  @"UIView" _defaultTabButtons;
  @"UIView" _editingTabButtons;
  @"NSArray" _viewControllers;
  @"NSArray" _tagTitles;
}

@property (T@"NSArray",&,N,V_viewControllers) viewControllers;
@property (T@"NSArray",&,N,V_tagTitles) tagTitles;
@property (TB,N,V_fullfillTabs) fullfillTabs;
@property (T@"UIView",&,N,V_defaultTabButtons) defaultTabButtons;
@property (T@"UIView",&,N,V_editingTabButtons) editingTabButtons;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[DownloadsPagerVC init];
-[DownloadsPagerVC dealloc];
-[DownloadsPagerVC viewDidLoad];
-[DownloadsPagerVC model];
-[DownloadsPagerVC ytBackgroundColor];
-[DownloadsPagerVC ytTextColor];
-[DownloadsPagerVC updatePageStyles];
-[DownloadsPagerVC numberOfTabsForViewPager:];
-[DownloadsPagerVC viewPager:viewForTabIndex:];
-[DownloadsPagerVC viewPager:contentViewControllerForTabAtIndex:];
-[DownloadsPagerVC viewPager:didChangeTabToIndex:fromTabIndex:];
-[DownloadsPagerVC viewPager:willChangeTabToIndex:fromTabIndex:withTransitionProgress:];
-[DownloadsPagerVC viewPager:widthForTabIndex:];
-[DownloadsPagerVC tabsFulFillToScreenWidthInset];
-[DownloadsPagerVC estimateTabsWidthInView];
-[DownloadsPagerVC screenleftWidthForTabs];
-[DownloadsPagerVC isTabsWidthGreaterThanScreenWidth];
-[DownloadsPagerVC updateSearchResultsForSearchController:];
-[DownloadsPagerVC settingsVC];
-[DownloadsPagerVC tweet];
-[DownloadsPagerVC showSearch];
-[DownloadsPagerVC sorting:];
-[DownloadsPagerVC didTapDonation];
-[DownloadsPagerVC cancelEditingVC];
-[DownloadsPagerVC cancelEditingVCForIndex:];
-[DownloadsPagerVC selectedCellsOptions];
-[DownloadsPagerVC defaultTabButtons];
-[DownloadsPagerVC setDefaultTabButtons:];
-[DownloadsPagerVC editingTabButtons];
-[DownloadsPagerVC setEditingTabButtons:];
-[DownloadsPagerVC viewControllers];
-[DownloadsPagerVC setViewControllers:];
-[DownloadsPagerVC tagTitles];
-[DownloadsPagerVC setTagTitles:];
-[DownloadsPagerVC fullfillTabs];
-[DownloadsPagerVC setFullfillTabs:];
@end

@interface FFmpegExecution :  {
  /* instance variables */
  @"NSDate" startTime;
  q executionId;
  @"NSString" command;
}

/* instance methods */
-[FFmpegExecution initWithExecutionId:andArguments:];
-[FFmpegExecution getStartTime];
-[FFmpegExecution getExecutionId];
-[FFmpegExecution getCommand];
@end

@interface FMDatabase :  {
  /* instance variables */
  ^v _db;
  B _isExecutingStatement;
  d _startBusyRetryTime;
  @"NSMutableSet" _openResultSets;
  @"NSMutableSet" _openFunctions;
  @"NSDateFormatter" _dateFormat;
  B _shouldCacheStatements;
  B _traceExecution;
  B _checkedOut;
  B _crashOnErrors;
  B _logsErrors;
  B _isOpen;
  B _isInTransaction;
  d _maxBusyRetryTimeInterval;
  @"NSMutableDictionary" _cachedStatements;
  @"NSString" _databasePath;
}

@property (TI,N) applicationID;
@property (TI,N) userVersion;
@property (TB,V_traceExecution) traceExecution;
@property (TB,V_checkedOut) checkedOut;
@property (TB,V_crashOnErrors) crashOnErrors;
@property (TB,V_logsErrors) logsErrors;
@property (T@"NSMutableDictionary",&,V_cachedStatements) cachedStatements;
@property (TB,N,V_isOpen) isOpen;
@property (TB,R,N) goodConnection;
@property (Tq,R,N) lastInsertRowId;
@property (Ti,R,N) changes;
@property (TB,R,N,V_isInTransaction) isInTransaction;
@property (TB,R,N) hasOpenResultSets;
@property (TB,N,V_shouldCacheStatements) shouldCacheStatements;
@property (T@"NSString",R,N,V_databasePath) databasePath;
@property (T@"NSURL",R,N) databaseURL;
@property (T^v,R,N) sqliteHandle;
@property (Td,N,V_maxBusyRetryTimeInterval) maxBusyRetryTimeInterval;

/* class methods */
-[FMDatabase databaseWithPath:];
-[FMDatabase databaseWithURL:];
-[FMDatabase FMDBUserVersion];
-[FMDatabase FMDBVersion];
-[FMDatabase sqliteLibVersion];
-[FMDatabase isSQLiteThreadSafe];
-[FMDatabase storeableDateFormat:];

/* instance methods */
-[FMDatabase stringForQuery:];
-[FMDatabase intForQuery:];
-[FMDatabase longForQuery:];
-[FMDatabase boolForQuery:];
-[FMDatabase doubleForQuery:];
-[FMDatabase dataForQuery:];
-[FMDatabase dateForQuery:];
-[FMDatabase tableExists:];
-[FMDatabase getSchema];
-[FMDatabase getTableSchema:];
-[FMDatabase columnExists:inTableWithName:];
-[FMDatabase applicationID];
-[FMDatabase setApplicationID:];
-[FMDatabase userVersion];
-[FMDatabase setUserVersion:];
-[FMDatabase columnExists:columnName:];
-[FMDatabase validateSQL:error:];
-[FMDatabase init];
-[FMDatabase initWithURL:];
-[FMDatabase initWithPath:];
-[FMDatabase dealloc];
-[FMDatabase databaseURL];
-[FMDatabase sqliteHandle];
-[FMDatabase sqlitePath];
-[FMDatabase limitFor:value:];
-[FMDatabase open];
-[FMDatabase openWithFlags:];
-[FMDatabase openWithFlags:vfs:];
-[FMDatabase close];
-[FMDatabase setMaxBusyRetryTimeInterval:];
-[FMDatabase maxBusyRetryTimeInterval];
-[FMDatabase busyRetryTimeout];
-[FMDatabase setBusyRetryTimeout:];
-[FMDatabase hasOpenResultSets];
-[FMDatabase closeOpenResultSets];
-[FMDatabase resultSetDidClose:];
-[FMDatabase clearCachedStatements];
-[FMDatabase cachedStatementForQuery:];
-[FMDatabase setCachedStatement:forQuery:];
-[FMDatabase rekey:];
-[FMDatabase rekeyWithData:];
-[FMDatabase setKey:];
-[FMDatabase setKeyWithData:];
-[FMDatabase hasDateFormatter];
-[FMDatabase setDateFormat:];
-[FMDatabase dateFromString:];
-[FMDatabase stringFromDate:];
-[FMDatabase goodConnection];
-[FMDatabase warnInUse];
-[FMDatabase databaseExists];
-[FMDatabase lastErrorMessage];
-[FMDatabase hadError];
-[FMDatabase lastErrorCode];
-[FMDatabase lastExtendedErrorCode];
-[FMDatabase errorWithMessage:];
-[FMDatabase lastError];
-[FMDatabase lastInsertRowId];
-[FMDatabase changes];
-[FMDatabase bindObject:toColumn:inStatement:];
-[FMDatabase extractSQL:argumentsList:intoString:arguments:];
-[FMDatabase executeQuery:withParameterDictionary:];
-[FMDatabase executeQuery:withArgumentsInArray:orDictionary:orVAList:shouldBind:];
-[FMDatabase bindStatement:WithArgumentsInArray:orDictionary:orVAList:];
-[FMDatabase executeQuery:];
-[FMDatabase executeQueryWithFormat:];
-[FMDatabase executeQuery:withArgumentsInArray:];
-[FMDatabase executeQuery:values:error:];
-[FMDatabase executeQuery:withVAList:];
-[FMDatabase executeUpdate:error:withArgumentsInArray:orDictionary:orVAList:];
-[FMDatabase executeUpdate:];
-[FMDatabase executeUpdate:withArgumentsInArray:];
-[FMDatabase executeUpdate:values:error:];
-[FMDatabase executeUpdate:withParameterDictionary:];
-[FMDatabase executeUpdate:withVAList:];
-[FMDatabase executeUpdateWithFormat:];
-[FMDatabase executeStatements:];
-[FMDatabase executeStatements:withResultBlock:];
-[FMDatabase executeUpdate:withErrorAndBindings:];
-[FMDatabase update:withErrorAndBindings:];
-[FMDatabase prepare:];
-[FMDatabase rollback];
-[FMDatabase commit];
-[FMDatabase beginTransaction];
-[FMDatabase beginDeferredTransaction];
-[FMDatabase beginImmediateTransaction];
-[FMDatabase beginExclusiveTransaction];
-[FMDatabase inTransaction];
-[FMDatabase interrupt];
-[FMDatabase startSavePointWithName:error:];
-[FMDatabase releaseSavePointWithName:error:];
-[FMDatabase rollbackToSavePointWithName:error:];
-[FMDatabase inSavePoint:];
-[FMDatabase checkpoint:error:];
-[FMDatabase checkpoint:name:error:];
-[FMDatabase checkpoint:name:logFrameCount:checkpointCount:error:];
-[FMDatabase shouldCacheStatements];
-[FMDatabase setShouldCacheStatements:];
-[FMDatabase makeFunctionNamed:maximumArguments:withBlock:];
-[FMDatabase makeFunctionNamed:arguments:block:];
-[FMDatabase valueType:];
-[FMDatabase valueInt:];
-[FMDatabase valueLong:];
-[FMDatabase valueDouble:];
-[FMDatabase valueData:];
-[FMDatabase valueString:];
-[FMDatabase resultNullInContext:];
-[FMDatabase resultInt:context:];
-[FMDatabase resultLong:context:];
-[FMDatabase resultDouble:context:];
-[FMDatabase resultData:context:];
-[FMDatabase resultString:context:];
-[FMDatabase resultError:context:];
-[FMDatabase resultErrorCode:context:];
-[FMDatabase resultErrorNoMemoryInContext:];
-[FMDatabase resultErrorTooBigInContext:];
-[FMDatabase traceExecution];
-[FMDatabase setTraceExecution:];
-[FMDatabase checkedOut];
-[FMDatabase setCheckedOut:];
-[FMDatabase crashOnErrors];
-[FMDatabase setCrashOnErrors:];
-[FMDatabase logsErrors];
-[FMDatabase setLogsErrors:];
-[FMDatabase cachedStatements];
-[FMDatabase setCachedStatements:];
-[FMDatabase isOpen];
-[FMDatabase setIsOpen:];
-[FMDatabase isInTransaction];
-[FMDatabase databasePath];
@end

@interface FMDatabasePool :  {
  /* instance variables */
  @"NSObject<OS_dispatch_queue>" _lockQueue;
  @"NSMutableArray" _databaseInPool;
  @"NSMutableArray" _databaseOutPool;
  i _openFlags;
  @"NSString" _path;
  @ _delegate;
  Q _maximumNumberOfDatabasesToCreate;
  @"NSString" _vfsName;
}

@property (T@"NSString",C,V_path) path;
@property (T@,V_delegate) delegate;
@property (TQ,V_maximumNumberOfDatabasesToCreate) maximumNumberOfDatabasesToCreate;
@property (Ti,R,V_openFlags) openFlags;
@property (T@"NSString",C,V_vfsName) vfsName;
@property (TQ,R,N) countOfCheckedInDatabases;
@property (TQ,R,N) countOfCheckedOutDatabases;
@property (TQ,R,N) countOfOpenDatabases;

/* class methods */
-[FMDatabasePool databasePoolWithPath:];
-[FMDatabasePool databasePoolWithURL:];
-[FMDatabasePool databasePoolWithPath:flags:];
-[FMDatabasePool databasePoolWithURL:flags:];
-[FMDatabasePool databaseClass];

/* instance methods */
-[FMDatabasePool initWithURL:flags:vfs:];
-[FMDatabasePool initWithPath:flags:vfs:];
-[FMDatabasePool initWithPath:flags:];
-[FMDatabasePool initWithURL:flags:];
-[FMDatabasePool initWithPath:];
-[FMDatabasePool initWithURL:];
-[FMDatabasePool init];
-[FMDatabasePool dealloc];
-[FMDatabasePool executeLocked:];
-[FMDatabasePool pushDatabaseBackInPool:];
-[FMDatabasePool db];
-[FMDatabasePool countOfCheckedInDatabases];
-[FMDatabasePool countOfCheckedOutDatabases];
-[FMDatabasePool countOfOpenDatabases];
-[FMDatabasePool releaseAllDatabases];
-[FMDatabasePool inDatabase:];
-[FMDatabasePool beginTransaction:withBlock:];
-[FMDatabasePool inTransaction:];
-[FMDatabasePool inDeferredTransaction:];
-[FMDatabasePool inExclusiveTransaction:];
-[FMDatabasePool inImmediateTransaction:];
-[FMDatabasePool inSavePoint:];
-[FMDatabasePool path];
-[FMDatabasePool setPath:];
-[FMDatabasePool delegate];
-[FMDatabasePool setDelegate:];
-[FMDatabasePool maximumNumberOfDatabasesToCreate];
-[FMDatabasePool setMaximumNumberOfDatabasesToCreate:];
-[FMDatabasePool openFlags];
-[FMDatabasePool vfsName];
-[FMDatabasePool setVfsName:];
@end

@interface FMDatabaseQueue :  {
  /* instance variables */
  @"NSObject<OS_dispatch_queue>" _queue;
  @"FMDatabase" _db;
  i _openFlags;
  @"NSString" _path;
  @"NSString" _vfsName;
}

@property (T@"NSString",&,V_path) path;
@property (Ti,R,V_openFlags) openFlags;
@property (T@"NSString",C,V_vfsName) vfsName;

/* class methods */
-[FMDatabaseQueue databaseQueueWithPath:];
-[FMDatabaseQueue databaseQueueWithURL:];
-[FMDatabaseQueue databaseQueueWithPath:flags:];
-[FMDatabaseQueue databaseQueueWithURL:flags:];
-[FMDatabaseQueue databaseClass];

/* instance methods */
-[FMDatabaseQueue initWithURL:flags:vfs:];
-[FMDatabaseQueue initWithPath:flags:vfs:];
-[FMDatabaseQueue initWithPath:flags:];
-[FMDatabaseQueue initWithURL:flags:];
-[FMDatabaseQueue initWithURL:];
-[FMDatabaseQueue initWithPath:];
-[FMDatabaseQueue init];
-[FMDatabaseQueue dealloc];
-[FMDatabaseQueue close];
-[FMDatabaseQueue interrupt];
-[FMDatabaseQueue database];
-[FMDatabaseQueue inDatabase:];
-[FMDatabaseQueue beginTransaction:withBlock:];
-[FMDatabaseQueue inTransaction:];
-[FMDatabaseQueue inDeferredTransaction:];
-[FMDatabaseQueue inExclusiveTransaction:];
-[FMDatabaseQueue inImmediateTransaction:];
-[FMDatabaseQueue inSavePoint:];
-[FMDatabaseQueue checkpoint:error:];
-[FMDatabaseQueue checkpoint:name:error:];
-[FMDatabaseQueue checkpoint:name:logFrameCount:checkpointCount:error:];
-[FMDatabaseQueue path];
-[FMDatabaseQueue setPath:];
-[FMDatabaseQueue openFlags];
-[FMDatabaseQueue vfsName];
-[FMDatabaseQueue setVfsName:];
@end

@interface FMResultSet :  {
  /* instance variables */
  @"NSMutableDictionary" _columnNameToIndexMap;
  B _shouldAutoClose;
  @"FMDatabase" _parentDB;
  @"NSString" _query;
  @"FMStatement" _statement;
}

@property (TB,N,V_shouldAutoClose) shouldAutoClose;
@property (T@"FMDatabase",&,N,V_parentDB) parentDB;
@property (T@"NSString",&,V_query) query;
@property (T@"NSMutableDictionary",R) columnNameToIndexMap;
@property (T@"FMStatement",&,V_statement) statement;
@property (Ti,R,N) columnCount;
@property (T@"NSDictionary",R,N) resultDictionary;

/* class methods */
-[FMResultSet resultSetWithStatement:usingParentDatabase:shouldAutoClose:];

/* instance methods */
-[FMResultSet dealloc];
-[FMResultSet close];
-[FMResultSet columnCount];
-[FMResultSet columnNameToIndexMap];
-[FMResultSet kvcMagic:];
-[FMResultSet resultDict];
-[FMResultSet resultDictionary];
-[FMResultSet next];
-[FMResultSet nextWithError:];
-[FMResultSet step];
-[FMResultSet stepWithError:];
-[FMResultSet internalStepWithError:];
-[FMResultSet hasAnotherRow];
-[FMResultSet columnIndexForName:];
-[FMResultSet intForColumn:];
-[FMResultSet intForColumnIndex:];
-[FMResultSet longForColumn:];
-[FMResultSet longForColumnIndex:];
-[FMResultSet longLongIntForColumn:];
-[FMResultSet longLongIntForColumnIndex:];
-[FMResultSet unsignedLongLongIntForColumn:];
-[FMResultSet unsignedLongLongIntForColumnIndex:];
-[FMResultSet boolForColumn:];
-[FMResultSet boolForColumnIndex:];
-[FMResultSet doubleForColumn:];
-[FMResultSet doubleForColumnIndex:];
-[FMResultSet stringForColumnIndex:];
-[FMResultSet stringForColumn:];
-[FMResultSet dateForColumn:];
-[FMResultSet dateForColumnIndex:];
-[FMResultSet dataForColumn:];
-[FMResultSet dataForColumnIndex:];
-[FMResultSet dataNoCopyForColumn:];
-[FMResultSet dataNoCopyForColumnIndex:];
-[FMResultSet columnIndexIsNull:];
-[FMResultSet columnIsNull:];
-[FMResultSet UTF8StringForColumnIndex:];
-[FMResultSet UTF8StringForColumn:];
-[FMResultSet UTF8StringForColumnName:];
-[FMResultSet objectForColumnIndex:];
-[FMResultSet objectForColumnName:];
-[FMResultSet objectForColumn:];
-[FMResultSet columnNameForIndex:];
-[FMResultSet objectAtIndexedSubscript:];
-[FMResultSet objectForKeyedSubscript:];
-[FMResultSet bindWithArray:orDictionary:orVAList:];
-[FMResultSet bindWithArray:];
-[FMResultSet bindWithDictionary:];
-[FMResultSet parentDB];
-[FMResultSet setParentDB:];
-[FMResultSet query];
-[FMResultSet setQuery:];
-[FMResultSet statement];
-[FMResultSet setStatement:];
-[FMResultSet shouldAutoClose];
-[FMResultSet setShouldAutoClose:];
@end

@interface FMStatement :  {
  /* instance variables */
  ^v _statement;
  @"NSString" _query;
  q _useCount;
  B _inUse;
}

@property (Tq,V_useCount) useCount;
@property (T@"NSString",&,V_query) query;
@property (T^v,V_statement) statement;
@property (TB,V_inUse) inUse;

/* instance methods */
-[FMStatement dealloc];
-[FMStatement close];
-[FMStatement reset];
-[FMStatement description];
-[FMStatement useCount];
-[FMStatement setUseCount:];
-[FMStatement query];
-[FMStatement setQuery:];
-[FMStatement statement];
-[FMStatement setStatement:];
-[FMStatement inUse];
-[FMStatement setInUse:];
@end

@interface FRPCell :  {
  /* instance variables */
  i _height;
  @"UIColor" _tintUIColor;
  @"FRPSettings" _setting;
  @"NSString" _title;
  @"NSString" _postNotification;
  @? _valueChanged;
}

@property (T@"UIColor",&,N,V_tintUIColor) tintUIColor;
@property (T@"FRPSettings",&,N,V_setting) setting;
@property (T@"NSString",&,N,V_title) title;
@property (T@"NSString",&,N,V_postNotification) postNotification;
@property (T@?,C,N,V_valueChanged) valueChanged;
@property (Ti,N,V_height) height;

/* class methods */
-[FRPCell cellWithTitle:setting:];

/* instance methods */
-[FRPCell initWithTitle:setting:];
-[FRPCell didSelectFromTable:];
-[FRPCell tintUIColor];
-[FRPCell setTintUIColor:];
-[FRPCell setting];
-[FRPCell setSetting:];
-[FRPCell title];
-[FRPCell setTitle:];
-[FRPCell postNotification];
-[FRPCell setPostNotification:];
-[FRPCell valueChanged];
-[FRPCell setValueChanged:];
-[FRPCell height];
-[FRPCell setHeight:];
@end

@interface FRPDeveloperCell : FRPCell {
  /* instance variables */
  @"NSString" _url;
  @"UIImage" _image;
}

@property (T@"NSString",&,N,V_url) url;
@property (T@"UIImage",&,N,V_image) image;

/* class methods */
-[FRPDeveloperCell cellWithTitle:detail:image:url:];

/* instance methods */
-[FRPDeveloperCell cellWithTitle:detail:image:url:];
-[FRPDeveloperCell layoutSubviews];
-[FRPDeveloperCell didSelectFromTable:];
-[FRPDeveloperCell url];
-[FRPDeveloperCell setUrl:];
-[FRPDeveloperCell image];
-[FRPDeveloperCell setImage:];
@end

@interface FRPLinkCell : FRPCell
/* class methods */
-[FRPLinkCell cellWithTitle:selectedBlock:];

/* instance methods */
-[FRPLinkCell cellWithTitle:selectedBlock:];
-[FRPLinkCell didSelectFromTable:];
-[FRPLinkCell layoutSubviews];
@end

@interface FRPListCell : FRPCell {
  /* instance variables */
  B _popView;
  @"NSArray" _items;
  @"NSArray" _values;
}

@property (T@"NSArray",&,N,V_items) items;
@property (T@"NSArray",&,N,V_values) values;
@property (TB,N,V_popView) popView;

/* class methods */
-[FRPListCell cellWithTitle:setting:items:value:popViewOnSelect:postNotification:changedBlock:];

/* instance methods */
-[FRPListCell cellWithTitle:setting:items:value:popViewOnSelect:postNotification:changedBlock:];
-[FRPListCell didSelectFromTable:];
-[FRPListCell layoutSubviews];
-[FRPListCell items];
-[FRPListCell setItems:];
-[FRPListCell values];
-[FRPListCell setValues:];
-[FRPListCell popView];
-[FRPListCell setPopView:];
@end

@interface FRPSection :  {
  /* instance variables */
  @"NSString" _headerTitle;
  @"NSString" _footerTitle;
  Q _footerAlignment;
  @"NSMutableArray" _cells;
  @"UIColor" _tintUIColor;
}

@property (T@"NSString",&,N,V_headerTitle) headerTitle;
@property (T@"NSString",&,N,V_footerTitle) footerTitle;
@property (TQ,N,V_footerAlignment) footerAlignment;
@property (T@"NSMutableArray",&,N,V_cells) cells;
@property (T@"UIColor",&,N,V_tintUIColor) tintUIColor;

/* class methods */
-[FRPSection sectionWithTitle:];
-[FRPSection sectionWithTitle:footer:footerAlignment:];

/* instance methods */
-[FRPSection initWithTitle:footer:footerAlignment:];
-[FRPSection addCell:];
-[FRPSection addCells:];
-[FRPSection headerTitle];
-[FRPSection setHeaderTitle:];
-[FRPSection footerTitle];
-[FRPSection setFooterTitle:];
-[FRPSection footerAlignment];
-[FRPSection setFooterAlignment:];
-[FRPSection cells];
-[FRPSection setCells:];
-[FRPSection tintUIColor];
-[FRPSection setTintUIColor:];
@end

@interface FRPSegmentCell : FRPCell {
  /* instance variables */
  @"UISegmentedControl" _segment;
  @"NSArray" _values;
  @"NSArray" _displayedValues;
}

@property (T@"UISegmentedControl",&,N,V_segment) segment;
@property (T@"NSArray",&,N,V_values) values;
@property (T@"NSArray",&,N,V_displayedValues) displayedValues;

/* class methods */
-[FRPSegmentCell cellWithTitle:setting:items:postNotification:changeBlock:];
-[FRPSegmentCell cellWithTitle:setting:values:displayedValues:postNotification:changeBlock:];
-[FRPSegmentCell cellWithTitle:setting:values:postNotification:changeBlock:];

/* instance methods */
-[FRPSegmentCell cellWithTitle:setting:values:displayedValues:postNotification:changeBlock:];
-[FRPSegmentCell segmentAction:];
-[FRPSegmentCell layoutSubviews];
-[FRPSegmentCell segment];
-[FRPSegmentCell setSegment:];
-[FRPSegmentCell values];
-[FRPSegmentCell setValues:];
-[FRPSegmentCell displayedValues];
-[FRPSegmentCell setDisplayedValues:];
@end

@interface FRPSelectListTable : <UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  @"NSArray" listItems;
  @"NSArray" listValues;
  @"NSString" currentValue;
  @"NSString" pageTitle;
  B popView;
  @? _itemChanged;
  @"UIColor" _tintUIColor;
}

@property (T@?,C,N,V_itemChanged) itemChanged;
@property (T@"UIColor",C,N,V_tintUIColor) tintUIColor;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[FRPSelectListTable initWithStyle:title:items:values:currentValue:popViewOnSelect:changeBlock:];
-[FRPSelectListTable viewDidLoad];
-[FRPSelectListTable numberOfSectionsInTableView:];
-[FRPSelectListTable tableView:numberOfRowsInSection:];
-[FRPSelectListTable tableView:cellForRowAtIndexPath:];
-[FRPSelectListTable tableView:didSelectRowAtIndexPath:];
-[FRPSelectListTable didReceiveMemoryWarning];
-[FRPSelectListTable itemChanged];
-[FRPSelectListTable setItemChanged:];
-[FRPSelectListTable tintUIColor];
-[FRPSelectListTable setTintUIColor:];
@end

@interface FRPSettings :  {
  /* instance variables */
  @"NSString" _key;
  @"NSString" _fileSave;
  @? _valueDidChangeBlock;
}

@property (T@?,C,N,V_valueDidChangeBlock) valueDidChangeBlock;
@property (T@"NSString",&,N,V_key) key;
@property (T@,&,N) value;
@property (T@"NSString",&,N,V_fileSave) fileSave;

/* class methods */
-[FRPSettings settingsWithKey:defaultValue:];

/* instance methods */
-[FRPSettings initWithKey:defaultValue:];
-[FRPSettings observeValueForKeyPath:ofObject:change:context:];
-[FRPSettings value];
-[FRPSettings setValue:];
-[FRPSettings saveValue:];
-[FRPSettings key];
-[FRPSettings setKey:];
-[FRPSettings fileSave];
-[FRPSettings setFileSave:];
-[FRPSettings valueDidChangeBlock];
-[FRPSettings setValueDidChangeBlock:];
@end

@interface FRPSliderCell : FRPCell {
  /* instance variables */
  f _min;
  f _max;
  @"UISlider" _sliderCell;
  @"UILabel" _lLabel;
  @"UILabel" _rLabel;
  @"UILabel" _cLabel;
  @"UILabel" _vLabel;
}

@property (T@"UISlider",&,N,V_sliderCell) sliderCell;
@property (T@"UILabel",&,N,V_lLabel) lLabel;
@property (T@"UILabel",&,N,V_rLabel) rLabel;
@property (T@"UILabel",&,N,V_cLabel) cLabel;
@property (T@"UILabel",&,N,V_vLabel) vLabel;
@property (Tf,N,V_min) min;
@property (Tf,N,V_max) max;

/* class methods */
-[FRPSliderCell cellWithTitle:setting:min:max:postNotification:changeBlock:];

/* instance methods */
-[FRPSliderCell cellWithTitle:setting:min:max:postNotification:changeBlock:];
-[FRPSliderCell layoutSubviews];
-[FRPSliderCell sliderChanged:];
-[FRPSliderCell sliderCell];
-[FRPSliderCell setSliderCell:];
-[FRPSliderCell lLabel];
-[FRPSliderCell setLLabel:];
-[FRPSliderCell rLabel];
-[FRPSliderCell setRLabel:];
-[FRPSliderCell cLabel];
-[FRPSliderCell setCLabel:];
-[FRPSliderCell vLabel];
-[FRPSliderCell setVLabel:];
-[FRPSliderCell min];
-[FRPSliderCell setMin:];
-[FRPSliderCell max];
-[FRPSliderCell setMax:];
@end

@interface FRPSwitchCell : FRPCell {
  /* instance variables */
  @"JTMaterialSwitch" _switchView;
}

@property (T@"JTMaterialSwitch",&,N,V_switchView) switchView;

/* class methods */
-[FRPSwitchCell cellWithTitle:setting:postNotification:changeBlock:];

/* instance methods */
-[FRPSwitchCell cellWithTitle:setting:postNotification:changeBlock:];
-[FRPSwitchCell switchChanged:];
-[FRPSwitchCell layoutSubviews];
-[FRPSwitchCell switchView];
-[FRPSwitchCell setSwitchView:];
@end

@interface FRPTextFieldCell : FRPCell<UITextFieldDelegate> {
  /* instance variables */
  @"UITextField" _textField;
}

@property (T@"UITextField",&,N,V_textField) textField;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[FRPTextFieldCell cellWithTitle:setting:placeholder:postNotification:changeBlock:];

/* instance methods */
-[FRPTextFieldCell cellWithTitle:setting:placeholder:postNotification:changeBlock:];
-[FRPTextFieldCell textFieldChanged:];
-[FRPTextFieldCell textFieldShouldReturn:];
-[FRPTextFieldCell layoutSubviews];
-[FRPTextFieldCell textField];
-[FRPTextFieldCell setTextField:];
@end

@interface FRPValueCell : FRPCell
/* class methods */
-[FRPValueCell cellWithTitle:detail:];

/* instance methods */
-[FRPValueCell cellWithTitle:detail:];
@end

@interface FRPViewCell : FRPCell {
  /* instance variables */
  B _hideSeperators;
  @? _layoutBlock;
}

@property (T@?,C,N,V_layoutBlock) layoutBlock;
@property (TB,N,V_hideSeperators) hideSeperators;

/* class methods */
-[FRPViewCell cellWithHeight:initBlock:layoutBlock:];

/* instance methods */
-[FRPViewCell cellWithHeight:initBlock:layoutBlock:];
-[FRPViewCell layoutSubviews];
-[FRPViewCell addSubview:];
-[FRPViewCell layoutBlock];
-[FRPViewCell setLayoutBlock:];
-[FRPViewCell hideSeperators];
-[FRPViewCell setHideSeperators:];
@end

@interface FRPViewSection : FRPSection {
  /* instance variables */
  @? _cellBlock;
}

@property (T@?,C,N,V_cellBlock) cellBlock;

/* class methods */
-[FRPViewSection sectionWithHeight:initBlock:layoutBlock:];

/* instance methods */
-[FRPViewSection initWithHeight:initBlock:layoutBlock:];
-[FRPViewSection cellBlock];
-[FRPViewSection setCellBlock:];
@end

@interface FRPreferences :  {
  /* instance variables */
  @"NSArray" _sections;
  @"NSString" _plistPath;
  @"UIColor" _tintUIColor;
}

@property (T@"UIColor",&,N,V_tintUIColor) tintUIColor;
@property (T@"NSArray",&,N,V_sections) sections;
@property (T@"NSString",&,N,V_plistPath) plistPath;

/* class methods */
-[FRPreferences tableWithSections:title:tintColor:];

/* instance methods */
-[FRPreferences initTableWithSections:];
-[FRPreferences updateTintColors];
-[FRPreferences viewDidDisappear:];
-[FRPreferences viewWillAppear:];
-[FRPreferences cellForIndexPath:];
-[FRPreferences numberOfSectionsInTableView:];
-[FRPreferences tableView:titleForHeaderInSection:];
-[FRPreferences tableView:numberOfRowsInSection:];
-[FRPreferences tableView:heightForRowAtIndexPath:];
-[FRPreferences tableView:cellForRowAtIndexPath:];
-[FRPreferences tableView:didSelectRowAtIndexPath:];
-[FRPreferences tableView:titleForFooterInSection:];
-[FRPreferences tableView:willDisplayFooterView:forSection:];
-[FRPreferences sections];
-[FRPreferences setSections:];
-[FRPreferences plistPath];
-[FRPreferences setPlistPath:];
-[FRPreferences tintUIColor];
-[FRPreferences setTintUIColor:];
@end

@interface GCDWebServer :  {
  /* instance variables */
  @"NSObject<OS_dispatch_queue>" _syncQueue;
  @"NSObject<OS_dispatch_group>" _sourceGroup;
  @"NSMutableArray" _handlers;
  q _activeConnections;
  B _connected;
  ^{__CFRunLoopTimer=} _disconnectTimer;
  @"NSDictionary" _options;
  @"NSMutableDictionary" _authenticationBasicAccounts;
  @"NSMutableDictionary" _authenticationDigestAccounts;
  # _connectionClass;
  d _disconnectDelay;
  @"NSObject<OS_dispatch_source>" _source4;
  @"NSObject<OS_dispatch_source>" _source6;
  ^{__CFNetService=} _registrationService;
  ^{__CFNetService=} _resolutionService;
  ^{_DNSServiceRef_t=} _dnsService;
  ^{__CFSocket=} _dnsSocket;
  ^{__CFRunLoopSource=} _dnsSource;
  @"NSString" _dnsAddress;
  Q _dnsPort;
  B _bindToLocalhost;
  B _suspendInBackground;
  Q _backgroundTask;
  B _shouldAutomaticallyMapHEADToGET;
  @"<GCDWebServerDelegate>" _delegate;
  Q _port;
  @"NSString" _serverName;
  @"NSString" _authenticationRealm;
  q _dispatchQueuePriority;
}

@property (T@"NSURL",R,N) serverURL;
@property (T@"NSURL",R,N) bonjourServerURL;
@property (T@"NSURL",R,N) publicServerURL;
@property (T@"NSMutableArray",R,N,V_handlers) handlers;
@property (T@"NSString",R,N,V_serverName) serverName;
@property (T@"NSString",R,N,V_authenticationRealm) authenticationRealm;
@property (T@"NSMutableDictionary",R,N,V_authenticationBasicAccounts) authenticationBasicAccounts;
@property (T@"NSMutableDictionary",R,N,V_authenticationDigestAccounts) authenticationDigestAccounts;
@property (TB,R,N,V_shouldAutomaticallyMapHEADToGET) shouldAutomaticallyMapHEADToGET;
@property (Tq,R,N,V_dispatchQueuePriority) dispatchQueuePriority;
@property (T@"<GCDWebServerDelegate>",W,N,V_delegate) delegate;
@property (TB,R,N,GisRunning) running;
@property (TQ,R,N,V_port) port;
@property (T@"NSString",R,N) bonjourName;
@property (T@"NSString",R,N) bonjourType;

/* class methods */
-[GCDWebServer setLogLevel:];
-[GCDWebServer setBuiltInLogger:];
-[GCDWebServer initialize];

/* instance methods */
-[GCDWebServer logVerbose:];
-[GCDWebServer logInfo:];
-[GCDWebServer logWarning:];
-[GCDWebServer logError:];
-[GCDWebServer addGETHandlerForPath:staticData:contentType:cacheAge:];
-[GCDWebServer addGETHandlerForPath:filePath:isAttachment:cacheAge:allowRangeRequests:];
-[GCDWebServer _responseWithContentsOfDirectory:];
-[GCDWebServer addGETHandlerForBasePath:directoryPath:indexFilename:cacheAge:allowRangeRequests:];
-[GCDWebServer addDefaultHandlerForMethod:requestClass:processBlock:];
-[GCDWebServer addDefaultHandlerForMethod:requestClass:asyncProcessBlock:];
-[GCDWebServer addHandlerForMethod:path:requestClass:processBlock:];
-[GCDWebServer addHandlerForMethod:path:requestClass:asyncProcessBlock:];
-[GCDWebServer addHandlerForMethod:pathRegex:requestClass:processBlock:];
-[GCDWebServer addHandlerForMethod:pathRegex:requestClass:asyncProcessBlock:];
-[GCDWebServer serverURL];
-[GCDWebServer bonjourServerURL];
-[GCDWebServer publicServerURL];
-[GCDWebServer start];
-[GCDWebServer startWithPort:bonjourName:];
-[GCDWebServer init];
-[GCDWebServer dealloc];
-[GCDWebServer _startBackgroundTask];
-[GCDWebServer _didConnect];
-[GCDWebServer willStartConnection:];
-[GCDWebServer _endBackgroundTask];
-[GCDWebServer _didDisconnect];
-[GCDWebServer didEndConnection:];
-[GCDWebServer bonjourName];
-[GCDWebServer bonjourType];
-[GCDWebServer addHandlerWithMatchBlock:processBlock:];
-[GCDWebServer addHandlerWithMatchBlock:asyncProcessBlock:];
-[GCDWebServer removeAllHandlers];
-[GCDWebServer _createListeningSocket:localAddress:length:maxPendingConnections:error:];
-[GCDWebServer _createDispatchSourceWithListeningSocket:isIPv6:];
-[GCDWebServer _start:];
-[GCDWebServer _stop];
-[GCDWebServer _didEnterBackground:];
-[GCDWebServer _willEnterForeground:];
-[GCDWebServer startWithOptions:error:];
-[GCDWebServer isRunning];
-[GCDWebServer stop];
-[GCDWebServer delegate];
-[GCDWebServer setDelegate:];
-[GCDWebServer port];
-[GCDWebServer handlers];
-[GCDWebServer serverName];
-[GCDWebServer authenticationRealm];
-[GCDWebServer authenticationBasicAccounts];
-[GCDWebServer authenticationDigestAccounts];
-[GCDWebServer shouldAutomaticallyMapHEADToGET];
-[GCDWebServer dispatchQueuePriority];
@end

@interface GCDWebServerBodyDecoder : <GCDWebServerBodyWriter> {
  /* instance variables */
  @"GCDWebServerRequest" _request;
  @"<GCDWebServerBodyWriter>" _writer;
}

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[GCDWebServerBodyDecoder initWithRequest:writer:];
-[GCDWebServerBodyDecoder open:];
-[GCDWebServerBodyDecoder writeData:error:];
-[GCDWebServerBodyDecoder close:];
@end

@interface GCDWebServerBodyEncoder : <GCDWebServerBodyReader> {
  /* instance variables */
  @"GCDWebServerResponse" _response;
  @"<GCDWebServerBodyReader>" _reader;
}

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[GCDWebServerBodyEncoder initWithResponse:reader:];
-[GCDWebServerBodyEncoder open:];
-[GCDWebServerBodyEncoder readData:];
-[GCDWebServerBodyEncoder close];
@end

@interface GCDWebServerConnection :  {
  /* instance variables */
  i _socket;
  B _virtualHEAD;
  ^{__CFHTTPMessage=} _requestMessage;
  @"GCDWebServerRequest" _request;
  @"GCDWebServerHandler" _handler;
  ^{__CFHTTPMessage=} _responseMessage;
  @"GCDWebServerResponse" _response;
  q _statusCode;
  B _opened;
  @"GCDWebServer" _server;
  @"NSData" _localAddressData;
  @"NSData" _remoteAddressData;
  Q _totalBytesRead;
  Q _totalBytesWritten;
}

@property (T@"GCDWebServer",R,N,V_server) server;
@property (TB,R,N,GisUsingIPv6) usingIPv6;
@property (T@"NSData",R,N,V_localAddressData) localAddressData;
@property (T@"NSString",R,N) localAddressString;
@property (T@"NSData",R,N,V_remoteAddressData) remoteAddressData;
@property (T@"NSString",R,N) remoteAddressString;
@property (TQ,R,N,V_totalBytesRead) totalBytesRead;
@property (TQ,R,N,V_totalBytesWritten) totalBytesWritten;

/* class methods */
-[GCDWebServerConnection initialize];

/* instance methods */
-[GCDWebServerConnection open];
-[GCDWebServerConnection didReadBytes:length:];
-[GCDWebServerConnection didWriteBytes:length:];
-[GCDWebServerConnection rewriteRequestURL:withMethod:headers:];
-[GCDWebServerConnection preflightRequest:];
-[GCDWebServerConnection processRequest:completion:];
-[GCDWebServerConnection overrideResponse:forRequest:];
-[GCDWebServerConnection abortRequest:withStatusCode:];
-[GCDWebServerConnection close];
-[GCDWebServerConnection writeData:withCompletionBlock:];
-[GCDWebServerConnection writeHeadersWithCompletionBlock:];
-[GCDWebServerConnection writeBodyWithCompletionBlock:];
-[GCDWebServerConnection readData:withLength:completionBlock:];
-[GCDWebServerConnection readHeaders:withCompletionBlock:];
-[GCDWebServerConnection readBodyWithRemainingLength:completionBlock:];
-[GCDWebServerConnection readNextBodyChunk:completionBlock:];
-[GCDWebServerConnection isUsingIPv6];
-[GCDWebServerConnection _initializeResponseHeadersWithStatusCode:];
-[GCDWebServerConnection _startProcessingRequest];
-[GCDWebServerConnection _finishProcessingRequest:];
-[GCDWebServerConnection _readBodyWithLength:initialData:];
-[GCDWebServerConnection _readChunkedBodyWithInitialData:];
-[GCDWebServerConnection _readRequestHeaders];
-[GCDWebServerConnection initWithServer:localAddress:remoteAddress:socket:];
-[GCDWebServerConnection localAddressString];
-[GCDWebServerConnection remoteAddressString];
-[GCDWebServerConnection dealloc];
-[GCDWebServerConnection server];
-[GCDWebServerConnection localAddressData];
-[GCDWebServerConnection remoteAddressData];
-[GCDWebServerConnection totalBytesRead];
-[GCDWebServerConnection totalBytesWritten];
@end

@interface GCDWebServerDataRequest : GCDWebServerRequest {
  /* instance variables */
  @"NSString" _text;
  @ _jsonObject;
  @"NSMutableData" _data;
}

@property (T@"NSString",R,N) text;
@property (T@,R,N) jsonObject;
@property (T@"NSMutableData",&,N,V_data) data;

/* instance methods */
-[GCDWebServerDataRequest text];
-[GCDWebServerDataRequest jsonObject];
-[GCDWebServerDataRequest open:];
-[GCDWebServerDataRequest writeData:error:];
-[GCDWebServerDataRequest close:];
-[GCDWebServerDataRequest description];
-[GCDWebServerDataRequest data];
-[GCDWebServerDataRequest setData:];
@end

@interface GCDWebServerDataResponse : GCDWebServerResponse {
  /* instance variables */
  @"NSData" _data;
  B _done;
}

@property (T@"NSString",C,D,N) contentType;

/* class methods */
-[GCDWebServerDataResponse responseWithText:];
-[GCDWebServerDataResponse responseWithHTML:];
-[GCDWebServerDataResponse responseWithHTMLTemplate:variables:];
-[GCDWebServerDataResponse responseWithJSONObject:];
-[GCDWebServerDataResponse responseWithJSONObject:contentType:];
-[GCDWebServerDataResponse responseWithData:contentType:];

/* instance methods */
-[GCDWebServerDataResponse initWithText:];
-[GCDWebServerDataResponse initWithHTML:];
-[GCDWebServerDataResponse initWithHTMLTemplate:variables:];
-[GCDWebServerDataResponse initWithJSONObject:];
-[GCDWebServerDataResponse initWithJSONObject:contentType:];
-[GCDWebServerDataResponse initWithData:contentType:];
-[GCDWebServerDataResponse readData:];
-[GCDWebServerDataResponse description];
@end

@interface GCDWebServerErrorResponse : GCDWebServerDataResponse
/* class methods */
-[GCDWebServerErrorResponse responseWithClientError:message:];
-[GCDWebServerErrorResponse responseWithServerError:message:];
-[GCDWebServerErrorResponse responseWithClientError:underlyingError:message:];
-[GCDWebServerErrorResponse responseWithServerError:underlyingError:message:];

/* instance methods */
-[GCDWebServerErrorResponse initWithStatusCode:underlyingError:messageFormat:arguments:];
-[GCDWebServerErrorResponse initWithClientError:message:];
-[GCDWebServerErrorResponse initWithServerError:message:];
-[GCDWebServerErrorResponse initWithClientError:underlyingError:message:];
-[GCDWebServerErrorResponse initWithServerError:underlyingError:message:];
@end

@interface GCDWebServerFileRequest : GCDWebServerRequest {
  /* instance variables */
  i _file;
  @"NSString" _temporaryPath;
}

@property (T@"NSString",R,N,V_temporaryPath) temporaryPath;

/* instance methods */
-[GCDWebServerFileRequest initWithMethod:url:headers:path:query:];
-[GCDWebServerFileRequest dealloc];
-[GCDWebServerFileRequest open:];
-[GCDWebServerFileRequest writeData:error:];
-[GCDWebServerFileRequest close:];
-[GCDWebServerFileRequest description];
-[GCDWebServerFileRequest temporaryPath];
@end

@interface GCDWebServerFileResponse : GCDWebServerResponse {
  /* instance variables */
  @"NSString" _path;
  Q _offset;
  Q _size;
  i _file;
}

@property (T@"NSString",C,D,N) contentType;
@property (T@"NSDate",&,D,N) lastModifiedDate;
@property (T@"NSString",C,D,N) eTag;

/* class methods */
-[GCDWebServerFileResponse responseWithFile:];
-[GCDWebServerFileResponse responseWithFile:isAttachment:];
-[GCDWebServerFileResponse responseWithFile:byteRange:];
-[GCDWebServerFileResponse responseWithFile:byteRange:isAttachment:];

/* instance methods */
-[GCDWebServerFileResponse initWithFile:];
-[GCDWebServerFileResponse initWithFile:isAttachment:];
-[GCDWebServerFileResponse initWithFile:byteRange:];
-[GCDWebServerFileResponse initWithFile:byteRange:isAttachment:mimeTypeOverrides:];
-[GCDWebServerFileResponse open:];
-[GCDWebServerFileResponse readData:];
-[GCDWebServerFileResponse close];
-[GCDWebServerFileResponse description];
@end

@interface GCDWebServerGZipDecoder : GCDWebServerBodyDecoder {
  /* instance variables */
  {z_stream_s="next_in"*"avail_in"I"total_in"Q"next_out"*"avail_out"I"total_out"Q"msg"*"state"^{internal_state}"zalloc"^?"zfree"^?"opaque"^v"data_type"i"adler"Q"reserved"Q} _stream;
  B _finished;
}

/* instance methods */
-[GCDWebServerGZipDecoder open:];
-[GCDWebServerGZipDecoder writeData:error:];
-[GCDWebServerGZipDecoder close:];
@end

@interface GCDWebServerGZipEncoder : GCDWebServerBodyEncoder {
  /* instance variables */
  {z_stream_s="next_in"*"avail_in"I"total_in"Q"next_out"*"avail_out"I"total_out"Q"msg"*"state"^{internal_state}"zalloc"^?"zfree"^?"opaque"^v"data_type"i"adler"Q"reserved"Q} _stream;
  B _finished;
}

/* instance methods */
-[GCDWebServerGZipEncoder initWithResponse:reader:];
-[GCDWebServerGZipEncoder open:];
-[GCDWebServerGZipEncoder readData:];
-[GCDWebServerGZipEncoder close];
@end

@interface GCDWebServerHandler :  {
  /* instance variables */
  @? _matchBlock;
  @? _asyncProcessBlock;
}

@property (T@?,R,N,V_matchBlock) matchBlock;
@property (T@?,R,N,V_asyncProcessBlock) asyncProcessBlock;

/* instance methods */
-[GCDWebServerHandler initWithMatchBlock:asyncProcessBlock:];
-[GCDWebServerHandler matchBlock];
-[GCDWebServerHandler asyncProcessBlock];
@end

@interface GCDWebServerMIMEStreamParser :  {
  /* instance variables */
  @"NSData" _boundary;
  @"NSString" _defaultcontrolName;
  i _state;
  @"NSMutableData" _data;
  @"NSMutableArray" _arguments;
  @"NSMutableArray" _files;
  @"NSString" _controlName;
  @"NSString" _fileName;
  @"NSString" _contentType;
  @"NSString" _tmpPath;
  i _tmpFile;
  @"GCDWebServerMIMEStreamParser" _subParser;
}

/* class methods */
-[GCDWebServerMIMEStreamParser initialize];

/* instance methods */
-[GCDWebServerMIMEStreamParser initWithBoundary:defaultControlName:arguments:files:];
-[GCDWebServerMIMEStreamParser dealloc];
-[GCDWebServerMIMEStreamParser _parseData];
-[GCDWebServerMIMEStreamParser appendBytes:length:];
-[GCDWebServerMIMEStreamParser isAtEnd];
@end

@interface GCDWebServerMultiPart :  {
  /* instance variables */
  @"NSString" _controlName;
  @"NSString" _contentType;
  @"NSString" _mimeType;
}

@property (T@"NSString",R,N,V_controlName) controlName;
@property (T@"NSString",R,N,V_contentType) contentType;
@property (T@"NSString",R,N,V_mimeType) mimeType;

/* instance methods */
-[GCDWebServerMultiPart initWithControlName:contentType:];
-[GCDWebServerMultiPart controlName];
-[GCDWebServerMultiPart contentType];
-[GCDWebServerMultiPart mimeType];
@end

@interface GCDWebServerMultiPartArgument : GCDWebServerMultiPart {
  /* instance variables */
  @"NSData" _data;
  @"NSString" _string;
}

@property (T@"NSData",R,N,V_data) data;
@property (T@"NSString",R,N,V_string) string;

/* instance methods */
-[GCDWebServerMultiPartArgument initWithControlName:contentType:data:];
-[GCDWebServerMultiPartArgument description];
-[GCDWebServerMultiPartArgument data];
-[GCDWebServerMultiPartArgument string];
@end

@interface GCDWebServerMultiPartFile : GCDWebServerMultiPart {
  /* instance variables */
  @"NSString" _fileName;
  @"NSString" _temporaryPath;
}

@property (T@"NSString",R,N,V_fileName) fileName;
@property (T@"NSString",R,N,V_temporaryPath) temporaryPath;

/* instance methods */
-[GCDWebServerMultiPartFile initWithControlName:contentType:fileName:temporaryPath:];
-[GCDWebServerMultiPartFile dealloc];
-[GCDWebServerMultiPartFile description];
-[GCDWebServerMultiPartFile fileName];
-[GCDWebServerMultiPartFile temporaryPath];
@end

@interface GCDWebServerMultiPartFormRequest : GCDWebServerRequest {
  /* instance variables */
  @"GCDWebServerMIMEStreamParser" _parser;
  @"NSMutableArray" _arguments;
  @"NSMutableArray" _files;
}

@property (T@"NSMutableArray",&,N,V_arguments) arguments;
@property (T@"NSMutableArray",&,N,V_files) files;

/* class methods */
-[GCDWebServerMultiPartFormRequest mimeType];

/* instance methods */
-[GCDWebServerMultiPartFormRequest initWithMethod:url:headers:path:query:];
-[GCDWebServerMultiPartFormRequest open:];
-[GCDWebServerMultiPartFormRequest writeData:error:];
-[GCDWebServerMultiPartFormRequest close:];
-[GCDWebServerMultiPartFormRequest firstArgumentForControlName:];
-[GCDWebServerMultiPartFormRequest firstFileForControlName:];
-[GCDWebServerMultiPartFormRequest description];
-[GCDWebServerMultiPartFormRequest arguments];
-[GCDWebServerMultiPartFormRequest setArguments:];
-[GCDWebServerMultiPartFormRequest files];
-[GCDWebServerMultiPartFormRequest setFiles:];
@end

@interface GCDWebServerRequest : <GCDWebServerBodyWriter> {
  /* instance variables */
  B _opened;
  @"NSMutableArray" _decoders;
  @"<GCDWebServerBodyWriter>" _writer;
  @"NSMutableDictionary" _attributes;
  B _acceptsGzipContentEncoding;
  B _usesChunkedTransferEncoding;
  @"NSString" _method;
  @"NSURL" _URL;
  @"NSDictionary" _headers;
  @"NSString" _path;
  @"NSDictionary" _query;
  @"NSString" _contentType;
  Q _contentLength;
  @"NSDate" _ifModifiedSince;
  @"NSString" _ifNoneMatch;
  @"NSData" _localAddressData;
  @"NSData" _remoteAddressData;
  {_NSRange="location"Q"length"Q} _byteRange;
}

@property (TB,R,N,V_usesChunkedTransferEncoding) usesChunkedTransferEncoding;
@property (T@"NSData",&,N,V_localAddressData) localAddressData;
@property (T@"NSData",&,N,V_remoteAddressData) remoteAddressData;
@property (T@"NSString",R,N,V_method) method;
@property (T@"NSURL",R,N,V_URL) URL;
@property (T@"NSDictionary",R,N,V_headers) headers;
@property (T@"NSString",R,N,V_path) path;
@property (T@"NSDictionary",R,N,V_query) query;
@property (T@"NSString",R,N,V_contentType) contentType;
@property (TQ,R,N,V_contentLength) contentLength;
@property (T@"NSDate",R,N,V_ifModifiedSince) ifModifiedSince;
@property (T@"NSString",R,N,V_ifNoneMatch) ifNoneMatch;
@property (T{_NSRange=QQ},R,N,V_byteRange) byteRange;
@property (TB,R,N,V_acceptsGzipContentEncoding) acceptsGzipContentEncoding;
@property (T@"NSString",R,N) localAddressString;
@property (T@"NSString",R,N) remoteAddressString;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[GCDWebServerRequest initWithMethod:url:headers:path:query:];
-[GCDWebServerRequest hasBody];
-[GCDWebServerRequest hasByteRange];
-[GCDWebServerRequest attributeForKey:];
-[GCDWebServerRequest open:];
-[GCDWebServerRequest writeData:error:];
-[GCDWebServerRequest close:];
-[GCDWebServerRequest prepareForWriting];
-[GCDWebServerRequest performOpen:];
-[GCDWebServerRequest performWriteData:error:];
-[GCDWebServerRequest performClose:];
-[GCDWebServerRequest setAttribute:forKey:];
-[GCDWebServerRequest localAddressString];
-[GCDWebServerRequest remoteAddressString];
-[GCDWebServerRequest description];
-[GCDWebServerRequest method];
-[GCDWebServerRequest URL];
-[GCDWebServerRequest headers];
-[GCDWebServerRequest path];
-[GCDWebServerRequest query];
-[GCDWebServerRequest contentType];
-[GCDWebServerRequest contentLength];
-[GCDWebServerRequest ifModifiedSince];
-[GCDWebServerRequest ifNoneMatch];
-[GCDWebServerRequest byteRange];
-[GCDWebServerRequest acceptsGzipContentEncoding];
-[GCDWebServerRequest localAddressData];
-[GCDWebServerRequest setLocalAddressData:];
-[GCDWebServerRequest remoteAddressData];
-[GCDWebServerRequest setRemoteAddressData:];
-[GCDWebServerRequest usesChunkedTransferEncoding];
@end

@interface GCDWebServerResponse : <GCDWebServerBodyReader> {
  /* instance variables */
  B _opened;
  @"NSMutableArray" _encoders;
  @"<GCDWebServerBodyReader>" _reader;
  B _gzipContentEncodingEnabled;
  @"NSString" _contentType;
  Q _contentLength;
  q _statusCode;
  Q _cacheControlMaxAge;
  @"NSDate" _lastModifiedDate;
  @"NSString" _eTag;
  @"NSDictionary" _additionalHeaders;
}

@property (T@"NSDictionary",R,N,V_additionalHeaders) additionalHeaders;
@property (TB,R,N) usesChunkedTransferEncoding;
@property (T@"NSString",C,N,V_contentType) contentType;
@property (TQ,N,V_contentLength) contentLength;
@property (Tq,N,V_statusCode) statusCode;
@property (TQ,N,V_cacheControlMaxAge) cacheControlMaxAge;
@property (T@"NSDate",&,N,V_lastModifiedDate) lastModifiedDate;
@property (T@"NSString",C,N,V_eTag) eTag;
@property (TB,N,GisGZipContentEncodingEnabled,V_gzipContentEncodingEnabled) gzipContentEncodingEnabled;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[GCDWebServerResponse responseWithStatusCode:];
-[GCDWebServerResponse responseWithRedirect:permanent:];
-[GCDWebServerResponse response];

/* instance methods */
-[GCDWebServerResponse initWithStatusCode:];
-[GCDWebServerResponse initWithRedirect:permanent:];
-[GCDWebServerResponse init];
-[GCDWebServerResponse setValue:forAdditionalHeader:];
-[GCDWebServerResponse hasBody];
-[GCDWebServerResponse usesChunkedTransferEncoding];
-[GCDWebServerResponse open:];
-[GCDWebServerResponse readData:];
-[GCDWebServerResponse close];
-[GCDWebServerResponse prepareForReading];
-[GCDWebServerResponse performOpen:];
-[GCDWebServerResponse performReadDataWithCompletion:];
-[GCDWebServerResponse performClose];
-[GCDWebServerResponse description];
-[GCDWebServerResponse contentType];
-[GCDWebServerResponse setContentType:];
-[GCDWebServerResponse contentLength];
-[GCDWebServerResponse setContentLength:];
-[GCDWebServerResponse statusCode];
-[GCDWebServerResponse setStatusCode:];
-[GCDWebServerResponse cacheControlMaxAge];
-[GCDWebServerResponse setCacheControlMaxAge:];
-[GCDWebServerResponse lastModifiedDate];
-[GCDWebServerResponse setLastModifiedDate:];
-[GCDWebServerResponse eTag];
-[GCDWebServerResponse setETag:];
-[GCDWebServerResponse isGZipContentEncodingEnabled];
-[GCDWebServerResponse setGzipContentEncodingEnabled:];
-[GCDWebServerResponse additionalHeaders];
@end

@interface GCDWebServerStreamedResponse : GCDWebServerResponse {
  /* instance variables */
  @? _block;
}

@property (T@"NSString",C,D,N) contentType;

/* class methods */
-[GCDWebServerStreamedResponse responseWithContentType:streamBlock:];
-[GCDWebServerStreamedResponse responseWithContentType:asyncStreamBlock:];

/* instance methods */
-[GCDWebServerStreamedResponse initWithContentType:streamBlock:];
-[GCDWebServerStreamedResponse initWithContentType:asyncStreamBlock:];
-[GCDWebServerStreamedResponse asyncReadDataWithCompletion:];
-[GCDWebServerStreamedResponse description];
@end

@interface GCDWebServerURLEncodedFormRequest : GCDWebServerDataRequest {
  /* instance variables */
  @"NSDictionary" _arguments;
}

@property (T@"NSDictionary",R,N,V_arguments) arguments;

/* class methods */
-[GCDWebServerURLEncodedFormRequest mimeType];

/* instance methods */
-[GCDWebServerURLEncodedFormRequest close:];
-[GCDWebServerURLEncodedFormRequest description];
-[GCDWebServerURLEncodedFormRequest arguments];
@end

@interface GLViewPagerViewController : <UIPageViewControllerDelegate, UIPageViewControllerDataSource, UIScrollViewDelegate> {
  /* instance variables */
  B _needsReload;
  {?="numberOfTabsForViewPager"b1"viewForTabIndex"b1"contentViewControllerForTabAtIndex"b1"contentViewForTabAtIndex"b1} _datasourceHas;
  {?="didChangeTabToIndex"I"willChangeTabToIndex"I"widthForTabIndex"I} _delegateHas;
  d leftTabOffsetWidth;
  d rightTabOffsetWidth;
  d leftMinusCurrentWidth;
  d rightMinusCurrentWidth;
  B _enableTabAnimationWhileScrolling;
  B _fixTabWidth;
  B _fixIndicatorWidth;
  B _supportArabic;
  @"UIPageViewController" _pageViewController;
  @"UIView" _headerView;
  @"<GLViewPagerViewControllerDataSource>" _dataSource;
  @"<GLViewPagerViewControllerDelegate>" _delegate;
  @"UIColor" _indicatorColor;
  @"UIFont" _tabFontDefault;
  @"UIFont" _tabFontSelected;
  @"UIColor" _tabTextColorDefault;
  @"UIColor" _tabTextColorSelected;
  d _tabWidth;
  d _tabHeight;
  d _indicatorHeight;
  d _indicatorWidth;
  d _padding;
  d _leadingPadding;
  d _trailingPadding;
  Q _defaultDisplayPageIndex;
  d _animationTabDuration;
  Q _tabAnimationType;
  Q _currentPageIndex;
  @"NSMutableArray" _contentViewControllers;
  @"NSMutableArray" _contentViews;
  @"UIScrollView" _tabContentView;
  @"NSMutableArray" _tabViews;
  @"UIView" _indicatorView;
}

@property (T@"NSMutableArray",&,N,V_contentViewControllers) contentViewControllers;
@property (T@"NSMutableArray",&,N,V_contentViews) contentViews;
@property (T@"UIScrollView",&,N,V_tabContentView) tabContentView;
@property (T@"NSMutableArray",&,N,V_tabViews) tabViews;
@property (T@"UIView",&,N,V_indicatorView) indicatorView;
@property (T@"UIPageViewController",&,N,V_pageViewController) pageViewController;
@property (T@"UIView",&,N,V_headerView) headerView;
@property (T@"<GLViewPagerViewControllerDataSource>",W,N,V_dataSource) dataSource;
@property (T@"<GLViewPagerViewControllerDelegate>",W,N,V_delegate) delegate;
@property (T@"UIColor",&,N,V_indicatorColor) indicatorColor;
@property (T@"UIFont",&,N,V_tabFontDefault) tabFontDefault;
@property (T@"UIFont",&,N,V_tabFontSelected) tabFontSelected;
@property (T@"UIColor",&,N,V_tabTextColorDefault) tabTextColorDefault;
@property (T@"UIColor",&,N,V_tabTextColorSelected) tabTextColorSelected;
@property (TB,N,V_fixTabWidth) fixTabWidth;
@property (Td,N,V_tabWidth) tabWidth;
@property (Td,N,V_tabHeight) tabHeight;
@property (Td,N,V_indicatorHeight) indicatorHeight;
@property (Td,N,V_indicatorWidth) indicatorWidth;
@property (TB,N,V_fixIndicatorWidth) fixIndicatorWidth;
@property (Td,N,V_padding) padding;
@property (Td,N,V_leadingPadding) leadingPadding;
@property (Td,N,V_trailingPadding) trailingPadding;
@property (TQ,N,V_defaultDisplayPageIndex) defaultDisplayPageIndex;
@property (Td,N,V_animationTabDuration) animationTabDuration;
@property (TQ,N,V_tabAnimationType) tabAnimationType;
@property (TB,N,V_supportArabic) supportArabic;
@property (TQ,N,V_currentPageIndex) currentPageIndex;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[GLViewPagerViewController init];
-[GLViewPagerViewController awakeFromNib];
-[GLViewPagerViewController dealloc];
-[GLViewPagerViewController viewWillLayoutSubviews];
-[GLViewPagerViewController viewDidAppear:];
-[GLViewPagerViewController viewDidLoad];
-[GLViewPagerViewController pageViewController:viewControllerBeforeViewController:];
-[GLViewPagerViewController pageViewController:viewControllerAfterViewController:];
-[GLViewPagerViewController pageViewController:didFinishAnimating:previousViewControllers:transitionCompleted:];
-[GLViewPagerViewController scrollViewWillBeginDragging:];
-[GLViewPagerViewController scrollViewDidEndDecelerating:];
-[GLViewPagerViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:];
-[GLViewPagerViewController scrollViewDidScroll:];
-[GLViewPagerViewController tapInTabView:];
-[GLViewPagerViewController defaultSetup];
-[GLViewPagerViewController setDataSource:];
-[GLViewPagerViewController setDelegate:];
-[GLViewPagerViewController reloadData];
-[GLViewPagerViewController tabViewAtIndex:];
-[GLViewPagerViewController _selectTab:animate:];
-[GLViewPagerViewController _setNeedsReload];
-[GLViewPagerViewController _reloadDataIfNeed];
-[GLViewPagerViewController _layoutSubviews];
-[GLViewPagerViewController _setActiveTabIndex:];
-[GLViewPagerViewController _setActivePageIndex:];
-[GLViewPagerViewController _getTabWidthAtIndex:];
-[GLViewPagerViewController _caculateIndicatorViewFrame:];
-[GLViewPagerViewController _caculateTabOffsetWidth:];
-[GLViewPagerViewController _disableViewPagerScroll];
-[GLViewPagerViewController _enableViewPagerScroll];
-[GLViewPagerViewController tabContentView];
-[GLViewPagerViewController indicatorView];
-[GLViewPagerViewController pageViewController];
-[GLViewPagerViewController contentViewControllers];
-[GLViewPagerViewController contentViews];
-[GLViewPagerViewController tabViews];
-[GLViewPagerViewController setPageViewController:];
-[GLViewPagerViewController headerView];
-[GLViewPagerViewController setHeaderView:];
-[GLViewPagerViewController dataSource];
-[GLViewPagerViewController delegate];
-[GLViewPagerViewController indicatorColor];
-[GLViewPagerViewController setIndicatorColor:];
-[GLViewPagerViewController tabFontDefault];
-[GLViewPagerViewController setTabFontDefault:];
-[GLViewPagerViewController tabFontSelected];
-[GLViewPagerViewController setTabFontSelected:];
-[GLViewPagerViewController tabTextColorDefault];
-[GLViewPagerViewController setTabTextColorDefault:];
-[GLViewPagerViewController tabTextColorSelected];
-[GLViewPagerViewController setTabTextColorSelected:];
-[GLViewPagerViewController fixTabWidth];
-[GLViewPagerViewController setFixTabWidth:];
-[GLViewPagerViewController tabWidth];
-[GLViewPagerViewController setTabWidth:];
-[GLViewPagerViewController tabHeight];
-[GLViewPagerViewController setTabHeight:];
-[GLViewPagerViewController indicatorHeight];
-[GLViewPagerViewController setIndicatorHeight:];
-[GLViewPagerViewController indicatorWidth];
-[GLViewPagerViewController setIndicatorWidth:];
-[GLViewPagerViewController fixIndicatorWidth];
-[GLViewPagerViewController setFixIndicatorWidth:];
-[GLViewPagerViewController padding];
-[GLViewPagerViewController setPadding:];
-[GLViewPagerViewController leadingPadding];
-[GLViewPagerViewController setLeadingPadding:];
-[GLViewPagerViewController trailingPadding];
-[GLViewPagerViewController setTrailingPadding:];
-[GLViewPagerViewController defaultDisplayPageIndex];
-[GLViewPagerViewController setDefaultDisplayPageIndex:];
-[GLViewPagerViewController animationTabDuration];
-[GLViewPagerViewController setAnimationTabDuration:];
-[GLViewPagerViewController tabAnimationType];
-[GLViewPagerViewController setTabAnimationType:];
-[GLViewPagerViewController supportArabic];
-[GLViewPagerViewController setSupportArabic:];
-[GLViewPagerViewController currentPageIndex];
-[GLViewPagerViewController setCurrentPageIndex:];
-[GLViewPagerViewController setContentViewControllers:];
-[GLViewPagerViewController setContentViews:];
-[GLViewPagerViewController setTabContentView:];
-[GLViewPagerViewController setTabViews:];
-[GLViewPagerViewController setIndicatorView:];
@end

@interface JGProgressHUD :  {
  /* instance variables */
  B _transitioning;
  B _updateAfterAppear;
  B _dismissAfterTransitionFinished;
  B _dismissAfterTransitionFinishedWithAnimation;
  d _displayTimestamp;
  B _effectiveIndicatorViewNeedsUpdate;
  @"UIView" _blurViewContainer;
  @"UIView" _shadowView;
  @"CAShapeLayer" _shadowMaskLayer;
  B _square;
  B _vibrancyEnabled;
  B _voiceOverEnabled;
  f _progress;
  @"UIView" _HUDView;
  @"UIVisualEffectView" _blurView;
  @"UIVisualEffectView" _vibrancyView;
  @"UILabel" _textLabel;
  @"UILabel" _detailTextLabel;
  @"JGProgressHUDIndicatorView" _indicatorView;
  @"JGProgressHUDAnimation" _animation;
  @"UIView" _contentView;
  Q _style;
  @"UIView" _targetView;
  @"<JGProgressHUDDelegate>" _delegate;
  @"JGProgressHUDShadow" _shadow;
  Q _position;
  Q _interactionType;
  Q _parallaxMode;
  d _cornerRadius;
  d _layoutChangeAnimationDuration;
  d _minimumDisplayTime;
  @? _tapOnHUDViewBlock;
  @? _tapOutsideBlock;
  @"JGProgressHUDIndicatorView" _effectiveIndicatorView;
  {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInsets;
}

@property (T@"UIVisualEffectView",R,N,V_blurView) blurView;
@property (T@"UIVisualEffectView",R,N,V_vibrancyView) vibrancyView;
@property (T@"JGProgressHUDIndicatorView",R,N,V_effectiveIndicatorView) effectiveIndicatorView;
@property (TQ,R,N,V_style) style;
@property (T@"UIView",R,W,N,V_targetView) targetView;
@property (T@"<JGProgressHUDDelegate>",W,N,V_delegate) delegate;
@property (T@"UIView",R,N,V_HUDView) HUDView;
@property (T@"UIView",R,N,V_contentView) contentView;
@property (T@"UILabel",R,N,V_textLabel) textLabel;
@property (T@"UILabel",R,N,V_detailTextLabel) detailTextLabel;
@property (T@"JGProgressHUDIndicatorView",&,N,V_indicatorView) indicatorView;
@property (T@"JGProgressHUDShadow",&,N,V_shadow) shadow;
@property (TQ,N,V_position) position;
@property (T@"JGProgressHUDAnimation",&,N,V_animation) animation;
@property (TQ,N,V_interactionType) interactionType;
@property (TQ,N,V_parallaxMode) parallaxMode;
@property (TB,N,V_square) square;
@property (TB,N,V_vibrancyEnabled) vibrancyEnabled;
@property (Td,N,V_cornerRadius) cornerRadius;
@property (T{UIEdgeInsets=dddd},N,V_contentInsets) contentInsets;
@property (T{UIEdgeInsets=dddd},N) marginInsets;
@property (Td,N,V_layoutChangeAnimationDuration) layoutChangeAnimationDuration;
@property (TB,R,D,N,GisVisible) visible;
@property (Tf,N,V_progress) progress;
@property (Td,N,V_minimumDisplayTime) minimumDisplayTime;
@property (TB,N,V_voiceOverEnabled) voiceOverEnabled;
@property (T@?,C,N,V_tapOnHUDViewBlock) tapOnHUDViewBlock;
@property (T@?,C,N,V_tapOutsideBlock) tapOutsideBlock;

/* class methods */
-[JGProgressHUD allProgressHUDsInView:];
-[JGProgressHUD _allProgressHUDsInViewHierarchy:];
-[JGProgressHUD allProgressHUDsInViewHierarchy:];
-[JGProgressHUD keyboardFrameWillChange:];
-[JGProgressHUD keyboardFrameDidChange:];
-[JGProgressHUD keyboardDidHide];
-[JGProgressHUD load];
-[JGProgressHUD currentKeyboardFrame];
-[JGProgressHUD progressHUDWithStyle:];

/* instance methods */
-[JGProgressHUD showInRect:inView:];
-[JGProgressHUD showInRect:inView:animated:];
-[JGProgressHUD init];
-[JGProgressHUD initWithFrame:];
-[JGProgressHUD initWithStyle:];
-[JGProgressHUD setHUDViewFrameCenterWithSize:insetViewFrame:];
-[JGProgressHUD updateShadowViewMask];
-[JGProgressHUD layoutHUD];
-[JGProgressHUD insetFrameForView:];
-[JGProgressHUD applyCornerRadius];
-[JGProgressHUD cleanUpAfterPresentation];
-[JGProgressHUD showInView:];
-[JGProgressHUD layoutSubviews];
-[JGProgressHUD showInView:animated:];
-[JGProgressHUD cleanUpAfterDismissal];
-[JGProgressHUD dismiss];
-[JGProgressHUD dismissAnimated:];
-[JGProgressHUD dismissAfterDelay:];
-[JGProgressHUD dismissAfterDelay:animated:];
-[JGProgressHUD tapped:];
-[JGProgressHUD keyboardFrameChanged:];
-[JGProgressHUD updateMotionOnHUDView];
-[JGProgressHUD animationDidFinish:];
-[JGProgressHUD isVisible];
-[JGProgressHUD blurView];
-[JGProgressHUD vibrancyView];
-[JGProgressHUD contentView];
-[JGProgressHUD textLabel];
-[JGProgressHUD detailTextLabel];
-[JGProgressHUD animation];
-[JGProgressHUD setCornerRadius:];
-[JGProgressHUD setShadow:];
-[JGProgressHUD setAnimation:];
-[JGProgressHUD setParallaxMode:];
-[JGProgressHUD setPosition:];
-[JGProgressHUD setSquare:];
-[JGProgressHUD setVibrancyEnabled:];
-[JGProgressHUD setIndicatorView:];
-[JGProgressHUD setEffectiveIndicatorView:];
-[JGProgressHUD layoutMarginsDidChange];
-[JGProgressHUD setMarginInsets:];
-[JGProgressHUD marginInsets];
-[JGProgressHUD setContentInsets:];
-[JGProgressHUD setProgress:];
-[JGProgressHUD setProgress:animated:];
-[JGProgressHUD hitTest:withEvent:];
-[JGProgressHUD observeValueForKeyPath:ofObject:change:context:];
-[JGProgressHUD dealloc];
-[JGProgressHUD removeObservers];
-[JGProgressHUD HUDView];
-[JGProgressHUD indicatorView];
-[JGProgressHUD style];
-[JGProgressHUD targetView];
-[JGProgressHUD delegate];
-[JGProgressHUD setDelegate:];
-[JGProgressHUD shadow];
-[JGProgressHUD position];
-[JGProgressHUD interactionType];
-[JGProgressHUD setInteractionType:];
-[JGProgressHUD parallaxMode];
-[JGProgressHUD square];
-[JGProgressHUD vibrancyEnabled];
-[JGProgressHUD cornerRadius];
-[JGProgressHUD contentInsets];
-[JGProgressHUD layoutChangeAnimationDuration];
-[JGProgressHUD setLayoutChangeAnimationDuration:];
-[JGProgressHUD progress];
-[JGProgressHUD minimumDisplayTime];
-[JGProgressHUD setMinimumDisplayTime:];
-[JGProgressHUD voiceOverEnabled];
-[JGProgressHUD setVoiceOverEnabled:];
-[JGProgressHUD tapOnHUDViewBlock];
-[JGProgressHUD setTapOnHUDViewBlock:];
-[JGProgressHUD tapOutsideBlock];
-[JGProgressHUD setTapOutsideBlock:];
-[JGProgressHUD effectiveIndicatorView];
@end

@interface JGProgressHUDAnimation :  {
  /* instance variables */
  B _presenting;
  @"JGProgressHUD" _progressHUD;
}

@property (T@"JGProgressHUD",W,N,V_progressHUD) progressHUD;

/* class methods */
-[JGProgressHUDAnimation animation];

/* instance methods */
-[JGProgressHUDAnimation show];
-[JGProgressHUDAnimation hide];
-[JGProgressHUDAnimation animationFinished];
-[JGProgressHUDAnimation progressHUD];
-[JGProgressHUDAnimation setProgressHUD:];
@end

@interface JGProgressHUDErrorIndicatorView : JGProgressHUDImageIndicatorView
/* instance methods */
-[JGProgressHUDErrorIndicatorView initWithContentView:];
-[JGProgressHUDErrorIndicatorView init];
-[JGProgressHUDErrorIndicatorView updateAccessibility];
@end

@interface JGProgressHUDFadeAnimation : JGProgressHUDAnimation {
  /* instance variables */
  d _duration;
  Q _animationOptions;
}

@property (Td,N,V_duration) duration;
@property (TQ,N,V_animationOptions) animationOptions;

/* instance methods */
-[JGProgressHUDFadeAnimation init];
-[JGProgressHUDFadeAnimation setAnimationOptions:];
-[JGProgressHUDFadeAnimation show];
-[JGProgressHUDFadeAnimation hide];
-[JGProgressHUDFadeAnimation duration];
-[JGProgressHUDFadeAnimation setDuration:];
-[JGProgressHUDFadeAnimation animationOptions];
@end

@interface JGProgressHUDFadeZoomAnimation : JGProgressHUDAnimation {
  /* instance variables */
  d _shrinkAnimationDuaration;
  d _expandAnimationDuaration;
  {CGSize="width"d"height"d} _expandScale;
}

@property (Td,N,V_shrinkAnimationDuaration) shrinkAnimationDuaration;
@property (Td,N,V_expandAnimationDuaration) expandAnimationDuaration;
@property (T{CGSize=dd},N,V_expandScale) expandScale;

/* instance methods */
-[JGProgressHUDFadeZoomAnimation init];
-[JGProgressHUDFadeZoomAnimation show];
-[JGProgressHUDFadeZoomAnimation hide];
-[JGProgressHUDFadeZoomAnimation shrinkAnimationDuaration];
-[JGProgressHUDFadeZoomAnimation setShrinkAnimationDuaration:];
-[JGProgressHUDFadeZoomAnimation expandAnimationDuaration];
-[JGProgressHUDFadeZoomAnimation setExpandAnimationDuaration:];
-[JGProgressHUDFadeZoomAnimation expandScale];
-[JGProgressHUDFadeZoomAnimation setExpandScale:];
@end

@interface JGProgressHUDImageIndicatorView : JGProgressHUDIndicatorView {
  /* instance variables */
  B _customizedTintColor;
}

/* instance methods */
-[JGProgressHUDImageIndicatorView initWithImage:];
-[JGProgressHUDImageIndicatorView setUpForHUDStyle:vibrancyEnabled:];
-[JGProgressHUDImageIndicatorView setTintColor:];
@end

@interface JGProgressHUDIndeterminateIndicatorView : JGProgressHUDIndicatorView
/* instance methods */
-[JGProgressHUDIndeterminateIndicatorView init];
-[JGProgressHUDIndeterminateIndicatorView initWithHUDStyle:];
-[JGProgressHUDIndeterminateIndicatorView setUpForHUDStyle:vibrancyEnabled:];
-[JGProgressHUDIndeterminateIndicatorView setColor:];
-[JGProgressHUDIndeterminateIndicatorView updateAccessibility];
@end

@interface JGProgressHUDIndicatorView :  {
  /* instance variables */
  B _accessibilityUpdateScheduled;
  f _progress;
  @"UIView" _contentView;
}

@property (Tf,N,V_progress) progress;
@property (T@"UIView",R,N,V_contentView) contentView;

/* class methods */
-[JGProgressHUDIndicatorView runBlock:];

/* instance methods */
-[JGProgressHUDIndicatorView initWithFrame:];
-[JGProgressHUDIndicatorView init];
-[JGProgressHUDIndicatorView initWithContentView:];
-[JGProgressHUDIndicatorView setUpForHUDStyle:vibrancyEnabled:];
-[JGProgressHUDIndicatorView setNeedsAccessibilityUpdate];
-[JGProgressHUDIndicatorView updateAccessibilityIfNeeded];
-[JGProgressHUDIndicatorView updateAccessibility];
-[JGProgressHUDIndicatorView setProgress:];
-[JGProgressHUDIndicatorView setProgress:animated:];
-[JGProgressHUDIndicatorView progress];
-[JGProgressHUDIndicatorView contentView];
@end

@interface JGProgressHUDLottieDownloadingView : JGProgressHUDIndicatorView {
  /* instance variables */
  @"LOTAnimationView" _animation;
}

@property (T@"LOTAnimationView",&,N,V_animation) animation;

/* instance methods */
-[JGProgressHUDLottieDownloadingView init];
-[JGProgressHUDLottieDownloadingView layoutSubviews];
-[JGProgressHUDLottieDownloadingView animation];
-[JGProgressHUDLottieDownloadingView setAnimation:];
@end

@interface JGProgressHUDLottieErrorView : JGProgressHUDIndicatorView {
  /* instance variables */
  @"LOTAnimationView" _animation;
}

@property (T@"LOTAnimationView",&,N,V_animation) animation;

/* instance methods */
-[JGProgressHUDLottieErrorView init];
-[JGProgressHUDLottieErrorView layoutSubviews];
-[JGProgressHUDLottieErrorView animation];
-[JGProgressHUDLottieErrorView setAnimation:];
@end

@interface JGProgressHUDLottieLoadingView : JGProgressHUDIndicatorView {
  /* instance variables */
  @"LOTAnimationView" _animation;
}

@property (T@"LOTAnimationView",&,N,V_animation) animation;

/* instance methods */
-[JGProgressHUDLottieLoadingView init];
-[JGProgressHUDLottieLoadingView layoutSubviews];
-[JGProgressHUDLottieLoadingView animation];
-[JGProgressHUDLottieLoadingView setAnimation:];
@end

@interface JGProgressHUDLottieSuccessView : JGProgressHUDIndicatorView {
  /* instance variables */
  @"LOTAnimationView" _animation;
}

@property (T@"LOTAnimationView",&,N,V_animation) animation;

/* instance methods */
-[JGProgressHUDLottieSuccessView init];
-[JGProgressHUDLottieSuccessView layoutSubviews];
-[JGProgressHUDLottieSuccessView animation];
-[JGProgressHUDLottieSuccessView setAnimation:];
@end

@interface JGProgressHUDPieIndicatorLayer : 

@property (Tf,D,N) progress;
@property (T@"UIColor",W,D,N) color;
@property (T@"UIColor",W,D,N) fillColor;

/* class methods */
-[JGProgressHUDPieIndicatorLayer needsDisplayForKey:];

/* instance methods */
-[JGProgressHUDPieIndicatorLayer actionForKey:];
-[JGProgressHUDPieIndicatorLayer drawInContext:];
@end

@interface JGProgressHUDPieIndicatorView : JGProgressHUDIndicatorView {
  /* instance variables */
  @"UIColor" _color;
  @"UIColor" _fillColor;
}

@property (T@"UIColor",&,N,V_color) color;
@property (T@"UIColor",&,N,V_fillColor) fillColor;

/* class methods */
-[JGProgressHUDPieIndicatorView layerClass];

/* instance methods */
-[JGProgressHUDPieIndicatorView init];
-[JGProgressHUDPieIndicatorView initWithHUDStyle:];
-[JGProgressHUDPieIndicatorView initWithContentView:];
-[JGProgressHUDPieIndicatorView setColor:];
-[JGProgressHUDPieIndicatorView setFillColor:];
-[JGProgressHUDPieIndicatorView setProgress:animated:];
-[JGProgressHUDPieIndicatorView setUpForHUDStyle:vibrancyEnabled:];
-[JGProgressHUDPieIndicatorView color];
-[JGProgressHUDPieIndicatorView fillColor];
@end

@interface JGProgressHUDRingIndicatorLayer : 

@property (Tf,D,N) progress;
@property (T@"UIColor",W,D,N) ringColor;
@property (T@"UIColor",W,D,N) ringBackgroundColor;
@property (TB,D,N) roundProgressLine;
@property (Td,D,N) ringWidth;

/* class methods */
-[JGProgressHUDRingIndicatorLayer needsDisplayForKey:];

/* instance methods */
-[JGProgressHUDRingIndicatorLayer actionForKey:];
-[JGProgressHUDRingIndicatorLayer drawInContext:];
@end

@interface JGProgressHUDRingIndicatorView : JGProgressHUDIndicatorView {
  /* instance variables */
  B _roundProgressLine;
  @"UIColor" _ringBackgroundColor;
  @"UIColor" _ringColor;
  d _ringWidth;
}

@property (T@"UIColor",&,N,V_ringBackgroundColor) ringBackgroundColor;
@property (T@"UIColor",&,N,V_ringColor) ringColor;
@property (TB,N,V_roundProgressLine) roundProgressLine;
@property (Td,N,V_ringWidth) ringWidth;

/* class methods */
-[JGProgressHUDRingIndicatorView layerClass];

/* instance methods */
-[JGProgressHUDRingIndicatorView init];
-[JGProgressHUDRingIndicatorView initWithHUDStyle:];
-[JGProgressHUDRingIndicatorView initWithContentView:];
-[JGProgressHUDRingIndicatorView setRoundProgressLine:];
-[JGProgressHUDRingIndicatorView setRingColor:];
-[JGProgressHUDRingIndicatorView setRingBackgroundColor:];
-[JGProgressHUDRingIndicatorView setRingWidth:];
-[JGProgressHUDRingIndicatorView setProgress:animated:];
-[JGProgressHUDRingIndicatorView setUpForHUDStyle:vibrancyEnabled:];
-[JGProgressHUDRingIndicatorView ringBackgroundColor];
-[JGProgressHUDRingIndicatorView ringColor];
-[JGProgressHUDRingIndicatorView roundProgressLine];
-[JGProgressHUDRingIndicatorView ringWidth];
@end

@interface JGProgressHUDShadow :  {
  /* instance variables */
  f _opacity;
  @"UIColor" _color;
  d _radius;
  {CGSize="width"d"height"d} _offset;
}

@property (T@"UIColor",R,N,V_color) color;
@property (T{CGSize=dd},R,N,V_offset) offset;
@property (Td,R,N,V_radius) radius;
@property (Tf,R,N,V_opacity) opacity;

/* class methods */
-[JGProgressHUDShadow shadowWithColor:offset:radius:opacity:];

/* instance methods */
-[JGProgressHUDShadow initWithColor:offset:radius:opacity:];
-[JGProgressHUDShadow color];
-[JGProgressHUDShadow offset];
-[JGProgressHUDShadow radius];
-[JGProgressHUDShadow opacity];
@end

@interface JGProgressHUDSuccessIndicatorView : JGProgressHUDImageIndicatorView
/* instance methods */
-[JGProgressHUDSuccessIndicatorView initWithContentView:];
-[JGProgressHUDSuccessIndicatorView init];
-[JGProgressHUDSuccessIndicatorView updateAccessibility];
@end

@interface JTMaterialSwitch :  {
  /* instance variables */
  f thumbOnPosition;
  f thumbOffPosition;
  f bounceOffset;
  i thumbStyle;
  @"CAShapeLayer" rippleLayer;
  B _isOn;
  B _isEnabled;
  B _isBounceEnabled;
  B _isRippleEnabled;
  @"<JTMaterialSwitchDelegate>" _delegate;
  @"UIColor" _thumbOnTintColor;
  @"UIColor" _thumbOffTintColor;
  @"UIColor" _trackOnTintColor;
  @"UIColor" _trackOffTintColor;
  @"UIColor" _thumbDisabledTintColor;
  @"UIColor" _trackDisabledTintColor;
  @"UIColor" _rippleFillColor;
  @"UIButton" _switchThumb;
  @"UIView" _track;
  d _trackThickness;
  d _thumbSize;
}

@property (Td,N,V_trackThickness) trackThickness;
@property (Td,N,V_thumbSize) thumbSize;
@property (T@"<JTMaterialSwitchDelegate>",N,V_delegate) delegate;
@property (TB,N,V_isOn) isOn;
@property (TB,N,V_isEnabled) isEnabled;
@property (TB,N,V_isBounceEnabled) isBounceEnabled;
@property (TB,N,V_isRippleEnabled) isRippleEnabled;
@property (T@"UIColor",&,N,V_thumbOnTintColor) thumbOnTintColor;
@property (T@"UIColor",&,N,V_thumbOffTintColor) thumbOffTintColor;
@property (T@"UIColor",&,N,V_trackOnTintColor) trackOnTintColor;
@property (T@"UIColor",&,N,V_trackOffTintColor) trackOffTintColor;
@property (T@"UIColor",&,N,V_thumbDisabledTintColor) thumbDisabledTintColor;
@property (T@"UIColor",&,N,V_trackDisabledTintColor) trackDisabledTintColor;
@property (T@"UIColor",&,N,V_rippleFillColor) rippleFillColor;
@property (T@"UIButton",&,N,V_switchThumb) switchThumb;
@property (T@"UIView",&,N,V_track) track;

/* instance methods */
-[JTMaterialSwitch init];
-[JTMaterialSwitch initWithSize:state:];
-[JTMaterialSwitch initWithSize:style:state:];
-[JTMaterialSwitch willMoveToSuperview:];
-[JTMaterialSwitch getSwitchState];
-[JTMaterialSwitch setOn:animated:];
-[JTMaterialSwitch setEnabled:];
-[JTMaterialSwitch switchAreaTapped:];
-[JTMaterialSwitch changeThumbState];
-[JTMaterialSwitch changeThumbStateONwithAnimation];
-[JTMaterialSwitch changeThumbStateOFFwithAnimation];
-[JTMaterialSwitch changeThumbStateONwithoutAnimation];
-[JTMaterialSwitch changeThumbStateOFFwithoutAnimation];
-[JTMaterialSwitch initializeRipple];
-[JTMaterialSwitch animateRippleEffect];
-[JTMaterialSwitch onTouchDown:withEvent:];
-[JTMaterialSwitch switchThumbTapped:];
-[JTMaterialSwitch onTouchUpOutsideOrCanceled:withEvent:];
-[JTMaterialSwitch onTouchDragInside:withEvent:];
-[JTMaterialSwitch delegate];
-[JTMaterialSwitch setDelegate:];
-[JTMaterialSwitch isOn];
-[JTMaterialSwitch setIsOn:];
-[JTMaterialSwitch isEnabled];
-[JTMaterialSwitch setIsEnabled:];
-[JTMaterialSwitch isBounceEnabled];
-[JTMaterialSwitch setIsBounceEnabled:];
-[JTMaterialSwitch isRippleEnabled];
-[JTMaterialSwitch setIsRippleEnabled:];
-[JTMaterialSwitch thumbOnTintColor];
-[JTMaterialSwitch setThumbOnTintColor:];
-[JTMaterialSwitch thumbOffTintColor];
-[JTMaterialSwitch setThumbOffTintColor:];
-[JTMaterialSwitch trackOnTintColor];
-[JTMaterialSwitch setTrackOnTintColor:];
-[JTMaterialSwitch trackOffTintColor];
-[JTMaterialSwitch setTrackOffTintColor:];
-[JTMaterialSwitch thumbDisabledTintColor];
-[JTMaterialSwitch setThumbDisabledTintColor:];
-[JTMaterialSwitch trackDisabledTintColor];
-[JTMaterialSwitch setTrackDisabledTintColor:];
-[JTMaterialSwitch rippleFillColor];
-[JTMaterialSwitch setRippleFillColor:];
-[JTMaterialSwitch switchThumb];
-[JTMaterialSwitch setSwitchThumb:];
-[JTMaterialSwitch track];
-[JTMaterialSwitch setTrack:];
-[JTMaterialSwitch trackThickness];
-[JTMaterialSwitch setTrackThickness:];
-[JTMaterialSwitch thumbSize];
-[JTMaterialSwitch setThumbSize:];
@end

@interface LNForwardingDelegate :  {
  /* instance variables */
  @ _forwardedDelegate;
}

@property (T@,W,N,V_forwardedDelegate) forwardedDelegate;

/* instance methods */
-[LNForwardingDelegate respondsToSelector:];
-[LNForwardingDelegate forwardInvocation:];
-[LNForwardingDelegate methodSignatureForSelector:];
-[LNForwardingDelegate forwardedDelegate];
-[LNForwardingDelegate setForwardedDelegate:];
@end

@interface LNPopupBar : <UIPointerInteractionDelegate, _LNPopupBarAppearanceDelegate, UIAppearanceContainer> {
  /* instance variables */
  q _resolvedStyle;
  B _delaysBarButtonItemLayout;
  @"UIView" _titlesView;
  @"UILabel<__MarqueeLabelType>" _titleLabel;
  @"UILabel<__MarqueeLabelType>" _subtitleLabel;
  B _needsLabelsLayout;
  B _marqueePaused;
  @"UIColor" _userTintColor;
  @"UIColor" _userBackgroundColor;
  @"UIToolbar" _toolbar;
  @"UIView" _shadowView;
  B _inheritsAppearanceFromDockingView;
  B __applySwiftUILayoutFixes;
  @"LNPopupItem" _popupItem;
  @"NSArray" _leadingBarButtonItems;
  @"NSArray" _trailingBarButtonItems;
  @"UIImageView" _imageView;
  q _barStyle;
  @"LNPopupBarAppearance" _standardAppearance;
  q _progressViewStyle;
  @"UIProgressView" _progressView;
  q _barItemsSemanticContentAttribute;
  @"UITapGestureRecognizer" _popupOpenGestureRecognizer;
  @"UILongPressGestureRecognizer" _barHighlightGestureRecognizer;
  @"LNPopupCustomBarViewController" _customBarViewController;
  @"UIColor" _systemTintColor;
  @"UIColor" _systemBackgroundColor;
  @"UIBarAppearance" _systemAppearance;
  @"_LNPopupBarAppearanceChainProxy" _activeAppearanceChain;
  @"UIView" _bottomShadowView;
  @"<_LNPopupBarDelegate>" __barDelegate;
  @"NSString" _title;
  @"NSString" _subtitle;
  @"UIImage" _image;
  @"UIViewController" _swiftuiImageController;
  @"UIView" _highlightView;
  @"UIView" _contentView;
  @"_LNPopupBarBackgroundView" _backgroundView;
  @"UIVisualEffectView" _interactionBackgroundView;
  @"NSString" _accessibilityCenterLabel;
  @"NSString" _accessibilityCenterHint;
  @"NSString" _accessibilityImageLabel;
  @"NSString" _accessibilityProgressLabel;
  @"NSString" _accessibilityProgressValue;
}

@property (TB,N) inheritsVisualStyleFromDockingView;
@property (Tq,N) backgroundStyle;
@property (T@"UIColor",&,N) barTintColor;
@property (TB,N,GisTranslucent) translucent;
@property (T@"NSDictionary",C,N) titleTextAttributes;
@property (T@"NSDictionary",C,N) subtitleTextAttributes;
@property (TB,N) marqueeScrollEnabled;
@property (Td,N) marqueeScrollRate;
@property (Td,N) marqueeScrollDelay;
@property (TB,N) coordinateMarqueeScroll;
@property (T@"<LNPopupBarPreviewingDelegate>",W,N) previewingDelegate;
@property (T@"NSArray",R,C,N) leftBarButtonItems;
@property (T@"NSArray",R,C,N) rightBarButtonItems;
@property (T@"UIColor",&,N,V_systemTintColor) systemTintColor;
@property (T@"UIColor",&,N,V_systemBackgroundColor) systemBackgroundColor;
@property (T@"UIBarAppearance",&,N,V_systemAppearance) systemAppearance;
@property (T@"_LNPopupBarAppearanceChainProxy",R,N,V_activeAppearanceChain) activeAppearanceChain;
@property (T@"UIView",&,N,V_bottomShadowView) bottomShadowView;
@property (T@"LNPopupItem",W,N,V_popupItem) popupItem;
@property (T@"<_LNPopupBarDelegate>",W,N,V__barDelegate) _barDelegate;
@property (T@"NSString",C,N,V_title) title;
@property (T@"NSString",C,N,V_subtitle) subtitle;
@property (T@"UIImage",&,N,V_image) image;
@property (T@"UIViewController",&,N,V_swiftuiImageController) swiftuiImageController;
@property (T@"UIView",&,N,V_highlightView) highlightView;
@property (T@"UIProgressView",&,N,V_progressView) progressView;
@property (T@"UIView",&,N,V_contentView) contentView;
@property (T@"_LNPopupBarBackgroundView",&,N,V_backgroundView) backgroundView;
@property (T@"UIVisualEffectView",&,N,V_interactionBackgroundView) interactionBackgroundView;
@property (T@"NSString",&,N) effectGroupingIdentifier;
@property (T@"NSString",C,N,V_accessibilityCenterLabel) accessibilityCenterLabel;
@property (T@"NSString",C,N,V_accessibilityCenterHint) accessibilityCenterHint;
@property (T@"NSString",C,N,V_accessibilityImageLabel) accessibilityImageLabel;
@property (T@"NSString",C,N,V_accessibilityProgressLabel) accessibilityProgressLabel;
@property (T@"NSString",C,N,V_accessibilityProgressValue) accessibilityProgressValue;
@property (T@"NSArray",C,N,V_leadingBarButtonItems) leadingBarButtonItems;
@property (T@"NSArray",C,N,V_trailingBarButtonItems) trailingBarButtonItems;
@property (T@"UITapGestureRecognizer",&,N,V_popupOpenGestureRecognizer) popupOpenGestureRecognizer;
@property (T@"UILongPressGestureRecognizer",&,N,V_barHighlightGestureRecognizer) barHighlightGestureRecognizer;
@property (TB,N,V__applySwiftUILayoutFixes) _applySwiftUILayoutFixes;
@property (TB,N,V_inheritsAppearanceFromDockingView) inheritsAppearanceFromDockingView;
@property (T@"NSArray",R,C,N) barButtonItems;
@property (T@"UIImageView",R,N,V_imageView) imageView;
@property (Tq,N,V_barStyle) barStyle;
@property (T@"LNPopupBarAppearance",C,N,V_standardAppearance) standardAppearance;
@property (Tq,N,V_progressViewStyle) progressViewStyle;
@property (Tq,N,V_barItemsSemanticContentAttribute) barItemsSemanticContentAttribute;
@property (T@"LNPopupCustomBarViewController",&,N,V_customBarViewController) customBarViewController;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[LNPopupBar inheritsVisualStyleFromDockingView];
-[LNPopupBar setInheritsVisualStyleFromDockingView:];
-[LNPopupBar setBackgroundStyle:];
-[LNPopupBar backgroundStyle];
-[LNPopupBar setBarTintColor:];
-[LNPopupBar barTintColor];
-[LNPopupBar setTranslucent:];
-[LNPopupBar isTranslucent];
-[LNPopupBar setTitleTextAttributes:];
-[LNPopupBar titleTextAttributes];
-[LNPopupBar setSubtitleTextAttributes:];
-[LNPopupBar subtitleTextAttributes];
-[LNPopupBar setMarqueeScrollEnabled:];
-[LNPopupBar marqueeScrollEnabled];
-[LNPopupBar setMarqueeScrollRate:];
-[LNPopupBar marqueeScrollRate];
-[LNPopupBar setMarqueeScrollDelay:];
-[LNPopupBar marqueeScrollDelay];
-[LNPopupBar setCoordinateMarqueeScroll:];
-[LNPopupBar coordinateMarqueeScroll];
-[LNPopupBar leftBarButtonItems];
-[LNPopupBar rightBarButtonItems];
-[LNPopupBar setHidden:];
-[LNPopupBar setBarStyle:];
-[LNPopupBar _setHighlightAlpha:animated:];
-[LNPopupBar setHighlighted:animated:];
-[LNPopupBar initWithFrame:];
-[LNPopupBar traitCollectionDidChange:];
-[LNPopupBar _updateProgressViewWithStyle:];
-[LNPopupBar updateConstraints];
-[LNPopupBar _layoutCustomBarController];
-[LNPopupBar layoutSubviews];
-[LNPopupBar updatePageStyles];
-[LNPopupBar _effectGroupingIdentifierKey];
-[LNPopupBar _applyGroupingIdentifier:toVisualEffectView:];
-[LNPopupBar _applyGroupingIdentifierToVisualEffectView:];
-[LNPopupBar effectGroupingIdentifier];
-[LNPopupBar setEffectGroupingIdentifier:];
-[LNPopupBar backgroundColor];
-[LNPopupBar _internalSetBackgroundColor:];
-[LNPopupBar setBackgroundColor:];
-[LNPopupBar setSystemBackgroundColor:];
-[LNPopupBar setSystemAppearance:];
-[LNPopupBar setStandardAppearance:];
-[LNPopupBar _recalcActiveAppearanceChain];
-[LNPopupBar setPopupItem:];
-[LNPopupBar popupBarAppearanceDidChange:];
-[LNPopupBar _appearanceDidChange];
-[LNPopupBar setProgressViewStyle:];
-[LNPopupBar tintColor];
-[LNPopupBar setTintColor:];
-[LNPopupBar setSystemTintColor:];
-[LNPopupBar setTitle:];
-[LNPopupBar setSubtitle:];
-[LNPopupBar setImage:];
-[LNPopupBar setSwiftuiImageController:];
-[LNPopupBar setAccessibilityCenterHint:];
-[LNPopupBar setAccessibilityCenterLabel:];
-[LNPopupBar setAccessibilityImageLabel:];
-[LNPopupBar setAccessibilityProgressLabel:];
-[LNPopupBar setAccessibilityProgressValue:];
-[LNPopupBar setSemanticContentAttribute:];
-[LNPopupBar setBarItemsSemanticContentAttribute:];
-[LNPopupBar _newMarqueeLabel];
-[LNPopupBar _viewForBarButtonItem:];
-[LNPopupBar _getLeftmostView:rightmostView:fromBarButtonItems:];
-[LNPopupBar _updateTitleInsetsForCompactBar:];
-[LNPopupBar _updateTitleInsetsForProminentBar:];
-[LNPopupBar _layoutTitles];
-[LNPopupBar _updateAccessibility];
-[LNPopupBar _setNeedsTitleLayout];
-[LNPopupBar _layoutImageView];
-[LNPopupBar _setTitleLabelFontsAccordingToBarStyleAndTint];
-[LNPopupBar _setTitleViewMarqueesPaused:];
-[LNPopupBar _delayBarButtonLayout];
-[LNPopupBar _layoutBarButtonItems];
-[LNPopupBar _updateViewsAfterCustomBarViewControllerUpdate];
-[LNPopupBar observeValueForKeyPath:ofObject:change:context:];
-[LNPopupBar setCustomBarViewController:];
-[LNPopupBar setLeadingBarButtonItems:];
-[LNPopupBar setTrailingBarButtonItems:];
-[LNPopupBar _recalculateCoordinatedMarqueeScrollIfNeeded];
-[LNPopupBar _removeAnimationFromBarItems];
-[LNPopupBar _transitionCustomBarViewControllerWithPopupContainerSize:withCoordinator:];
-[LNPopupBar _transitionCustomBarViewControllerWithPopupContainerTraitCollection:withCoordinator:];
-[LNPopupBar dealloc];
-[LNPopupBar barButtonItems];
-[LNPopupBar _cancelAnyUserInteraction];
-[LNPopupBar set_applySwiftUILayoutFixes:];
-[LNPopupBar pointerInteraction:regionForRequest:defaultRegion:];
-[LNPopupBar pointerInteraction:styleForRegion:];
-[LNPopupBar pointerInteraction:willEnterRegion:animator:];
-[LNPopupBar pointerInteraction:willExitRegion:animator:];
-[LNPopupBar inheritsAppearanceFromDockingView];
-[LNPopupBar setInheritsAppearanceFromDockingView:];
-[LNPopupBar popupItem];
-[LNPopupBar leadingBarButtonItems];
-[LNPopupBar trailingBarButtonItems];
-[LNPopupBar imageView];
-[LNPopupBar barStyle];
-[LNPopupBar standardAppearance];
-[LNPopupBar progressViewStyle];
-[LNPopupBar progressView];
-[LNPopupBar setProgressView:];
-[LNPopupBar barItemsSemanticContentAttribute];
-[LNPopupBar popupOpenGestureRecognizer];
-[LNPopupBar setPopupOpenGestureRecognizer:];
-[LNPopupBar barHighlightGestureRecognizer];
-[LNPopupBar setBarHighlightGestureRecognizer:];
-[LNPopupBar customBarViewController];
-[LNPopupBar systemTintColor];
-[LNPopupBar systemBackgroundColor];
-[LNPopupBar systemAppearance];
-[LNPopupBar activeAppearanceChain];
-[LNPopupBar bottomShadowView];
-[LNPopupBar setBottomShadowView:];
-[LNPopupBar _barDelegate];
-[LNPopupBar set_barDelegate:];
-[LNPopupBar title];
-[LNPopupBar subtitle];
-[LNPopupBar image];
-[LNPopupBar swiftuiImageController];
-[LNPopupBar highlightView];
-[LNPopupBar setHighlightView:];
-[LNPopupBar contentView];
-[LNPopupBar setContentView:];
-[LNPopupBar backgroundView];
-[LNPopupBar setBackgroundView:];
-[LNPopupBar interactionBackgroundView];
-[LNPopupBar setInteractionBackgroundView:];
-[LNPopupBar accessibilityCenterLabel];
-[LNPopupBar accessibilityCenterHint];
-[LNPopupBar accessibilityImageLabel];
-[LNPopupBar accessibilityProgressLabel];
-[LNPopupBar accessibilityProgressValue];
-[LNPopupBar _applySwiftUILayoutFixes];
@end

@interface LNPopupBarAppearance :  {
  /* instance variables */
  B _marqueeScrollEnabled;
  B _coordinateMarqueeScroll;
  @"NSDictionary" _titleTextAttributes;
  @"NSDictionary" _subtitleTextAttributes;
  @"UIBarButtonItemAppearance" _buttonAppearance;
  @"UIColor" _highlightColor;
  @"UIBarButtonItemAppearance" _doneButtonAppearance;
  d _marqueeScrollRate;
  d _marqueeScrollDelay;
  @"<_LNPopupBarAppearanceDelegate>" _delegate;
}

@property (T@"<_LNPopupBarAppearanceDelegate>",W,N,V_delegate) delegate;
@property (T@"NSDictionary",C,N,V_titleTextAttributes) titleTextAttributes;
@property (T@"NSDictionary",C,N,V_subtitleTextAttributes) subtitleTextAttributes;
@property (T@"UIBarButtonItemAppearance",C,N,V_buttonAppearance) buttonAppearance;
@property (T@"UIColor",C,N,V_highlightColor) highlightColor;
@property (T@"UIBarButtonItemAppearance",C,N,V_doneButtonAppearance) doneButtonAppearance;
@property (TB,N,V_marqueeScrollEnabled) marqueeScrollEnabled;
@property (Td,N,V_marqueeScrollRate) marqueeScrollRate;
@property (Td,N,V_marqueeScrollDelay) marqueeScrollDelay;
@property (TB,N,V_coordinateMarqueeScroll) coordinateMarqueeScroll;

/* class methods */
-[LNPopupBarAppearance load];

/* instance methods */
-[LNPopupBarAppearance _notify];
-[LNPopupBarAppearance a:cC:];
-[LNPopupBarAppearance setTitleTextAttributes:];
-[LNPopupBarAppearance setSubtitleTextAttributes:];
-[LNPopupBarAppearance setButtonAppearance:];
-[LNPopupBarAppearance setDoneButtonAppearance:];
-[LNPopupBarAppearance setMarqueeScrollEnabled:];
-[LNPopupBarAppearance setMarqueeScrollRate:];
-[LNPopupBarAppearance setMarqueeScrollDelay:];
-[LNPopupBarAppearance setCoordinateMarqueeScroll:];
-[LNPopupBarAppearance setHighlightColor:];
-[LNPopupBarAppearance _commonInit];
-[LNPopupBarAppearance initWithIdiom:];
-[LNPopupBarAppearance encodeWithCoder:];
-[LNPopupBarAppearance initWithCoder:];
-[LNPopupBarAppearance initWithBarAppearance:];
-[LNPopupBarAppearance copy];
-[LNPopupBarAppearance copyWithZone:];
-[LNPopupBarAppearance configureWithDefaultHighlightColor];
-[LNPopupBarAppearance configureWithDefaultMarqueeScroll];
-[LNPopupBarAppearance configureWithDisabledMarqueeScroll];
-[LNPopupBarAppearance titleTextAttributes];
-[LNPopupBarAppearance subtitleTextAttributes];
-[LNPopupBarAppearance buttonAppearance];
-[LNPopupBarAppearance highlightColor];
-[LNPopupBarAppearance doneButtonAppearance];
-[LNPopupBarAppearance marqueeScrollEnabled];
-[LNPopupBarAppearance marqueeScrollRate];
-[LNPopupBarAppearance marqueeScrollDelay];
-[LNPopupBarAppearance coordinateMarqueeScroll];
-[LNPopupBarAppearance delegate];
-[LNPopupBarAppearance setDelegate:];
@end

@interface LNPopupCloseButton : <UIAppearanceContainer> {
  /* instance variables */
  @"UIVisualEffectView" _effectView;
  @"UIView" _highlightView;
  @"__LNChevronView" _chevronView;
  q _style;
  @"LNPopupContentView" _popupContentView;
}

@property (T@"LNPopupContentView",W,N,V_popupContentView) popupContentView;
@property (Tq,N,V_style) style;
@property (T@"UIVisualEffectView",R,N) backgroundView;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[LNPopupCloseButton init];
-[LNPopupCloseButton _setStyle:];
-[LNPopupCloseButton backgroundView];
-[LNPopupCloseButton _cleanup];
-[LNPopupCloseButton _setupForChevronButton];
-[LNPopupCloseButton _setupForCircularButton];
-[LNPopupCloseButton _didTouchDown];
-[LNPopupCloseButton _didTouchDragExit];
-[LNPopupCloseButton _didTouchDragEnter];
-[LNPopupCloseButton _didTouchUp];
-[LNPopupCloseButton _didTouchCancel];
-[LNPopupCloseButton _setHighlighted:animated:];
-[LNPopupCloseButton layoutSubviews];
-[LNPopupCloseButton sizeThatFits:];
-[LNPopupCloseButton intrinsicContentSize];
-[LNPopupCloseButton _setButtonContainerStationary];
-[LNPopupCloseButton _setButtonContainerTransitioning];
-[LNPopupCloseButton tintColorDidChange];
-[LNPopupCloseButton style];
-[LNPopupCloseButton setStyle:];
-[LNPopupCloseButton popupContentView];
-[LNPopupCloseButton setPopupContentView:];
@end

@interface LNPopupContentView : <UIAppearanceContainer> {
  /* instance variables */
  q _userOverrideUserInterfaceStyle;
  q _controllerOverrideUserInterfaceStyle;
  @"NSLayoutConstraint" _popupCloseButtonTopConstraint;
  @"NSLayoutConstraint" _popupCloseButtonCenterConstraint;
  @"NSLayoutConstraint" _popupCloseButtonLeadingConstraint;
  B _popupCloseButtonAutomaticallyUnobstructsTopBars;
  B _translucent;
  @"UIPanGestureRecognizer" _popupInteractionGestureRecognizer;
  q _popupCloseButtonStyle;
  @"LNPopupCloseButton" _popupCloseButton;
  @"UIBlurEffect" _backgroundEffect;
  @"UIVisualEffectView" _effectView;
  @"UIViewController" _currentPopupContentViewController;
}

@property (T@"UIPanGestureRecognizer",&,N,V_popupInteractionGestureRecognizer) popupInteractionGestureRecognizer;
@property (T@"LNPopupCloseButton",&,N,V_popupCloseButton) popupCloseButton;
@property (T@"UIVisualEffectView",&,N,V_effectView) effectView;
@property (T@"UIView",R,N) contentView;
@property (T@"UIViewController",W,N,V_currentPopupContentViewController) currentPopupContentViewController;
@property (Tq,N,V_popupCloseButtonStyle) popupCloseButtonStyle;
@property (TB,N,V_popupCloseButtonAutomaticallyUnobstructsTopBars) popupCloseButtonAutomaticallyUnobstructsTopBars;
@property (T@"UIBlurEffect",C,N,V_backgroundEffect) backgroundEffect;
@property (TB,N,GisTranslucent,V_translucent) translucent;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[LNPopupContentView setBackgroundStyle:];
-[LNPopupContentView backgroundStyle];
-[LNPopupContentView initWithFrame:];
-[LNPopupContentView layoutSubviews];
-[LNPopupContentView contentView];
-[LNPopupContentView setCurrentPopupContentViewController:];
-[LNPopupContentView setPopupCloseButtonStyle:];
-[LNPopupContentView _view:selfOrSuperviewKindOfClass:];
-[LNPopupContentView _repositionPopupCloseButton];
-[LNPopupContentView scrollViewDidScroll:];
-[LNPopupContentView safeAreaInsetsDidChange];
-[LNPopupContentView overrideUserInterfaceStyle];
-[LNPopupContentView setOverrideUserInterfaceStyle:];
-[LNPopupContentView setControllerOverrideUserInterfaceStyle:];
-[LNPopupContentView _applyBackgroundEffectWithContentViewController:barEffect:];
-[LNPopupContentView popupInteractionGestureRecognizer];
-[LNPopupContentView setPopupInteractionGestureRecognizer:];
-[LNPopupContentView popupCloseButtonStyle];
-[LNPopupContentView popupCloseButton];
-[LNPopupContentView setPopupCloseButton:];
-[LNPopupContentView popupCloseButtonAutomaticallyUnobstructsTopBars];
-[LNPopupContentView setPopupCloseButtonAutomaticallyUnobstructsTopBars:];
-[LNPopupContentView backgroundEffect];
-[LNPopupContentView setBackgroundEffect:];
-[LNPopupContentView isTranslucent];
-[LNPopupContentView setTranslucent:];
-[LNPopupContentView effectView];
-[LNPopupContentView setEffectView:];
-[LNPopupContentView currentPopupContentViewController];
@end

@interface LNPopupController : <_LNPopupItemDelegate, _LNPopupBarDelegate> {
  /* instance variables */
  @"LNPopupItem" _currentPopupItem;
  B _dismissGestureStarted;
  d _dismissStartingOffset;
  d _dismissScrollViewStartingContentOffset;
  q _stateBeforeDismissStarted;
  B _dismissalOverride;
  {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _cachedDefaultFrame;
  {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _cachedInsets;
  {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _cachedOpenPopupFrame;
  d _statusBarThresholdDir;
  d _bottomBarOffset;
  @"UIView" _bottomBar;
  @"LNPopupBar" _popupBar;
  @"LNPopupContentView" _popupContentView;
  @"UIScrollView" _popupContentContainerView;
  q _popupControllerPublicState;
  q _popupControllerInternalState;
  q _popupControllerTargetState;
  @"<LNPopupPresentationDelegate>" _userPopupPresentationDelegate;
  @"UIViewController" _currentContentController;
  @"UIViewController" _containerController;
  d _lastSeenMovement;
  @"UIViewController" _effectiveStatusBarUpdateController;
  {CGPoint="x"d"y"d} _lastPopupBarLocation;
}

@property (T@"UIView",W,N,V_bottomBar) bottomBar;
@property (T@"LNPopupBar",&,N,V_popupBar) popupBar;
@property (T@"LNPopupBar",R,N) popupBarStorage;
@property (T@"LNPopupContentView",&,N,V_popupContentView) popupContentView;
@property (T@"UIScrollView",&,N,V_popupContentContainerView) popupContentContainerView;
@property (Tq,N,V_popupControllerPublicState) popupControllerPublicState;
@property (Tq,N,V_popupControllerInternalState) popupControllerInternalState;
@property (Tq,N,V_popupControllerTargetState) popupControllerTargetState;
@property (T@"<LNPopupPresentationDelegate>",W,N,V_userPopupPresentationDelegate) userPopupPresentationDelegate;
@property (T@"UIViewController",&,N,V_currentContentController) currentContentController;
@property (T@"UIViewController",W,N,V_containerController) containerController;
@property (T{CGPoint=dd},N,V_lastPopupBarLocation) lastPopupBarLocation;
@property (Td,N,V_lastSeenMovement) lastSeenMovement;
@property (T@"UIViewController",W,N,V_effectiveStatusBarUpdateController) effectiveStatusBarUpdateController;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LNPopupController _statusBarHeightForView:];

/* instance methods */
-[LNPopupController initWithContainerViewController:];
-[LNPopupController _frameForOpenPopupBar];
-[LNPopupController _frameForClosedPopupBar];
-[LNPopupController _repositionPopupContentMovingBottomBar:];
-[LNPopupController _percentFromPopupBar];
-[LNPopupController _percentFromPopupBarForBottomBarDisplacement];
-[LNPopupController _setContentToState:];
-[LNPopupController _addContentControllerSubview:];
-[LNPopupController _removeContentControllerFromContentView:];
-[LNPopupController _transitionToState:notifyDelegate:animated:useSpringAnimation:allowPopupBarAlphaModification:completion:transitionOriginatedByUser:];
-[LNPopupController _popupBarLongPressGestureRecognized:];
-[LNPopupController _popupBarTapGestureRecognized:];
-[LNPopupController _popupBarPresentationByUserPanGestureHandler_began:];
-[LNPopupController rubberbandFromHeight:];
-[LNPopupController _popupBarPresentationByUserPanGestureHandler_changed:];
-[LNPopupController _popupBarPresentationByUserPanGestureHandler_endedOrCancelled:];
-[LNPopupController _popupBarPresentationByUserPanGestureHandler:];
-[LNPopupController positionForBar:];
-[LNPopupController _closePopupContent];
-[LNPopupController _reconfigure_title];
-[LNPopupController _reconfigure_subtitle];
-[LNPopupController _reconfigure_image];
-[LNPopupController _reconfigure_progress];
-[LNPopupController _reconfigure_progressTintColor];
-[LNPopupController _reconfigure_accessibilityLavel];
-[LNPopupController _reconfigure_accessibilityHint];
-[LNPopupController _reconfigure_accessibilityImageLabel];
-[LNPopupController _reconfigure_accessibilityProgressLabel];
-[LNPopupController _reconfigure_accessibilityProgressValue];
-[LNPopupController _reconfigureBarItems];
-[LNPopupController _reconfigure_leadingBarButtonItems];
-[LNPopupController _reconfigure_trailingBarButtonItems];
-[LNPopupController _reconfigure_swiftuiImageController];
-[LNPopupController _reconfigure_standardAppearance];
-[LNPopupController _popupItem:didChangeValueForKey:];
-[LNPopupController _reconfigureContentWithOldContentController:newContentController:];
-[LNPopupController _configurePopupBarFromBottomBar];
-[LNPopupController _updateBarExtensionStyleFromPopupBar];
-[LNPopupController _movePopupBarAndContentToBottomBarSuperview];
-[LNPopupController popupBarStorage];
-[LNPopupController popupContentView];
-[LNPopupController dealloc];
-[LNPopupController _fixupGestureRecognizersForController:];
-[LNPopupController _cleanupGestureRecognizersForController:];
-[LNPopupController presentPopupBarAnimated:openPopup:completion:];
-[LNPopupController openPopupAnimated:completion:];
-[LNPopupController closePopupAnimated:completion:];
-[LNPopupController dismissPopupBarAnimated:completion:];
-[LNPopupController _applicationDidEnterBackground];
-[LNPopupController _applicationWillEnterForeground];
-[LNPopupController _removeInteractionGestureForPopupBar:];
-[LNPopupController _traitCollectionForPopupBarDidChange:];
-[LNPopupController _popupBarMetricsDidChange:];
-[LNPopupController _popupBarStyleDidChange:];
-[LNPopupController _popupBar:updateCustomBarController:cleanup:];
-[LNPopupController bottomBar];
-[LNPopupController setBottomBar:];
-[LNPopupController popupBar];
-[LNPopupController setPopupBar:];
-[LNPopupController setPopupContentView:];
-[LNPopupController popupContentContainerView];
-[LNPopupController setPopupContentContainerView:];
-[LNPopupController popupControllerPublicState];
-[LNPopupController setPopupControllerPublicState:];
-[LNPopupController popupControllerInternalState];
-[LNPopupController setPopupControllerInternalState:];
-[LNPopupController popupControllerTargetState];
-[LNPopupController setPopupControllerTargetState:];
-[LNPopupController userPopupPresentationDelegate];
-[LNPopupController setUserPopupPresentationDelegate:];
-[LNPopupController currentContentController];
-[LNPopupController setCurrentContentController:];
-[LNPopupController containerController];
-[LNPopupController setContainerController:];
-[LNPopupController lastPopupBarLocation];
-[LNPopupController setLastPopupBarLocation:];
-[LNPopupController lastSeenMovement];
-[LNPopupController setLastSeenMovement:];
-[LNPopupController effectiveStatusBarUpdateController];
-[LNPopupController setEffectiveStatusBarUpdateController:];
@end

@interface LNPopupControllerLongPressGestureDelegate : LNForwardingDelegate<UIGestureRecognizerDelegate>

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[LNPopupControllerLongPressGestureDelegate gestureRecognizer:shouldReceiveTouch:];
-[LNPopupControllerLongPressGestureDelegate gestureRecognizer:shouldRequireFailureOfGestureRecognizer:];
-[LNPopupControllerLongPressGestureDelegate gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:];
@end

@interface LNPopupCustomBarViewController : <UIPointerInteractionDelegate> {
  /* instance variables */
  @"LNPopupBar" _containingPopupBar;
  @"LNPopupController" _popupController;
}

@property (T@"LNPopupBar",W,N,V_containingPopupBar) containingPopupBar;
@property (T@"LNPopupController",W,N,V_popupController) popupController;
@property (TB,R,N) wantsDefaultTapGestureRecognizer;
@property (TB,R,N) wantsDefaultPanGestureRecognizer;
@property (TB,R,N) wantsDefaultHighlightGestureRecognizer;
@property (T{CGSize=dd},D,N) preferredContentSize;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[LNPopupCustomBarViewController initWithNibName:bundle:];
-[LNPopupCustomBarViewController viewDidLoad];
-[LNPopupCustomBarViewController wantsDefaultTapGestureRecognizer];
-[LNPopupCustomBarViewController wantsDefaultPanGestureRecognizer];
-[LNPopupCustomBarViewController wantsDefaultHighlightGestureRecognizer];
-[LNPopupCustomBarViewController setPreferredContentSize:];
-[LNPopupCustomBarViewController popupItemDidUpdate];
-[LNPopupCustomBarViewController popupContentViewController];
-[LNPopupCustomBarViewController popupPresentationContainerViewController];
-[LNPopupCustomBarViewController containingPopupBar];
-[LNPopupCustomBarViewController setContainingPopupBar:];
-[LNPopupCustomBarViewController popupController];
-[LNPopupCustomBarViewController setPopupController:];
@end

@interface LNPopupInteractionPanGestureRecognizer :  {
  /* instance variables */
  @"LNPopupInteractionPanGestureRecognizerDelegate" _actualDelegate;
}

/* instance methods */
-[LNPopupInteractionPanGestureRecognizer initWithTarget:action:popupController:];
-[LNPopupInteractionPanGestureRecognizer delegate];
-[LNPopupInteractionPanGestureRecognizer setDelegate:];
@end

@interface LNPopupInteractionPanGestureRecognizerDelegate : LNForwardingDelegate<UIGestureRecognizerDelegate> {
  /* instance variables */
  @"LNPopupController" _popupController;
}

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[LNPopupInteractionPanGestureRecognizerDelegate initWithPopupController:];
-[LNPopupInteractionPanGestureRecognizerDelegate gestureRecognizerShouldBegin:];
-[LNPopupInteractionPanGestureRecognizerDelegate gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:];
-[LNPopupInteractionPanGestureRecognizerDelegate gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:];
-[LNPopupInteractionPanGestureRecognizerDelegate gestureRecognizer:shouldRequireFailureOfGestureRecognizer:];
@end

@interface LNPopupItem :  {
  /* instance variables */
  f _progress;
  @"NSString" _accessibilityImageLabel;
  @"NSString" _accessibilityProgressLabel;
  @"NSString" _accessibilityProgressValue;
  @"NSString" _title;
  @"NSString" _subtitle;
  @"UIImage" _image;
  @"UIColor" _progressTintColor;
  @"NSArray" _leadingBarButtonItems;
  @"NSArray" _trailingBarButtonItems;
  @"LNPopupBarAppearance" _standardAppearance;
  @"UIViewController" _swiftuiImageController;
  @"<_LNPopupItemDelegate>" _itemDelegate;
  @"UIViewController" _containerController;
}

@property (T@"NSArray",C,N) leftBarButtonItems;
@property (T@"NSArray",C,N) rightBarButtonItems;
@property (T@"UIViewController",&,N,V_swiftuiImageController) swiftuiImageController;
@property (T@"NSString",C,N,V_accessibilityImageLabel) accessibilityImageLabel;
@property (T@"NSString",C,N,V_accessibilityProgressLabel) accessibilityProgressLabel;
@property (T@"NSString",C,N,V_accessibilityProgressValue) accessibilityProgressValue;
@property (T@"<_LNPopupItemDelegate>",W,N,G_itemDelegate,S_setItemDelegate:,V_itemDelegate) itemDelegate;
@property (T@"UIViewController",W,N,G_containerController,S_setContainerController:,V_containerController) containerController;
@property (T@"NSString",C,N,V_title) title;
@property (T@"NSString",C,N,V_subtitle) subtitle;
@property (T@"UIImage",&,N,V_image) image;
@property (Tf,N,V_progress) progress;
@property (T@"UIColor",&,N,V_progressTintColor) progressTintColor;
@property (T@"NSArray",C,N) barButtonItems;
@property (T@"NSArray",C,N,V_leadingBarButtonItems) leadingBarButtonItems;
@property (T@"NSArray",C,N,V_trailingBarButtonItems) trailingBarButtonItems;
@property (T@"LNPopupBarAppearance",C,N,V_standardAppearance) standardAppearance;

/* class methods */
-[LNPopupItem load];

/* instance methods */
-[LNPopupItem leftBarButtonItems];
-[LNPopupItem setLeftBarButtonItems:];
-[LNPopupItem rightBarButtonItems];
-[LNPopupItem setRightBarButtonItems:];
-[LNPopupItem init];
-[LNPopupItem dealloc];
-[LNPopupItem observeValueForKeyPath:ofObject:change:context:];
-[LNPopupItem title];
-[LNPopupItem setProgress:];
-[LNPopupItem setProgressTintColor:];
-[LNPopupItem barButtonItems];
-[LNPopupItem setBarButtonItems:];
-[LNPopupItem accessibilityImageLabel];
-[LNPopupItem setAccessibilityImageLabel:];
-[LNPopupItem accessibilityProgressLabel];
-[LNPopupItem setAccessibilityProgressLabel:];
-[LNPopupItem accessibilityProgressValue];
-[LNPopupItem setAccessibilityProgressValue:];
-[LNPopupItem setTitle:];
-[LNPopupItem subtitle];
-[LNPopupItem setSubtitle:];
-[LNPopupItem image];
-[LNPopupItem setImage:];
-[LNPopupItem progress];
-[LNPopupItem progressTintColor];
-[LNPopupItem leadingBarButtonItems];
-[LNPopupItem setLeadingBarButtonItems:];
-[LNPopupItem trailingBarButtonItems];
-[LNPopupItem setTrailingBarButtonItems:];
-[LNPopupItem standardAppearance];
-[LNPopupItem setStandardAppearance:];
-[LNPopupItem swiftuiImageController];
-[LNPopupItem setSwiftuiImageController:];
-[LNPopupItem _itemDelegate];
-[LNPopupItem _setItemDelegate:];
-[LNPopupItem _containerController];
-[LNPopupItem _setContainerController:];
@end

@interface LNPopupLongPressGestureRecognizer :  {
  /* instance variables */
  @"LNPopupControllerLongPressGestureDelegate" _actualDelegate;
}

/* instance methods */
-[LNPopupLongPressGestureRecognizer initWithTarget:action:];
-[LNPopupLongPressGestureRecognizer delegate];
-[LNPopupLongPressGestureRecognizer setDelegate:];
@end

@interface LNPopupOpenTapGestureRecognizer :  {
  /* instance variables */
  @"LNPopupOpenTapGestureRecognizerForwardingDelegate" _actualDelegate;
}

/* instance methods */
-[LNPopupOpenTapGestureRecognizer initWithTarget:action:];
-[LNPopupOpenTapGestureRecognizer delegate];
-[LNPopupOpenTapGestureRecognizer setDelegate:];
@end

@interface LNPopupOpenTapGestureRecognizerForwardingDelegate : LNForwardingDelegate<UIGestureRecognizerDelegate>

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[LNPopupOpenTapGestureRecognizerForwardingDelegate gestureRecognizer:shouldReceiveTouch:];
@end

@interface LOTAnimatedControl :  {
  /* instance variables */
  Q _priorState;
  @"NSMutableDictionary" _layerMap;
  @"LOTAnimationView" _animationView;
}

@property (T@"LOTAnimationView",R,N,V_animationView) animationView;
@property (T@"LOTComposition",&,N) animationComp;

/* instance methods */
-[LOTAnimatedControl initWithFrame:];
-[LOTAnimatedControl initWithCoder:];
-[LOTAnimatedControl _commonInit];
-[LOTAnimatedControl animationComp];
-[LOTAnimatedControl setAnimationComp:];
-[LOTAnimatedControl setLayerName:forState:];
-[LOTAnimatedControl setEnabled:];
-[LOTAnimatedControl setSelected:];
-[LOTAnimatedControl setHighlighted:];
-[LOTAnimatedControl touchesBegan:withEvent:];
-[LOTAnimatedControl touchesMoved:withEvent:];
-[LOTAnimatedControl touchesEnded:withEvent:];
-[LOTAnimatedControl touchesCancelled:withEvent:];
-[LOTAnimatedControl intrinsicContentSize];
-[LOTAnimatedControl layoutSubviews];
-[LOTAnimatedControl accessibilityTraits];
-[LOTAnimatedControl isAccessibilityElement];
-[LOTAnimatedControl checkStateChangedAndUpdate:];
-[LOTAnimatedControl animationView];
@end

@interface LOTAnimatedSwitch : LOTAnimatedControl {
  /* instance variables */
  d _onStartProgress;
  d _onEndProgress;
  d _offStartProgress;
  d _offEndProgress;
  {CGPoint="x"d"y"d} _touchTrackingStart;
  B _on;
  B _suppressToggle;
  B _toggleToState;
  B _interactiveGesture;
}

@property (TB,N,GisOn,V_on) on;
@property (TB,N,V_interactiveGesture) interactiveGesture;

/* class methods */
-[LOTAnimatedSwitch switchNamed:];
-[LOTAnimatedSwitch switchNamed:inBundle:];

/* instance methods */
-[LOTAnimatedSwitch initWithFrame:];
-[LOTAnimatedSwitch setAnimationComp:];
-[LOTAnimatedSwitch setProgressRangeForOnState:toProgress:];
-[LOTAnimatedSwitch setProgressRangeForOffState:toProgress:];
-[LOTAnimatedSwitch setOn:];
-[LOTAnimatedSwitch setOn:animated:];
-[LOTAnimatedSwitch accessibilityValue];
-[LOTAnimatedSwitch _toggle];
-[LOTAnimatedSwitch _toggleAndSendActions];
-[LOTAnimatedSwitch beginTrackingWithTouch:withEvent:];
-[LOTAnimatedSwitch continueTrackingWithTouch:withEvent:];
-[LOTAnimatedSwitch endTrackingWithTouch:withEvent:];
-[LOTAnimatedSwitch isOn];
-[LOTAnimatedSwitch interactiveGesture];
-[LOTAnimatedSwitch setInteractiveGesture:];
@end

@interface LOTAnimationCache :  {
  /* instance variables */
  @"NSMutableDictionary" animationsCache_;
  @"NSMutableArray" lruOrderArray_;
}

/* class methods */
-[LOTAnimationCache sharedCache];

/* instance methods */
-[LOTAnimationCache init];
-[LOTAnimationCache addAnimation:forKey:];
-[LOTAnimationCache animationForKey:];
-[LOTAnimationCache clearCache];
-[LOTAnimationCache removeAnimationForKey:];
-[LOTAnimationCache disableCaching];
@end

@interface LOTAnimationTransitionController : <UIViewControllerAnimatedTransitioning> {
  /* instance variables */
  @"LOTAnimationView" transitionAnimationView_;
  @"NSString" fromLayerName_;
  @"NSString" toLayerName_;
  @"NSBundle" inBundle_;
  B _applyTransform;
}

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[LOTAnimationTransitionController initWithAnimationNamed:fromLayerNamed:toLayerNamed:applyAnimationTransform:];
-[LOTAnimationTransitionController initWithAnimationNamed:fromLayerNamed:toLayerNamed:applyAnimationTransform:inBundle:];
-[LOTAnimationTransitionController transitionDuration:];
-[LOTAnimationTransitionController animateTransition:];
@end

@interface LOTAnimationView : <CAAnimationDelegate> {
  /* instance variables */
  @"LOTCompositionContainer" _compContainer;
  @"NSNumber" _playRangeStartFrame;
  @"NSNumber" _playRangeEndFrame;
  d _playRangeStartProgress;
  d _playRangeEndProgress;
  @"NSBundle" _bundle;
  d _animationProgress;
  B _shouldRestoreStateWhenAttachedToWindow;
  @? _completionBlockToRestoreWhenAttachedToWindow;
  B _isAnimationPlaying;
  B _loopAnimation;
  B _autoReverseAnimation;
  B _cacheEnable;
  B _shouldRasterizeWhenIdle;
  @"NSString" _animation;
  d _animationSpeed;
  @? _completionBlock;
  @"LOTComposition" _sceneModel;
}

@property (T@"NSString",&,N,V_animation) animation;
@property (TB,R,N,V_isAnimationPlaying) isAnimationPlaying;
@property (TB,N,V_loopAnimation) loopAnimation;
@property (TB,N,V_autoReverseAnimation) autoReverseAnimation;
@property (Td,N) animationProgress;
@property (Td,N,V_animationSpeed) animationSpeed;
@property (Td,R,N) animationDuration;
@property (TB,N,V_cacheEnable) cacheEnable;
@property (T@?,C,N,V_completionBlock) completionBlock;
@property (T@"LOTComposition",&,N,V_sceneModel) sceneModel;
@property (TB,N,V_shouldRasterizeWhenIdle) shouldRasterizeWhenIdle;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTAnimationView animationNamed:];
-[LOTAnimationView animationNamed:inBundle:];
-[LOTAnimationView animationFromJSON:];
-[LOTAnimationView animationFromJSON:inBundle:];
-[LOTAnimationView animationWithFilePath:];
-[LOTAnimationView animationWithFilePath:withTint:];

/* instance methods */
-[LOTAnimationView initWithContentsOfURL:];
-[LOTAnimationView initWithModel:inBundle:];
-[LOTAnimationView initWithFrame:];
-[LOTAnimationView initWithCoder:];
-[LOTAnimationView setAnimation:];
-[LOTAnimationView _initializeAnimationContainer];
-[LOTAnimationView _commonInit];
-[LOTAnimationView dealloc];
-[LOTAnimationView _setupWithSceneModel:];
-[LOTAnimationView _restoreState];
-[LOTAnimationView _removeCurrentAnimationIfNecessary];
-[LOTAnimationView _progressForFrame:];
-[LOTAnimationView _frameForProgress:];
-[LOTAnimationView _isSpeedNegative];
-[LOTAnimationView _handleWindowChanges:];
-[LOTAnimationView _handleWillEnterBackground];
-[LOTAnimationView _handleWillEnterForeground];
-[LOTAnimationView _callCompletionIfNecessary:];
-[LOTAnimationView setAnimationNamed:];
-[LOTAnimationView setAnimationNamed:inBundle:];
-[LOTAnimationView setAnimationFromJSON:];
-[LOTAnimationView setAnimationFromJSON:inBundle:];
-[LOTAnimationView setAnimationWithFilePath:];
-[LOTAnimationView setAnimationWithFilePath:withTint:];
-[LOTAnimationView setSceneModel:];
-[LOTAnimationView play];
-[LOTAnimationView playWithCompletion:];
-[LOTAnimationView playToProgress:withCompletion:];
-[LOTAnimationView playFromProgress:toProgress:withCompletion:];
-[LOTAnimationView playToFrame:withCompletion:];
-[LOTAnimationView playFromFrame:toFrame:withCompletion:];
-[LOTAnimationView stop];
-[LOTAnimationView pause];
-[LOTAnimationView setAnimationProgress:];
-[LOTAnimationView setProgressWithFrame:];
-[LOTAnimationView setProgressWithFrame:callCompletionIfNecessary:];
-[LOTAnimationView setLoopAnimation:];
-[LOTAnimationView setAnimationSpeed:];
-[LOTAnimationView forceDrawingUpdate];
-[LOTAnimationView setShouldRasterizeWhenIdle:];
-[LOTAnimationView setCacheEnable:];
-[LOTAnimationView setValueDelegate:forKeypath:];
-[LOTAnimationView keysForKeyPath:];
-[LOTAnimationView convertPoint:toKeypathLayer:];
-[LOTAnimationView convertRect:toKeypathLayer:];
-[LOTAnimationView convertPoint:fromKeypathLayer:];
-[LOTAnimationView convertRect:fromKeypathLayer:];
-[LOTAnimationView addSubview:toKeypathLayer:];
-[LOTAnimationView maskSubview:toKeypathLayer:];
-[LOTAnimationView layerForKey:];
-[LOTAnimationView compositionLayers];
-[LOTAnimationView animationDuration];
-[LOTAnimationView animationProgress];
-[LOTAnimationView intrinsicContentSize];
-[LOTAnimationView didMoveToSuperview];
-[LOTAnimationView willMoveToWindow:];
-[LOTAnimationView didMoveToWindow];
-[LOTAnimationView setContentMode:];
-[LOTAnimationView layoutSubviews];
-[LOTAnimationView _layoutAndForceUpdate];
-[LOTAnimationView _layout];
-[LOTAnimationView animationDidStop:finished:];
-[LOTAnimationView addSubview:toLayerNamed:applyTransform:];
-[LOTAnimationView convertRect:toLayerNamed:];
-[LOTAnimationView setValue:forKeypath:atFrame:];
-[LOTAnimationView logHierarchyKeypaths];
-[LOTAnimationView animation];
-[LOTAnimationView isAnimationPlaying];
-[LOTAnimationView loopAnimation];
-[LOTAnimationView autoReverseAnimation];
-[LOTAnimationView setAutoReverseAnimation:];
-[LOTAnimationView animationSpeed];
-[LOTAnimationView cacheEnable];
-[LOTAnimationView completionBlock];
-[LOTAnimationView setCompletionBlock:];
-[LOTAnimationView sceneModel];
-[LOTAnimationView shouldRasterizeWhenIdle];
@end

@interface LOTAnimatorNode :  {
  /* instance variables */
  B _pathShouldCacheLengths;
  @"NSDictionary" _valueInterpolators;
  @"NSString" _keyname;
  @"NSNumber" _currentFrame;
  @"LOTAnimatorNode" _inputNode;
  @"LOTBezierPath" _localPath;
  @"LOTBezierPath" _outputPath;
}

@property (T@"NSDictionary",R,N,V_valueInterpolators) valueInterpolators;
@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"NSNumber",R,N,V_currentFrame) currentFrame;
@property (T@"LOTAnimatorNode",R,N,V_inputNode) inputNode;
@property (T@"LOTBezierPath",&,N,V_localPath) localPath;
@property (T@"LOTBezierPath",&,N,V_outputPath) outputPath;
@property (TB,N,V_pathShouldCacheLengths) pathShouldCacheLengths;

/* instance methods */
-[LOTAnimatorNode initWithInputNode:keyName:];
-[LOTAnimatorNode needsUpdateForFrame:];
-[LOTAnimatorNode updateWithFrame:];
-[LOTAnimatorNode updateWithFrame:withModifierBlock:forceLocalUpdate:];
-[LOTAnimatorNode forceSetCurrentFrame:];
-[LOTAnimatorNode logString:];
-[LOTAnimatorNode performLocalUpdate];
-[LOTAnimatorNode rebuildOutputs];
-[LOTAnimatorNode setPathShouldCacheLengths:];
-[LOTAnimatorNode searchNodesForKeypath:];
-[LOTAnimatorNode setValueDelegate:forKeypath:];
-[LOTAnimatorNode valueInterpolators];
-[LOTAnimatorNode keyname];
-[LOTAnimatorNode currentFrame];
-[LOTAnimatorNode inputNode];
-[LOTAnimatorNode localPath];
-[LOTAnimatorNode setLocalPath:];
-[LOTAnimatorNode outputPath];
-[LOTAnimatorNode setOutputPath:];
-[LOTAnimatorNode pathShouldCacheLengths];
@end

@interface LOTArrayInterpolator : LOTValueInterpolator
/* instance methods */
-[LOTArrayInterpolator numberArrayForFrame:];
@end

@interface LOTAsset :  {
  /* instance variables */
  @"NSString" _referenceID;
  @"NSNumber" _assetWidth;
  @"NSNumber" _assetHeight;
  @"NSString" _imageName;
  @"NSString" _imageDirectory;
  @"LOTLayerGroup" _layerGroup;
  @"NSString" _rootDirectory;
  @"NSBundle" _assetBundle;
}

@property (T@"NSString",R,N,V_referenceID) referenceID;
@property (T@"NSNumber",R,N,V_assetWidth) assetWidth;
@property (T@"NSNumber",R,N,V_assetHeight) assetHeight;
@property (T@"NSString",R,N,V_imageName) imageName;
@property (T@"NSString",R,N,V_imageDirectory) imageDirectory;
@property (T@"LOTLayerGroup",R,N,V_layerGroup) layerGroup;
@property (T@"NSString",&,N,V_rootDirectory) rootDirectory;
@property (T@"NSBundle",R,N,V_assetBundle) assetBundle;

/* instance methods */
-[LOTAsset initWithJSON:withAssetGroup:withAssetBundle:withFramerate:];
-[LOTAsset _mapFromJSON:withAssetGroup:withFramerate:];
-[LOTAsset referenceID];
-[LOTAsset assetWidth];
-[LOTAsset assetHeight];
-[LOTAsset imageName];
-[LOTAsset imageDirectory];
-[LOTAsset layerGroup];
-[LOTAsset rootDirectory];
-[LOTAsset setRootDirectory:];
-[LOTAsset assetBundle];
@end

@interface LOTAssetGroup :  {
  /* instance variables */
  @"NSMutableDictionary" _assetMap;
  @"NSDictionary" _assetJSONMap;
  @"NSString" _rootDirectory;
  @"NSBundle" _assetBundle;
}

@property (T@"NSString",&,N,V_rootDirectory) rootDirectory;
@property (T@"NSBundle",R,N,V_assetBundle) assetBundle;

/* instance methods */
-[LOTAssetGroup initWithJSON:withAssetBundle:withFramerate:];
-[LOTAssetGroup buildAssetNamed:withFramerate:];
-[LOTAssetGroup finalizeInitializationWithFramerate:];
-[LOTAssetGroup assetModelForID:];
-[LOTAssetGroup setRootDirectory:];
-[LOTAssetGroup rootDirectory];
-[LOTAssetGroup assetBundle];
@end

@interface LOTBezierData :  {
  /* instance variables */
  ^{CGPoint=dd} _vertices;
  ^{CGPoint=dd} _inTangents;
  ^{CGPoint=dd} _outTangents;
  B _closed;
  q _count;
}

@property (Tq,R,N,V_count) count;
@property (TB,R,N,V_closed) closed;

/* instance methods */
-[LOTBezierData initWithData:];
-[LOTBezierData dealloc];
-[LOTBezierData vertexAtIndex:];
-[LOTBezierData inTangentAtIndex:];
-[LOTBezierData outTangentAtIndex:];
-[LOTBezierData initializeData:];
-[LOTBezierData _vertexAtIndex:inArray:];
-[LOTBezierData count];
-[LOTBezierData closed];
@end

@interface LOTBezierPath :  {
  /* instance variables */
  ^{LOT_Subpath=id{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}^{LOT_Subpath}} headSubpath_;
  ^{LOT_Subpath=id{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}^{LOT_Subpath}} tailSubpath_;
  {CGPoint="x"d"y"d} subpathStartPoint_;
  ^d _lineDashPattern;
  q _lineDashCount;
  d _lineDashPhase;
  ^{CGPath=} _path;
  B _cacheLengths;
  B _usesEvenOddFillRule;
  i _lineCapStyle;
  i _lineJoinStyle;
  d _length;
  d _lineWidth;
  d _miterLimit;
  d _flatness;
}

@property (T^{LOT_Subpath=id{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}^{LOT_Subpath}},R,N) headSubpath;
@property (TB,N,V_cacheLengths) cacheLengths;
@property (Td,R,N,V_length) length;
@property (Tr^{CGPath=},R,N) CGPath;
@property (T{CGPoint=dd},R,N) currentPoint;
@property (Td,N,V_lineWidth) lineWidth;
@property (Ti,N,V_lineCapStyle) lineCapStyle;
@property (Ti,N,V_lineJoinStyle) lineJoinStyle;
@property (Td,N,V_miterLimit) miterLimit;
@property (Td,N,V_flatness) flatness;
@property (TB,N,V_usesEvenOddFillRule) usesEvenOddFillRule;
@property (TB,R,GisEmpty) empty;
@property (T{CGRect={CGPoint=dd}{CGSize=dd}},R,N) bounds;

/* class methods */
-[LOTBezierPath pathWithCGPath:];
-[LOTBezierPath newPath];

/* instance methods */
-[LOTBezierPath init];
-[LOTBezierPath dealloc];
-[LOTBezierPath copyWithZone:];
-[LOTBezierPath removeAllSubpaths];
-[LOTBezierPath addSubpathWithType:length:endPoint:controlPoint1:controlPoint1:];
-[LOTBezierPath currentPoint];
-[LOTBezierPath CGPath];
-[LOTBezierPath headSubpath];
-[LOTBezierPath LOT_moveToPoint:];
-[LOTBezierPath LOT_addLineToPoint:];
-[LOTBezierPath LOT_addCurveToPoint:controlPoint1:controlPoint2:];
-[LOTBezierPath LOT_closePath];
-[LOTBezierPath _clearPathData];
-[LOTBezierPath LOT_removeAllPoints];
-[LOTBezierPath containsPoint:];
-[LOTBezierPath isEmpty];
-[LOTBezierPath bounds];
-[LOTBezierPath LOT_applyTransform:];
-[LOTBezierPath LOT_appendPath:];
-[LOTBezierPath trimPathFromT:toT:offset:];
-[LOTBezierPath setWithCGPath:];
-[LOTBezierPath lot_enumeratePath:elementsUsingBlock:];
-[LOTBezierPath cacheLengths];
-[LOTBezierPath setCacheLengths:];
-[LOTBezierPath length];
-[LOTBezierPath lineWidth];
-[LOTBezierPath setLineWidth:];
-[LOTBezierPath lineCapStyle];
-[LOTBezierPath setLineCapStyle:];
-[LOTBezierPath lineJoinStyle];
-[LOTBezierPath setLineJoinStyle:];
-[LOTBezierPath miterLimit];
-[LOTBezierPath setMiterLimit:];
-[LOTBezierPath flatness];
-[LOTBezierPath setFlatness:];
-[LOTBezierPath usesEvenOddFillRule];
-[LOTBezierPath setUsesEvenOddFillRule:];
@end

@interface LOTCacheProvider : 
/* class methods */
-[LOTCacheProvider imageCache];
-[LOTCacheProvider setImageCache:];
@end

@interface LOTCircleAnimator : LOTAnimatorNode {
  /* instance variables */
  @"LOTPointInterpolator" _centerInterpolator;
  @"LOTPointInterpolator" _sizeInterpolator;
  B _reversed;
}

/* instance methods */
-[LOTCircleAnimator initWithInputNode:shapeCircle:];
-[LOTCircleAnimator valueInterpolators];
-[LOTCircleAnimator needsUpdateForFrame:];
-[LOTCircleAnimator performLocalUpdate];
@end

@interface LOTColorBlockCallback : <LOTColorValueDelegate> {
  /* instance variables */
  @? _callback;
}

@property (T@?,C,N,V_callback) callback;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTColorBlockCallback withBlock:];

/* instance methods */
-[LOTColorBlockCallback colorForFrame:startKeyframe:endKeyframe:interpolatedProgress:startColor:endColor:currentColor:];
-[LOTColorBlockCallback callback];
-[LOTColorBlockCallback setCallback:];
@end

@interface LOTColorInterpolator : LOTValueInterpolator {
  /* instance variables */
  @"<LOTColorValueDelegate>" _delegate;
}

@property (T@"<LOTColorValueDelegate>",W,N,V_delegate) delegate;

/* instance methods */
-[LOTColorInterpolator colorForFrame:];
-[LOTColorInterpolator setValueDelegate:];
-[LOTColorInterpolator hasDelegateOverride];
-[LOTColorInterpolator delegate];
-[LOTColorInterpolator setDelegate:];
@end

@interface LOTColorValueCallback : <LOTColorValueDelegate> {
  /* instance variables */
  ^{CGColor=} _colorValue;
}

@property (T^{CGColor=},N,V_colorValue) colorValue;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTColorValueCallback withCGColor:];

/* instance methods */
-[LOTColorValueCallback colorForFrame:startKeyframe:endKeyframe:interpolatedProgress:startColor:endColor:currentColor:];
-[LOTColorValueCallback colorValue];
-[LOTColorValueCallback setColorValue:];
@end

@interface LOTComposition :  {
  /* instance variables */
  @"NSNumber" _startFrame;
  @"NSNumber" _endFrame;
  @"NSNumber" _framerate;
  d _timeDuration;
  @"LOTLayerGroup" _layerGroup;
  @"LOTAssetGroup" _assetGroup;
  @"NSString" _rootDirectory;
  @"NSBundle" _assetBundle;
  @"NSString" _cacheKey;
  {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _compBounds;
}

@property (T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_compBounds) compBounds;
@property (T@"NSNumber",R,N,V_startFrame) startFrame;
@property (T@"NSNumber",R,N,V_endFrame) endFrame;
@property (T@"NSNumber",R,N,V_framerate) framerate;
@property (Td,R,N,V_timeDuration) timeDuration;
@property (T@"LOTLayerGroup",R,N,V_layerGroup) layerGroup;
@property (T@"LOTAssetGroup",R,N,V_assetGroup) assetGroup;
@property (T@"NSString",&,N,V_rootDirectory) rootDirectory;
@property (T@"NSBundle",R,N,V_assetBundle) assetBundle;
@property (T@"NSString",C,N,V_cacheKey) cacheKey;

/* class methods */
-[LOTComposition animationNamed:];
-[LOTComposition animationNamed:inBundle:];
-[LOTComposition animationWithFilePath:];
-[LOTComposition animationFromJSON:];
-[LOTComposition animationFromJSON:inBundle:];

/* instance methods */
-[LOTComposition initWithJSON:withAssetBundle:];
-[LOTComposition _mapFromJSON:withAssetBundle:];
-[LOTComposition setRootDirectory:];
-[LOTComposition compBounds];
-[LOTComposition startFrame];
-[LOTComposition endFrame];
-[LOTComposition framerate];
-[LOTComposition timeDuration];
-[LOTComposition layerGroup];
-[LOTComposition assetGroup];
-[LOTComposition rootDirectory];
-[LOTComposition assetBundle];
-[LOTComposition cacheKey];
-[LOTComposition setCacheKey:];
@end

@interface LOTCompositionContainer : LOTLayerContainer {
  /* instance variables */
  @"NSNumber" _frameOffset;
  @"CALayer" DEBUG_Center;
  @"NSMutableDictionary" _keypathCache;
  @"LOTNumberInterpolator" _timeInterpolator;
  @"NSArray" _childLayers;
  @"NSDictionary" _childMap;
}

@property (T@"NSArray",R,N,V_childLayers) childLayers;
@property (T@"NSDictionary",R,N,V_childMap) childMap;

/* instance methods */
-[LOTCompositionContainer initWithModel:inLayerGroup:withLayerGroup:withAssestGroup:];
-[LOTCompositionContainer initializeWithChildGroup:withAssetGroup:];
-[LOTCompositionContainer displayWithFrame:forceUpdate:];
-[LOTCompositionContainer setViewportBounds:];
-[LOTCompositionContainer searchNodesForKeypath:];
-[LOTCompositionContainer setValueDelegate:forKeypath:];
-[LOTCompositionContainer keysForKeyPath:];
-[LOTCompositionContainer _layerForKeypath:];
-[LOTCompositionContainer convertPoint:toKeypathLayer:withParentLayer:];
-[LOTCompositionContainer convertRect:toKeypathLayer:withParentLayer:];
-[LOTCompositionContainer convertPoint:fromKeypathLayer:withParentLayer:];
-[LOTCompositionContainer convertRect:fromKeypathLayer:withParentLayer:];
-[LOTCompositionContainer addSublayer:toKeypathLayer:];
-[LOTCompositionContainer maskSublayer:toKeypathLayer:];
-[LOTCompositionContainer childLayers];
-[LOTCompositionContainer childMap];
@end

@interface LOTFillRenderer : LOTRenderNode {
  /* instance variables */
  @"LOTColorInterpolator" colorInterpolator_;
  @"LOTNumberInterpolator" opacityInterpolator_;
  B _evenOddFillRule;
  @"CALayer" centerPoint_DEBUG;
}

/* instance methods */
-[LOTFillRenderer initWithInputNode:shapeFill:];
-[LOTFillRenderer valueInterpolators];
-[LOTFillRenderer needsUpdateForFrame:];
-[LOTFillRenderer performLocalUpdate];
-[LOTFillRenderer rebuildOutputs];
-[LOTFillRenderer actionsForRenderLayer];
@end

@interface LOTFloatInterpolatorCallback : <LOTNumberValueDelegate> {
  /* instance variables */
  d _fromFloat;
  d _toFloat;
  d _currentProgress;
}

@property (Td,N,V_fromFloat) fromFloat;
@property (Td,N,V_toFloat) toFloat;
@property (Td,N,V_currentProgress) currentProgress;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTFloatInterpolatorCallback withFromFloat:toFloat:];

/* instance methods */
-[LOTFloatInterpolatorCallback floatValueForFrame:startKeyframe:endKeyframe:interpolatedProgress:startValue:endValue:currentValue:];
-[LOTFloatInterpolatorCallback fromFloat];
-[LOTFloatInterpolatorCallback setFromFloat:];
-[LOTFloatInterpolatorCallback toFloat];
-[LOTFloatInterpolatorCallback setToFloat:];
-[LOTFloatInterpolatorCallback currentProgress];
-[LOTFloatInterpolatorCallback setCurrentProgress:];
@end

@interface LOTGradientFillRender : LOTRenderNode {
  /* instance variables */
  B _evenOddFillRule;
  @"CALayer" centerPoint_DEBUG;
  @"CAShapeLayer" _maskShape;
  @"LOTRadialGradientLayer" _gradientOpacityLayer;
  @"LOTRadialGradientLayer" _gradientLayer;
  q _numberOfPositions;
  {CGPoint="x"d"y"d} _startPoint;
  {CGPoint="x"d"y"d} _endPoint;
  @"LOTArrayInterpolator" _gradientInterpolator;
  @"LOTPointInterpolator" _startPointInterpolator;
  @"LOTPointInterpolator" _endPointInterpolator;
  @"LOTNumberInterpolator" _opacityInterpolator;
}

/* instance methods */
-[LOTGradientFillRender initWithInputNode:shapeGradientFill:];
-[LOTGradientFillRender valueInterpolators];
-[LOTGradientFillRender needsUpdateForFrame:];
-[LOTGradientFillRender performLocalUpdate];
-[LOTGradientFillRender rebuildOutputs];
-[LOTGradientFillRender actionsForRenderLayer];
@end

@interface LOTKeyframe :  {
  /* instance variables */
  B _isHold;
  @"NSNumber" _keyframeTime;
  d _floatValue;
  @"UIColor" _colorValue;
  @"LOTBezierData" _pathData;
  @"NSArray" _arrayValue;
  {CGPoint="x"d"y"d} _inTangent;
  {CGPoint="x"d"y"d} _outTangent;
  {CGPoint="x"d"y"d} _spatialInTangent;
  {CGPoint="x"d"y"d} _spatialOutTangent;
  {CGPoint="x"d"y"d} _pointValue;
  {CGSize="width"d"height"d} _sizeValue;
}

@property (T@"NSNumber",R,N,V_keyframeTime) keyframeTime;
@property (TB,R,N,V_isHold) isHold;
@property (T{CGPoint=dd},R,N,V_inTangent) inTangent;
@property (T{CGPoint=dd},R,N,V_outTangent) outTangent;
@property (T{CGPoint=dd},R,N,V_spatialInTangent) spatialInTangent;
@property (T{CGPoint=dd},R,N,V_spatialOutTangent) spatialOutTangent;
@property (Td,R,N,V_floatValue) floatValue;
@property (T{CGPoint=dd},R,N,V_pointValue) pointValue;
@property (T{CGSize=dd},R,N,V_sizeValue) sizeValue;
@property (T@"UIColor",R,N,V_colorValue) colorValue;
@property (T@"LOTBezierData",R,N,V_pathData) pathData;
@property (T@"NSArray",R,N,V_arrayValue) arrayValue;

/* instance methods */
-[LOTKeyframe initWithKeyframe:];
-[LOTKeyframe initWithValue:];
-[LOTKeyframe initWithLOTKeyframe:];
-[LOTKeyframe copyWithData:];
-[LOTKeyframe setData:];
-[LOTKeyframe remapValueWithBlock:];
-[LOTKeyframe setupOutputWithData:];
-[LOTKeyframe _pointFromValueArray:];
-[LOTKeyframe _pointFromValueDict:];
-[LOTKeyframe _colorValueFromArray:];
-[LOTKeyframe keyframeTime];
-[LOTKeyframe isHold];
-[LOTKeyframe inTangent];
-[LOTKeyframe outTangent];
-[LOTKeyframe spatialInTangent];
-[LOTKeyframe spatialOutTangent];
-[LOTKeyframe floatValue];
-[LOTKeyframe pointValue];
-[LOTKeyframe sizeValue];
-[LOTKeyframe colorValue];
-[LOTKeyframe pathData];
-[LOTKeyframe arrayValue];
@end

@interface LOTKeyframeGroup :  {
  /* instance variables */
  @"NSArray" _keyframes;
}

@property (T@"NSArray",R,N,V_keyframes) keyframes;

/* instance methods */
-[LOTKeyframeGroup initWithData:];
-[LOTKeyframeGroup buildKeyframesFromData:];
-[LOTKeyframeGroup remapKeyframesWithBlock:];
-[LOTKeyframeGroup keyframes];
@end

@interface LOTKeypath :  {
  /* instance variables */
  q _currentDepth;
  @"NSMutableArray" _fuzzyDepthStack;
  @"NSMutableArray" _currentStack;
  @"NSArray" _keys;
  @"NSMutableDictionary" _searchResults;
  @"NSString" _absoluteKeypath;
}

@property (T@"NSString",R,N,V_absoluteKeypath) absoluteKeypath;
@property (T@"NSString",R,N) currentKey;
@property (T@"NSString",R,N) currentKeyPath;
@property (T@"NSDictionary",R,N) searchResults;
@property (TB,R,N) hasFuzzyWildcard;
@property (TB,R,N) hasWildcard;
@property (TB,R,N) endOfKeypath;

/* class methods */
-[LOTKeypath keypathWithString:];
-[LOTKeypath keypathWithKeys:];

/* instance methods */
-[LOTKeypath initWithKeys:];
-[LOTKeypath pushKey:];
-[LOTKeypath popKey];
-[LOTKeypath popToRootKey];
-[LOTKeypath currentKey];
-[LOTKeypath currentKeyPath];
-[LOTKeypath hasWildcard];
-[LOTKeypath hasFuzzyWildcard];
-[LOTKeypath endOfKeypath];
-[LOTKeypath addSearchResultForCurrentPath:];
-[LOTKeypath searchResults];
-[LOTKeypath absoluteKeypath];
@end

@interface LOTLayer :  {
  /* instance variables */
  @"NSString" _layerName;
  @"NSString" _referenceID;
  @"NSNumber" _layerID;
  q _layerType;
  @"NSNumber" _parentID;
  @"NSNumber" _startFrame;
  @"NSNumber" _inFrame;
  @"NSNumber" _outFrame;
  @"NSNumber" _timeStretch;
  @"NSArray" _shapes;
  @"NSArray" _masks;
  @"NSNumber" _layerWidth;
  @"NSNumber" _layerHeight;
  @"UIColor" _solidColor;
  @"LOTAsset" _imageAsset;
  @"LOTKeyframeGroup" _opacity;
  @"LOTKeyframeGroup" _timeRemapping;
  @"LOTKeyframeGroup" _rotation;
  @"LOTKeyframeGroup" _position;
  @"LOTKeyframeGroup" _positionX;
  @"LOTKeyframeGroup" _positionY;
  @"LOTKeyframeGroup" _anchor;
  @"LOTKeyframeGroup" _scale;
  q _matteType;
  {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _layerBounds;
}

@property (T@"NSString",R,N,V_layerName) layerName;
@property (T@"NSString",R,N,V_referenceID) referenceID;
@property (T@"NSNumber",R,N,V_layerID) layerID;
@property (Tq,R,N,V_layerType) layerType;
@property (T@"NSNumber",R,N,V_parentID) parentID;
@property (T@"NSNumber",R,N,V_startFrame) startFrame;
@property (T@"NSNumber",R,N,V_inFrame) inFrame;
@property (T@"NSNumber",R,N,V_outFrame) outFrame;
@property (T@"NSNumber",R,N,V_timeStretch) timeStretch;
@property (T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_layerBounds) layerBounds;
@property (T@"NSArray",R,N,V_shapes) shapes;
@property (T@"NSArray",R,N,V_masks) masks;
@property (T@"NSNumber",R,N,V_layerWidth) layerWidth;
@property (T@"NSNumber",R,N,V_layerHeight) layerHeight;
@property (T@"UIColor",R,N,V_solidColor) solidColor;
@property (T@"LOTAsset",R,N,V_imageAsset) imageAsset;
@property (T@"LOTKeyframeGroup",R,N,V_opacity) opacity;
@property (T@"LOTKeyframeGroup",R,N,V_timeRemapping) timeRemapping;
@property (T@"LOTKeyframeGroup",R,N,V_rotation) rotation;
@property (T@"LOTKeyframeGroup",R,N,V_position) position;
@property (T@"LOTKeyframeGroup",R,N,V_positionX) positionX;
@property (T@"LOTKeyframeGroup",R,N,V_positionY) positionY;
@property (T@"LOTKeyframeGroup",R,N,V_anchor) anchor;
@property (T@"LOTKeyframeGroup",R,N,V_scale) scale;
@property (Tq,R,N,V_matteType) matteType;

/* instance methods */
-[LOTLayer initWithJSON:withAssetGroup:withFramerate:];
-[LOTLayer _mapFromJSON:withAssetGroup:withFramerate:];
-[LOTLayer description];
-[LOTLayer layerName];
-[LOTLayer referenceID];
-[LOTLayer layerID];
-[LOTLayer layerType];
-[LOTLayer parentID];
-[LOTLayer startFrame];
-[LOTLayer inFrame];
-[LOTLayer outFrame];
-[LOTLayer timeStretch];
-[LOTLayer layerBounds];
-[LOTLayer shapes];
-[LOTLayer masks];
-[LOTLayer layerWidth];
-[LOTLayer layerHeight];
-[LOTLayer solidColor];
-[LOTLayer imageAsset];
-[LOTLayer opacity];
-[LOTLayer timeRemapping];
-[LOTLayer rotation];
-[LOTLayer position];
-[LOTLayer positionX];
-[LOTLayer positionY];
-[LOTLayer anchor];
-[LOTLayer scale];
-[LOTLayer matteType];
@end

@interface LOTLayerContainer :  {
  /* instance variables */
  @"LOTTransformInterpolator" _transformInterpolator;
  @"LOTNumberInterpolator" _opacityInterpolator;
  @"NSNumber" _inFrame;
  @"NSNumber" _outFrame;
  @"CALayer" DEBUG_Center;
  @"LOTRenderGroup" _contentsGroup;
  @"LOTMaskContainer" _maskLayer;
  @"NSString" _layerName;
  @"NSNumber" _timeStretchFactor;
  @"CALayer" _wrapperLayer;
  @"NSDictionary" _valueInterpolators;
  {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _viewportBounds;
}

@property (T@"NSString",R,N,V_layerName) layerName;
@property (T@"NSNumber",&,D,N) currentFrame;
@property (T@"NSNumber",R,N,V_timeStretchFactor) timeStretchFactor;
@property (T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_viewportBounds) viewportBounds;
@property (T@"CALayer",R,N,V_wrapperLayer) wrapperLayer;
@property (T@"NSDictionary",R,N,V_valueInterpolators) valueInterpolators;

/* class methods */
-[LOTLayerContainer needsDisplayForKey:];

/* instance methods */
-[LOTLayerContainer initWithModel:inLayerGroup:];
-[LOTLayerContainer commonInitializeWith:inLayerGroup:];
-[LOTLayerContainer buildContents:];
-[LOTLayerContainer _setImageForAsset:];
-[LOTLayerContainer actionForKey:];
-[LOTLayerContainer initWithLayer:];
-[LOTLayerContainer display];
-[LOTLayerContainer displayWithFrame:];
-[LOTLayerContainer displayWithFrame:forceUpdate:];
-[LOTLayerContainer setViewportBounds:];
-[LOTLayerContainer searchNodesForKeypath:];
-[LOTLayerContainer setValueDelegate:forKeypath:];
-[LOTLayerContainer layerName];
-[LOTLayerContainer timeStretchFactor];
-[LOTLayerContainer viewportBounds];
-[LOTLayerContainer wrapperLayer];
-[LOTLayerContainer valueInterpolators];
@end

@interface LOTLayerGroup :  {
  /* instance variables */
  @"NSDictionary" _modelMap;
  @"NSDictionary" _referenceIDMap;
  @"NSArray" _layers;
}

@property (T@"NSArray",R,N,V_layers) layers;

/* instance methods */
-[LOTLayerGroup initWithLayerJSON:withAssetGroup:withFramerate:];
-[LOTLayerGroup _mapFromJSON:withAssetGroup:withFramerate:];
-[LOTLayerGroup layerModelForID:];
-[LOTLayerGroup layerForReferenceID:];
-[LOTLayerGroup layers];
@end

@interface LOTMask :  {
  /* instance variables */
  B _closed;
  B _inverted;
  Q _maskMode;
  @"LOTKeyframeGroup" _maskPath;
  @"LOTKeyframeGroup" _opacity;
  @"LOTKeyframeGroup" _expansion;
}

@property (TB,R,N,V_closed) closed;
@property (TB,R,N,V_inverted) inverted;
@property (TQ,R,N,V_maskMode) maskMode;
@property (T@"LOTKeyframeGroup",R,N,V_maskPath) maskPath;
@property (T@"LOTKeyframeGroup",R,N,V_opacity) opacity;
@property (T@"LOTKeyframeGroup",R,N,V_expansion) expansion;

/* instance methods */
-[LOTMask initWithJSON:];
-[LOTMask _mapFromJSON:];
-[LOTMask closed];
-[LOTMask inverted];
-[LOTMask maskMode];
-[LOTMask maskPath];
-[LOTMask opacity];
-[LOTMask expansion];
@end

@interface LOTMaskContainer :  {
  /* instance variables */
  @"NSArray" _masks;
  @"NSNumber" _currentFrame;
}

@property (T@"NSNumber",&,N,V_currentFrame) currentFrame;

/* instance methods */
-[LOTMaskContainer initWithMasks:];
-[LOTMaskContainer setCurrentFrame:];
-[LOTMaskContainer currentFrame];
@end

@interface LOTMaskNodeLayer :  {
  /* instance variables */
  @"LOTPathInterpolator" _pathInterpolator;
  @"LOTNumberInterpolator" _opacityInterpolator;
  @"LOTNumberInterpolator" _expansionInterpolator;
  @"LOTMask" _maskNode;
}

@property (T@"LOTMask",R,N,V_maskNode) maskNode;

/* instance methods */
-[LOTMaskNodeLayer initWithMask:];
-[LOTMaskNodeLayer updateForFrame:withViewBounds:];
-[LOTMaskNodeLayer hasUpdateForFrame:];
-[LOTMaskNodeLayer maskNode];
@end

@interface LOTNumberBlockCallback : <LOTNumberValueDelegate> {
  /* instance variables */
  @? _callback;
}

@property (T@?,C,N,V_callback) callback;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTNumberBlockCallback withBlock:];

/* instance methods */
-[LOTNumberBlockCallback floatValueForFrame:startKeyframe:endKeyframe:interpolatedProgress:startValue:endValue:currentValue:];
-[LOTNumberBlockCallback callback];
-[LOTNumberBlockCallback setCallback:];
@end

@interface LOTNumberInterpolator : LOTValueInterpolator {
  /* instance variables */
  @"<LOTNumberValueDelegate>" _delegate;
}

@property (T@"<LOTNumberValueDelegate>",W,N,V_delegate) delegate;

/* instance methods */
-[LOTNumberInterpolator floatValueForFrame:];
-[LOTNumberInterpolator hasDelegateOverride];
-[LOTNumberInterpolator setValueDelegate:];
-[LOTNumberInterpolator delegate];
-[LOTNumberInterpolator setDelegate:];
@end

@interface LOTNumberValueCallback : <LOTNumberValueDelegate> {
  /* instance variables */
  d _numberValue;
}

@property (Td,N,V_numberValue) numberValue;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTNumberValueCallback withFloatValue:];

/* instance methods */
-[LOTNumberValueCallback floatValueForFrame:startKeyframe:endKeyframe:interpolatedProgress:startValue:endValue:currentValue:];
-[LOTNumberValueCallback numberValue];
-[LOTNumberValueCallback setNumberValue:];
@end

@interface LOTPathAnimator : LOTAnimatorNode {
  /* instance variables */
  @"LOTShapePath" _pathConent;
  @"LOTPathInterpolator" _interpolator;
}

/* instance methods */
-[LOTPathAnimator initWithInputNode:shapePath:];
-[LOTPathAnimator valueInterpolators];
-[LOTPathAnimator needsUpdateForFrame:];
-[LOTPathAnimator performLocalUpdate];
@end

@interface LOTPathBlockCallback : <LOTPathValueDelegate> {
  /* instance variables */
  @? _callback;
}

@property (T@?,C,N,V_callback) callback;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTPathBlockCallback withBlock:];

/* instance methods */
-[LOTPathBlockCallback pathForFrame:startKeyframe:endKeyframe:interpolatedProgress:];
-[LOTPathBlockCallback callback];
-[LOTPathBlockCallback setCallback:];
@end

@interface LOTPathInterpolator : LOTValueInterpolator {
  /* instance variables */
  @"<LOTPathValueDelegate>" _delegate;
}

@property (T@"<LOTPathValueDelegate>",W,N,V_delegate) delegate;

/* instance methods */
-[LOTPathInterpolator pathForFrame:cacheLengths:];
-[LOTPathInterpolator setValueDelegate:];
-[LOTPathInterpolator hasDelegateOverride];
-[LOTPathInterpolator delegate];
-[LOTPathInterpolator setDelegate:];
@end

@interface LOTPathValueCallback : <LOTPathValueDelegate> {
  /* instance variables */
  r^{CGPath=} _pathValue;
}

@property (Tr^{CGPath=},N,V_pathValue) pathValue;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTPathValueCallback withCGPath:];

/* instance methods */
-[LOTPathValueCallback pathForFrame:startKeyframe:endKeyframe:interpolatedProgress:];
-[LOTPathValueCallback pathValue];
-[LOTPathValueCallback setPathValue:];
@end

@interface LOTPointBlockCallback : <LOTPointValueDelegate> {
  /* instance variables */
  @? _callback;
}

@property (T@?,C,N,V_callback) callback;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTPointBlockCallback withBlock:];

/* instance methods */
-[LOTPointBlockCallback pointForFrame:startKeyframe:endKeyframe:interpolatedProgress:startPoint:endPoint:currentPoint:];
-[LOTPointBlockCallback callback];
-[LOTPointBlockCallback setCallback:];
@end

@interface LOTPointInterpolator : LOTValueInterpolator {
  /* instance variables */
  @"<LOTPointValueDelegate>" _delegate;
}

@property (T@"<LOTPointValueDelegate>",W,N,V_delegate) delegate;

/* instance methods */
-[LOTPointInterpolator pointValueForFrame:];
-[LOTPointInterpolator hasDelegateOverride];
-[LOTPointInterpolator setValueDelegate:];
-[LOTPointInterpolator delegate];
-[LOTPointInterpolator setDelegate:];
@end

@interface LOTPointInterpolatorCallback : <LOTPointValueDelegate> {
  /* instance variables */
  d _currentProgress;
  {CGPoint="x"d"y"d} _fromPoint;
  {CGPoint="x"d"y"d} _toPoint;
}

@property (T{CGPoint=dd},N,V_fromPoint) fromPoint;
@property (T{CGPoint=dd},N,V_toPoint) toPoint;
@property (Td,N,V_currentProgress) currentProgress;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTPointInterpolatorCallback withFromPoint:toPoint:];

/* instance methods */
-[LOTPointInterpolatorCallback pointForFrame:startKeyframe:endKeyframe:interpolatedProgress:startPoint:endPoint:currentPoint:];
-[LOTPointInterpolatorCallback fromPoint];
-[LOTPointInterpolatorCallback setFromPoint:];
-[LOTPointInterpolatorCallback toPoint];
-[LOTPointInterpolatorCallback setToPoint:];
-[LOTPointInterpolatorCallback currentProgress];
-[LOTPointInterpolatorCallback setCurrentProgress:];
@end

@interface LOTPointValueCallback : <LOTPointValueDelegate> {
  /* instance variables */
  {CGPoint="x"d"y"d} _pointValue;
}

@property (T{CGPoint=dd},N,V_pointValue) pointValue;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTPointValueCallback withPointValue:];

/* instance methods */
-[LOTPointValueCallback pointForFrame:startKeyframe:endKeyframe:interpolatedProgress:startPoint:endPoint:currentPoint:];
-[LOTPointValueCallback pointValue];
-[LOTPointValueCallback setPointValue:];
@end

@interface LOTPolygonAnimator : LOTAnimatorNode {
  /* instance variables */
  @"LOTNumberInterpolator" _outerRadiusInterpolator;
  @"LOTNumberInterpolator" _outerRoundnessInterpolator;
  @"LOTPointInterpolator" _positionInterpolator;
  @"LOTNumberInterpolator" _pointsInterpolator;
  @"LOTNumberInterpolator" _rotationInterpolator;
}

/* instance methods */
-[LOTPolygonAnimator initWithInputNode:shapePolygon:];
-[LOTPolygonAnimator valueInterpolators];
-[LOTPolygonAnimator needsUpdateForFrame:];
-[LOTPolygonAnimator performLocalUpdate];
@end

@interface LOTPolystarAnimator : LOTAnimatorNode {
  /* instance variables */
  @"LOTNumberInterpolator" _outerRadiusInterpolator;
  @"LOTNumberInterpolator" _innerRadiusInterpolator;
  @"LOTNumberInterpolator" _outerRoundnessInterpolator;
  @"LOTNumberInterpolator" _innerRoundnessInterpolator;
  @"LOTPointInterpolator" _positionInterpolator;
  @"LOTNumberInterpolator" _pointsInterpolator;
  @"LOTNumberInterpolator" _rotationInterpolator;
}

/* instance methods */
-[LOTPolystarAnimator initWithInputNode:shapeStar:];
-[LOTPolystarAnimator valueInterpolators];
-[LOTPolystarAnimator needsUpdateForFrame:];
-[LOTPolystarAnimator performLocalUpdate];
@end

@interface LOTRadialGradientLayer : 

@property (T{CGPoint=dd},D) startPoint;
@property (T{CGPoint=dd},D) endPoint;
@property (T@"NSArray",C,D,N) colors;
@property (T@"NSArray",C,D,N) locations;
@property (TB,D,N) isRadial;

/* class methods */
-[LOTRadialGradientLayer needsDisplayForKey:];

/* instance methods */
-[LOTRadialGradientLayer actionForKey:];
-[LOTRadialGradientLayer drawInContext:];
@end

@interface LOTRenderGroup : LOTRenderNode {
  /* instance variables */
  @"LOTAnimatorNode" _rootNode;
  @"LOTBezierPath" _outputPath;
  @"LOTBezierPath" _localPath;
  B _rootNodeHasUpdate;
  @"LOTNumberInterpolator" _opacityInterpolator;
  @"LOTTransformInterpolator" _transformInterpolator;
  @"CALayer" _containerLayer;
}

@property (T@"CALayer",R,N,V_containerLayer) containerLayer;

/* instance methods */
-[LOTRenderGroup initWithInputNode:contents:keyname:];
-[LOTRenderGroup valueInterpolators];
-[LOTRenderGroup buildContents:];
-[LOTRenderGroup needsUpdateForFrame:];
-[LOTRenderGroup updateWithFrame:withModifierBlock:forceLocalUpdate:];
-[LOTRenderGroup performLocalUpdate];
-[LOTRenderGroup rebuildOutputs];
-[LOTRenderGroup setPathShouldCacheLengths:];
-[LOTRenderGroup localPath];
-[LOTRenderGroup outputPath];
-[LOTRenderGroup searchNodesForKeypath:];
-[LOTRenderGroup setValueDelegate:forKeypath:];
-[LOTRenderGroup containerLayer];
@end

@interface LOTRenderNode : LOTAnimatorNode {
  /* instance variables */
  @"CAShapeLayer" _outputLayer;
}

@property (T@"CAShapeLayer",R,N,V_outputLayer) outputLayer;

/* instance methods */
-[LOTRenderNode initWithInputNode:keyName:];
-[LOTRenderNode actionsForRenderLayer];
-[LOTRenderNode performLocalUpdate];
-[LOTRenderNode rebuildOutputs];
-[LOTRenderNode localPath];
-[LOTRenderNode outputPath];
-[LOTRenderNode outputLayer];
@end

@interface LOTRepeaterRenderer : LOTRenderNode {
  /* instance variables */
  @"LOTTransformInterpolator" _transformInterpolator;
  @"LOTNumberInterpolator" _copiesInterpolator;
  @"LOTNumberInterpolator" _offsetInterpolator;
  @"LOTNumberInterpolator" _startOpacityInterpolator;
  @"LOTNumberInterpolator" _endOpacityInterpolator;
  @"CALayer" _instanceLayer;
  @"CAReplicatorLayer" _replicatorLayer;
  @"CALayer" centerPoint_DEBUG;
}

/* instance methods */
-[LOTRepeaterRenderer initWithInputNode:shapeRepeater:];
-[LOTRepeaterRenderer valueInterpolators];
-[LOTRepeaterRenderer recursivelyAddChildLayers:];
-[LOTRepeaterRenderer needsUpdateForFrame:];
-[LOTRepeaterRenderer performLocalUpdate];
@end

@interface LOTRoundedRectAnimator : LOTAnimatorNode {
  /* instance variables */
  @"LOTPointInterpolator" _centerInterpolator;
  @"LOTPointInterpolator" _sizeInterpolator;
  @"LOTNumberInterpolator" _cornerRadiusInterpolator;
  B _reversed;
}

/* instance methods */
-[LOTRoundedRectAnimator initWithInputNode:shapeRectangle:];
-[LOTRoundedRectAnimator valueInterpolators];
-[LOTRoundedRectAnimator needsUpdateForFrame:];
-[LOTRoundedRectAnimator addCorner:withRadius:toPath:clockwise:];
-[LOTRoundedRectAnimator performLocalUpdate];
@end

@interface LOTShapeCircle :  {
  /* instance variables */
  B _reversed;
  @"NSString" _keyname;
  @"LOTKeyframeGroup" _position;
  @"LOTKeyframeGroup" _size;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"LOTKeyframeGroup",R,N,V_position) position;
@property (T@"LOTKeyframeGroup",R,N,V_size) size;
@property (TB,R,N,V_reversed) reversed;

/* instance methods */
-[LOTShapeCircle initWithJSON:];
-[LOTShapeCircle _mapFromJSON:];
-[LOTShapeCircle keyname];
-[LOTShapeCircle position];
-[LOTShapeCircle size];
-[LOTShapeCircle reversed];
@end

@interface LOTShapeFill :  {
  /* instance variables */
  B _fillEnabled;
  B _evenOddFillRule;
  @"NSString" _keyname;
  @"LOTKeyframeGroup" _color;
  @"LOTKeyframeGroup" _opacity;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (TB,R,N,V_fillEnabled) fillEnabled;
@property (T@"LOTKeyframeGroup",R,N,V_color) color;
@property (T@"LOTKeyframeGroup",R,N,V_opacity) opacity;
@property (TB,R,N,V_evenOddFillRule) evenOddFillRule;

/* instance methods */
-[LOTShapeFill initWithJSON:];
-[LOTShapeFill _mapFromJSON:];
-[LOTShapeFill keyname];
-[LOTShapeFill fillEnabled];
-[LOTShapeFill color];
-[LOTShapeFill opacity];
-[LOTShapeFill evenOddFillRule];
@end

@interface LOTShapeGradientFill :  {
  /* instance variables */
  B _evenOddFillRule;
  @"NSString" _keyname;
  @"NSNumber" _numberOfColors;
  @"LOTKeyframeGroup" _startPoint;
  @"LOTKeyframeGroup" _endPoint;
  @"LOTKeyframeGroup" _gradient;
  @"LOTKeyframeGroup" _opacity;
  Q _type;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"NSNumber",R,N,V_numberOfColors) numberOfColors;
@property (T@"LOTKeyframeGroup",R,N,V_startPoint) startPoint;
@property (T@"LOTKeyframeGroup",R,N,V_endPoint) endPoint;
@property (T@"LOTKeyframeGroup",R,N,V_gradient) gradient;
@property (T@"LOTKeyframeGroup",R,N,V_opacity) opacity;
@property (TB,R,N,V_evenOddFillRule) evenOddFillRule;
@property (TQ,R,N,V_type) type;

/* instance methods */
-[LOTShapeGradientFill initWithJSON:];
-[LOTShapeGradientFill _mapFromJSON:];
-[LOTShapeGradientFill keyname];
-[LOTShapeGradientFill numberOfColors];
-[LOTShapeGradientFill startPoint];
-[LOTShapeGradientFill endPoint];
-[LOTShapeGradientFill gradient];
-[LOTShapeGradientFill opacity];
-[LOTShapeGradientFill evenOddFillRule];
-[LOTShapeGradientFill type];
@end

@interface LOTShapeGroup :  {
  /* instance variables */
  @"NSString" _keyname;
  @"NSArray" _items;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"NSArray",R,N,V_items) items;

/* class methods */
-[LOTShapeGroup shapeItemWithJSON:];

/* instance methods */
-[LOTShapeGroup initWithJSON:];
-[LOTShapeGroup _mapFromJSON:];
-[LOTShapeGroup description];
-[LOTShapeGroup keyname];
-[LOTShapeGroup items];
@end

@interface LOTShapePath :  {
  /* instance variables */
  B _closed;
  @"NSString" _keyname;
  @"NSNumber" _index;
  @"LOTKeyframeGroup" _shapePath;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (TB,R,N,V_closed) closed;
@property (T@"NSNumber",R,N,V_index) index;
@property (T@"LOTKeyframeGroup",R,N,V_shapePath) shapePath;

/* instance methods */
-[LOTShapePath initWithJSON:];
-[LOTShapePath _mapFromJSON:];
-[LOTShapePath keyname];
-[LOTShapePath closed];
-[LOTShapePath index];
-[LOTShapePath shapePath];
@end

@interface LOTShapeRectangle :  {
  /* instance variables */
  B _reversed;
  @"NSString" _keyname;
  @"LOTKeyframeGroup" _position;
  @"LOTKeyframeGroup" _size;
  @"LOTKeyframeGroup" _cornerRadius;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"LOTKeyframeGroup",R,N,V_position) position;
@property (T@"LOTKeyframeGroup",R,N,V_size) size;
@property (T@"LOTKeyframeGroup",R,N,V_cornerRadius) cornerRadius;
@property (TB,R,N,V_reversed) reversed;

/* instance methods */
-[LOTShapeRectangle initWithJSON:];
-[LOTShapeRectangle _mapFromJSON:];
-[LOTShapeRectangle keyname];
-[LOTShapeRectangle position];
-[LOTShapeRectangle size];
-[LOTShapeRectangle cornerRadius];
-[LOTShapeRectangle reversed];
@end

@interface LOTShapeRepeater :  {
  /* instance variables */
  @"NSString" _keyname;
  @"LOTKeyframeGroup" _copies;
  @"LOTKeyframeGroup" _offset;
  @"LOTKeyframeGroup" _anchorPoint;
  @"LOTKeyframeGroup" _scale;
  @"LOTKeyframeGroup" _position;
  @"LOTKeyframeGroup" _rotation;
  @"LOTKeyframeGroup" _startOpacity;
  @"LOTKeyframeGroup" _endOpacity;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"LOTKeyframeGroup",R,N,V_copies) copies;
@property (T@"LOTKeyframeGroup",R,N,V_offset) offset;
@property (T@"LOTKeyframeGroup",R,N,V_anchorPoint) anchorPoint;
@property (T@"LOTKeyframeGroup",R,N,V_scale) scale;
@property (T@"LOTKeyframeGroup",R,N,V_position) position;
@property (T@"LOTKeyframeGroup",R,N,V_rotation) rotation;
@property (T@"LOTKeyframeGroup",R,N,V_startOpacity) startOpacity;
@property (T@"LOTKeyframeGroup",R,N,V_endOpacity) endOpacity;

/* instance methods */
-[LOTShapeRepeater initWithJSON:];
-[LOTShapeRepeater _mapFromJSON:];
-[LOTShapeRepeater keyname];
-[LOTShapeRepeater copies];
-[LOTShapeRepeater offset];
-[LOTShapeRepeater anchorPoint];
-[LOTShapeRepeater scale];
-[LOTShapeRepeater position];
-[LOTShapeRepeater rotation];
-[LOTShapeRepeater startOpacity];
-[LOTShapeRepeater endOpacity];
@end

@interface LOTShapeStar :  {
  /* instance variables */
  @"NSString" _keyname;
  @"LOTKeyframeGroup" _outerRadius;
  @"LOTKeyframeGroup" _outerRoundness;
  @"LOTKeyframeGroup" _innerRadius;
  @"LOTKeyframeGroup" _innerRoundness;
  @"LOTKeyframeGroup" _position;
  @"LOTKeyframeGroup" _numberOfPoints;
  @"LOTKeyframeGroup" _rotation;
  Q _type;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"LOTKeyframeGroup",R,N,V_outerRadius) outerRadius;
@property (T@"LOTKeyframeGroup",R,N,V_outerRoundness) outerRoundness;
@property (T@"LOTKeyframeGroup",R,N,V_innerRadius) innerRadius;
@property (T@"LOTKeyframeGroup",R,N,V_innerRoundness) innerRoundness;
@property (T@"LOTKeyframeGroup",R,N,V_position) position;
@property (T@"LOTKeyframeGroup",R,N,V_numberOfPoints) numberOfPoints;
@property (T@"LOTKeyframeGroup",R,N,V_rotation) rotation;
@property (TQ,R,N,V_type) type;

/* instance methods */
-[LOTShapeStar initWithJSON:];
-[LOTShapeStar _mapFromJSON:];
-[LOTShapeStar keyname];
-[LOTShapeStar outerRadius];
-[LOTShapeStar outerRoundness];
-[LOTShapeStar innerRadius];
-[LOTShapeStar innerRoundness];
-[LOTShapeStar position];
-[LOTShapeStar numberOfPoints];
-[LOTShapeStar rotation];
-[LOTShapeStar type];
@end

@interface LOTShapeStroke :  {
  /* instance variables */
  B _fillEnabled;
  @"NSString" _keyname;
  @"LOTKeyframeGroup" _color;
  @"LOTKeyframeGroup" _opacity;
  @"LOTKeyframeGroup" _width;
  @"LOTKeyframeGroup" _dashOffset;
  Q _capType;
  Q _joinType;
  @"NSArray" _lineDashPattern;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (TB,R,N,V_fillEnabled) fillEnabled;
@property (T@"LOTKeyframeGroup",R,N,V_color) color;
@property (T@"LOTKeyframeGroup",R,N,V_opacity) opacity;
@property (T@"LOTKeyframeGroup",R,N,V_width) width;
@property (T@"LOTKeyframeGroup",R,N,V_dashOffset) dashOffset;
@property (TQ,R,N,V_capType) capType;
@property (TQ,R,N,V_joinType) joinType;
@property (T@"NSArray",R,N,V_lineDashPattern) lineDashPattern;

/* instance methods */
-[LOTShapeStroke initWithJSON:];
-[LOTShapeStroke _mapFromJSON:];
-[LOTShapeStroke keyname];
-[LOTShapeStroke fillEnabled];
-[LOTShapeStroke color];
-[LOTShapeStroke opacity];
-[LOTShapeStroke width];
-[LOTShapeStroke dashOffset];
-[LOTShapeStroke capType];
-[LOTShapeStroke joinType];
-[LOTShapeStroke lineDashPattern];
@end

@interface LOTShapeTransform :  {
  /* instance variables */
  @"NSString" _keyname;
  @"LOTKeyframeGroup" _position;
  @"LOTKeyframeGroup" _anchor;
  @"LOTKeyframeGroup" _scale;
  @"LOTKeyframeGroup" _rotation;
  @"LOTKeyframeGroup" _opacity;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"LOTKeyframeGroup",R,N,V_position) position;
@property (T@"LOTKeyframeGroup",R,N,V_anchor) anchor;
@property (T@"LOTKeyframeGroup",R,N,V_scale) scale;
@property (T@"LOTKeyframeGroup",R,N,V_rotation) rotation;
@property (T@"LOTKeyframeGroup",R,N,V_opacity) opacity;

/* instance methods */
-[LOTShapeTransform initWithJSON:];
-[LOTShapeTransform _mapFromJSON:];
-[LOTShapeTransform description];
-[LOTShapeTransform keyname];
-[LOTShapeTransform position];
-[LOTShapeTransform anchor];
-[LOTShapeTransform scale];
-[LOTShapeTransform rotation];
-[LOTShapeTransform opacity];
@end

@interface LOTShapeTrimPath :  {
  /* instance variables */
  @"NSString" _keyname;
  @"LOTKeyframeGroup" _start;
  @"LOTKeyframeGroup" _end;
  @"LOTKeyframeGroup" _offset;
}

@property (T@"NSString",R,N,V_keyname) keyname;
@property (T@"LOTKeyframeGroup",R,N,V_start) start;
@property (T@"LOTKeyframeGroup",R,N,V_end) end;
@property (T@"LOTKeyframeGroup",R,N,V_offset) offset;

/* instance methods */
-[LOTShapeTrimPath initWithJSON:];
-[LOTShapeTrimPath _mapFromJSON:];
-[LOTShapeTrimPath keyname];
-[LOTShapeTrimPath start];
-[LOTShapeTrimPath end];
-[LOTShapeTrimPath offset];
@end

@interface LOTSizeBlockCallback : <LOTSizeValueDelegate> {
  /* instance variables */
  @? _callback;
}

@property (T@?,C,N,V_callback) callback;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTSizeBlockCallback withBlock:];

/* instance methods */
-[LOTSizeBlockCallback sizeForFrame:startKeyframe:endKeyframe:interpolatedProgress:startSize:endSize:currentSize:];
-[LOTSizeBlockCallback callback];
-[LOTSizeBlockCallback setCallback:];
@end

@interface LOTSizeInterpolator : LOTValueInterpolator {
  /* instance variables */
  @"<LOTSizeValueDelegate>" _delegate;
}

@property (T@"<LOTSizeValueDelegate>",W,N,V_delegate) delegate;

/* instance methods */
-[LOTSizeInterpolator sizeValueForFrame:];
-[LOTSizeInterpolator hasDelegateOverride];
-[LOTSizeInterpolator setValueDelegate:];
-[LOTSizeInterpolator delegate];
-[LOTSizeInterpolator setDelegate:];
@end

@interface LOTSizeInterpolatorCallback : <LOTSizeValueDelegate> {
  /* instance variables */
  d _currentProgress;
  {CGSize="width"d"height"d} _fromSize;
  {CGSize="width"d"height"d} _toSize;
}

@property (T{CGSize=dd},N,V_fromSize) fromSize;
@property (T{CGSize=dd},N,V_toSize) toSize;
@property (Td,N,V_currentProgress) currentProgress;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTSizeInterpolatorCallback withFromSize:toSize:];

/* instance methods */
-[LOTSizeInterpolatorCallback sizeForFrame:startKeyframe:endKeyframe:interpolatedProgress:startSize:endSize:currentSize:];
-[LOTSizeInterpolatorCallback fromSize];
-[LOTSizeInterpolatorCallback setFromSize:];
-[LOTSizeInterpolatorCallback toSize];
-[LOTSizeInterpolatorCallback setToSize:];
-[LOTSizeInterpolatorCallback currentProgress];
-[LOTSizeInterpolatorCallback setCurrentProgress:];
@end

@interface LOTSizeValueCallback : <LOTSizeValueDelegate> {
  /* instance variables */
  {CGSize="width"d"height"d} _sizeValue;
}

@property (T{CGSize=dd},N,V_sizeValue) sizeValue;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[LOTSizeValueCallback withPointValue:];

/* instance methods */
-[LOTSizeValueCallback sizeForFrame:startKeyframe:endKeyframe:interpolatedProgress:startSize:endSize:currentSize:];
-[LOTSizeValueCallback sizeValue];
-[LOTSizeValueCallback setSizeValue:];
@end

@interface LOTStrokeRenderer : LOTRenderNode {
  /* instance variables */
  @"LOTColorInterpolator" _colorInterpolator;
  @"LOTNumberInterpolator" _opacityInterpolator;
  @"LOTNumberInterpolator" _widthInterpolator;
  @"LOTNumberInterpolator" _dashOffsetInterpolator;
  @"NSArray" _dashPatternInterpolators;
}

/* instance methods */
-[LOTStrokeRenderer initWithInputNode:shapeStroke:];
-[LOTStrokeRenderer valueInterpolators];
-[LOTStrokeRenderer _updateLineDashPatternsForFrame:];
-[LOTStrokeRenderer needsUpdateForFrame:];
-[LOTStrokeRenderer performLocalUpdate];
-[LOTStrokeRenderer rebuildOutputs];
-[LOTStrokeRenderer actionsForRenderLayer];
@end

@interface LOTTransformInterpolator :  {
  /* instance variables */
  @"LOTPointInterpolator" _positionInterpolator;
  @"LOTPointInterpolator" _anchorInterpolator;
  @"LOTSizeInterpolator" _scaleInterpolator;
  @"LOTNumberInterpolator" _rotationInterpolator;
  @"LOTNumberInterpolator" _positionXInterpolator;
  @"LOTNumberInterpolator" _positionYInterpolator;
  @"LOTTransformInterpolator" _inputNode;
  @"NSString" _parentKeyName;
}

@property (T@"LOTTransformInterpolator",&,N,V_inputNode) inputNode;
@property (T@"LOTPointInterpolator",R,N,V_positionInterpolator) positionInterpolator;
@property (T@"LOTPointInterpolator",R,N,V_anchorInterpolator) anchorInterpolator;
@property (T@"LOTSizeInterpolator",R,N,V_scaleInterpolator) scaleInterpolator;
@property (T@"LOTNumberInterpolator",R,N,V_rotationInterpolator) rotationInterpolator;
@property (T@"LOTNumberInterpolator",R,N,V_positionXInterpolator) positionXInterpolator;
@property (T@"LOTNumberInterpolator",R,N,V_positionYInterpolator) positionYInterpolator;
@property (T@"NSString",&,N,V_parentKeyName) parentKeyName;

/* class methods */
-[LOTTransformInterpolator transformForLayer:];

/* instance methods */
-[LOTTransformInterpolator initWithPosition:rotation:anchor:scale:];
-[LOTTransformInterpolator initWithPositionX:positionY:rotation:anchor:scale:];
-[LOTTransformInterpolator initializeWithPositionX:positionY:position:rotation:anchor:scale:];
-[LOTTransformInterpolator hasUpdateForFrame:];
-[LOTTransformInterpolator transformForFrame:];
-[LOTTransformInterpolator inputNode];
-[LOTTransformInterpolator setInputNode:];
-[LOTTransformInterpolator positionInterpolator];
-[LOTTransformInterpolator anchorInterpolator];
-[LOTTransformInterpolator scaleInterpolator];
-[LOTTransformInterpolator rotationInterpolator];
-[LOTTransformInterpolator positionXInterpolator];
-[LOTTransformInterpolator positionYInterpolator];
-[LOTTransformInterpolator parentKeyName];
-[LOTTransformInterpolator setParentKeyName:];
@end

@interface LOTTrimPathNode : LOTAnimatorNode {
  /* instance variables */
  @"LOTNumberInterpolator" _startInterpolator;
  @"LOTNumberInterpolator" _endInterpolator;
  @"LOTNumberInterpolator" _offsetInterpolator;
  d _startT;
  d _endT;
  d _offsetT;
}

/* instance methods */
-[LOTTrimPathNode initWithInputNode:trimPath:];
-[LOTTrimPathNode valueInterpolators];
-[LOTTrimPathNode needsUpdateForFrame:];
-[LOTTrimPathNode updateWithFrame:withModifierBlock:forceLocalUpdate:];
-[LOTTrimPathNode performLocalUpdate];
-[LOTTrimPathNode rebuildOutputs];
-[LOTTrimPathNode localPath];
-[LOTTrimPathNode outputPath];
@end

@interface LOTValueInterpolator :  {
  /* instance variables */
  B _hasDelegateOverride;
  @"LOTKeyframe" _leadingKeyframe;
  @"LOTKeyframe" _trailingKeyframe;
  @"NSArray" _keyframes;
}

@property (T@"NSArray",&,N,V_keyframes) keyframes;
@property (T@"LOTKeyframe",W,N,V_leadingKeyframe) leadingKeyframe;
@property (T@"LOTKeyframe",W,N,V_trailingKeyframe) trailingKeyframe;
@property (TB,R,N,V_hasDelegateOverride) hasDelegateOverride;

/* instance methods */
-[LOTValueInterpolator initWithKeyframes:];
-[LOTValueInterpolator hasUpdateForFrame:];
-[LOTValueInterpolator updateKeyframeSpanForFrame:];
-[LOTValueInterpolator progressForFrame:];
-[LOTValueInterpolator setValueDelegate:];
-[LOTValueInterpolator leadingKeyframe];
-[LOTValueInterpolator setLeadingKeyframe:];
-[LOTValueInterpolator trailingKeyframe];
-[LOTValueInterpolator setTrailingKeyframe:];
-[LOTValueInterpolator hasDelegateOverride];
-[LOTValueInterpolator keyframes];
-[LOTValueInterpolator setKeyframes:];
@end

@interface LottieHolder :  {
  /* instance variables */
  @"LOTAnimationView" _animation;
}

@property (T@"LOTAnimationView",&,N,V_animation) animation;

/* instance methods */
-[LottieHolder init];
-[LottieHolder layoutSubviews];
-[LottieHolder animation];
-[LottieHolder setAnimation:];
@end

@interface MediaInformation :  {
  /* instance variables */
  @"NSDictionary" dictionary;
  @"NSArray" streamArray;
}

/* instance methods */
-[MediaInformation init:withStreams:];
-[MediaInformation getFilename];
-[MediaInformation getFormat];
-[MediaInformation getLongFormat];
-[MediaInformation getStartTime];
-[MediaInformation getDuration];
-[MediaInformation getSize];
-[MediaInformation getBitrate];
-[MediaInformation getTags];
-[MediaInformation getStreams];
-[MediaInformation getStringProperty:];
-[MediaInformation getNumberProperty:];
-[MediaInformation getProperties:];
-[MediaInformation getMediaProperties];
-[MediaInformation getAllProperties];
@end

@interface MediaInformationParser : 
/* class methods */
-[MediaInformationParser from:];
-[MediaInformationParser from:with:];
@end

@interface MetadataItem : <NSCoding> {
  /* instance variables */
  B _isVideo;
  B _isShorts;
  @"NSString" _videoID;
  @"NSString" _title;
  @"NSString" _channel;
  @"NSString" _channelURL;
  @"NSString" _qualityLabel;
  @"NSString" _typeAndQuality;
  @"NSString" _audioFormat;
  @"NSString" _videoFormat;
  @"NSString" _lyrics;
  @"UIImage" _image;
}

@property (T@"NSString",&,N,V_videoID) videoID;
@property (T@"NSString",&,N,V_title) title;
@property (T@"NSString",&,N,V_channel) channel;
@property (T@"NSString",&,N,V_channelURL) channelURL;
@property (T@"NSString",&,N,V_qualityLabel) qualityLabel;
@property (T@"NSString",&,N,V_typeAndQuality) typeAndQuality;
@property (T@"NSString",&,N,V_audioFormat) audioFormat;
@property (T@"NSString",&,N,V_videoFormat) videoFormat;
@property (T@"NSString",&,N,V_lyrics) lyrics;
@property (T@"UIImage",&,N,V_image) image;
@property (TB,N,V_isVideo) isVideo;
@property (TB,N,V_isShorts) isShorts;

/* instance methods */
-[MetadataItem initWithXYouItem:];
-[MetadataItem initWithDictionary:];
-[MetadataItem allMetadata];
-[MetadataItem encodeWithCoder:];
-[MetadataItem initWithCoder:];
-[MetadataItem description];
-[MetadataItem videoID];
-[MetadataItem setVideoID:];
-[MetadataItem title];
-[MetadataItem setTitle:];
-[MetadataItem channel];
-[MetadataItem setChannel:];
-[MetadataItem channelURL];
-[MetadataItem setChannelURL:];
-[MetadataItem qualityLabel];
-[MetadataItem setQualityLabel:];
-[MetadataItem typeAndQuality];
-[MetadataItem setTypeAndQuality:];
-[MetadataItem audioFormat];
-[MetadataItem setAudioFormat:];
-[MetadataItem videoFormat];
-[MetadataItem setVideoFormat:];
-[MetadataItem lyrics];
-[MetadataItem setLyrics:];
-[MetadataItem image];
-[MetadataItem setImage:];
-[MetadataItem isVideo];
-[MetadataItem setIsVideo:];
-[MetadataItem isShorts];
-[MetadataItem setIsShorts:];
@end

@interface MobileFFmpeg : 
/* class methods */
-[MobileFFmpeg initialize];
-[MobileFFmpeg executeWithId:andArguments:];
-[MobileFFmpeg executeWithArguments:];
-[MobileFFmpeg executeWithArgumentsAsync:withCallback:];
-[MobileFFmpeg executeWithArgumentsAsync:withCallback:andDispatchQueue:];
-[MobileFFmpeg execute:];
-[MobileFFmpeg executeAsync:withCallback:];
-[MobileFFmpeg executeAsync:withCallback:andDispatchQueue:];
-[MobileFFmpeg execute:delimiter:];
-[MobileFFmpeg cancel];
-[MobileFFmpeg cancel:];
-[MobileFFmpeg parseArguments:];
-[MobileFFmpeg argumentsToString:];
-[MobileFFmpeg listExecutions];
@end

@interface MobileFFmpegConfig : 
/* class methods */
-[MobileFFmpegConfig initialize];
-[MobileFFmpegConfig enableRedirection];
-[MobileFFmpegConfig disableRedirection];
-[MobileFFmpegConfig getLogLevel];
-[MobileFFmpegConfig setLogLevel:];
-[MobileFFmpegConfig logLevelToString:];
-[MobileFFmpegConfig setLogDelegate:];
-[MobileFFmpegConfig setStatisticsDelegate:];
-[MobileFFmpegConfig getLastReceivedStatistics];
-[MobileFFmpegConfig resetStatistics];
-[MobileFFmpegConfig setFontconfigConfigurationPath:];
-[MobileFFmpegConfig setFontDirectory:with:];
-[MobileFFmpegConfig getBuildConf];
-[MobileFFmpegConfig getPackageName];
-[MobileFFmpegConfig getExternalLibraries];
-[MobileFFmpegConfig registerNewFFmpegPipe];
-[MobileFFmpegConfig closeFFmpegPipe:];
-[MobileFFmpegConfig getFFmpegVersion];
-[MobileFFmpegConfig getVersion];
-[MobileFFmpegConfig getBuildDate];
-[MobileFFmpegConfig getLastReturnCode];
-[MobileFFmpegConfig getLastCommandOutput];
-[MobileFFmpegConfig ignoreSignal:];
@end

@interface MobileFFprobe : 
/* class methods */
-[MobileFFprobe initialize];
-[MobileFFprobe executeWithArguments:];
-[MobileFFprobe execute:];
-[MobileFFprobe getMediaInformation:];
-[MobileFFprobe getMediaInformationFromCommand:];
-[MobileFFprobe getMediaInformation:timeout:];
-[MobileFFprobe getMediaInformationFromCommandArguments:];
@end

@interface PKYStepper :  {
  /* instance variables */
  B _hidesDecrementWhenMinimum;
  B _hidesIncrementWhenMaximum;
  f _value;
  f _stepInterval;
  f _minimum;
  f _maximum;
  @"UILabel" _countLabel;
  @"UIColor" _labelColor;
  @"UIButton" _incrementButton;
  @"UIButton" _decrementButton;
  d _buttonWidth;
  @? _valueChangedCallback;
  @? _incrementCallback;
  @? _decrementCallback;
}

@property (T@"UILabel",&,N,V_countLabel) countLabel;
@property (T@"UIColor",&,N,V_labelColor) labelColor;
@property (T@"UIButton",&,N,V_incrementButton) incrementButton;
@property (T@"UIButton",&,N,V_decrementButton) decrementButton;
@property (Tf,N,V_value) value;
@property (Tf,N,V_stepInterval) stepInterval;
@property (Tf,N,V_minimum) minimum;
@property (Tf,N,V_maximum) maximum;
@property (TB,N,V_hidesDecrementWhenMinimum) hidesDecrementWhenMinimum;
@property (TB,N,V_hidesIncrementWhenMaximum) hidesIncrementWhenMaximum;
@property (Td,N,V_buttonWidth) buttonWidth;
@property (T@?,C,N,V_valueChangedCallback) valueChangedCallback;
@property (T@?,C,N,V_incrementCallback) incrementCallback;
@property (T@?,C,N,V_decrementCallback) decrementCallback;

/* instance methods */
-[PKYStepper initWithFrame:];
-[PKYStepper initWithCoder:];
-[PKYStepper commonInit];
-[PKYStepper layoutSubviews];
-[PKYStepper setup];
-[PKYStepper sizeThatFits:];
-[PKYStepper setBorderColor:];
-[PKYStepper setBorderWidth:];
-[PKYStepper setCornerRadius:];
-[PKYStepper setLabelTextColor:];
-[PKYStepper setLabelFont:];
-[PKYStepper setButtonTextColor:forState:];
-[PKYStepper setButtonFont:];
-[PKYStepper setValue:];
-[PKYStepper incrementButtonTapped:];
-[PKYStepper decrementButtonTapped:];
-[PKYStepper isMinimum];
-[PKYStepper isMaximum];
-[PKYStepper countLabel];
-[PKYStepper setCountLabel:];
-[PKYStepper labelColor];
-[PKYStepper setLabelColor:];
-[PKYStepper incrementButton];
-[PKYStepper setIncrementButton:];
-[PKYStepper decrementButton];
-[PKYStepper setDecrementButton:];
-[PKYStepper value];
-[PKYStepper stepInterval];
-[PKYStepper setStepInterval:];
-[PKYStepper minimum];
-[PKYStepper setMinimum:];
-[PKYStepper maximum];
-[PKYStepper setMaximum:];
-[PKYStepper hidesDecrementWhenMinimum];
-[PKYStepper setHidesDecrementWhenMinimum:];
-[PKYStepper hidesIncrementWhenMaximum];
-[PKYStepper setHidesIncrementWhenMaximum:];
-[PKYStepper buttonWidth];
-[PKYStepper setButtonWidth:];
-[PKYStepper valueChangedCallback];
-[PKYStepper setValueChangedCallback:];
-[PKYStepper incrementCallback];
-[PKYStepper setIncrementCallback:];
-[PKYStepper decrementCallback];
-[PKYStepper setDecrementCallback:];
@end

@interface PlayerManager : <AVAudioPlayerDelegate, AVPlayerViewControllerDelegate, AVPictureInPictureControllerDelegate> {
  /* instance variables */
  @"AVAudioPlayer" audioPlayer;
  @"NSTimer" timer;
  B isPaused;
  B _shuffleStatus;
  i _repeatStatus;
  @"AVPlayer" _videoPlayer;
  @"AVPlayerViewController" _playerViewController;
  @"DownloadedVC" _source;
  @"NSString" _currentPlayingPath;
  @"UIImage" _currentArtwork;
  @"NSString" _title;
  @"NSString" _channel;
  d _ytMediaTime;
  @"NSMutableArray" _played;
  @"AVPlayer" _player;
}

@property (T@"UIImage",&,N,V_currentArtwork) currentArtwork;
@property (T@"NSString",&,N,V_title) title;
@property (T@"NSString",&,N,V_channel) channel;
@property (T@"AVPlayer",&,N,V_player) player;
@property (T@"AVPlayer",&,N,V_videoPlayer) videoPlayer;
@property (T@"AVPlayerViewController",&,N,V_playerViewController) playerViewController;
@property (T@"DownloadedVC",&,N,V_source) source;
@property (T@"NSString",&,N,V_currentPlayingPath) currentPlayingPath;
@property (Ti,N,V_repeatStatus) repeatStatus;
@property (TB,N,V_shuffleStatus) shuffleStatus;
@property (Td,N,V_ytMediaTime) ytMediaTime;
@property (T@"NSMutableArray",&,N,V_played) played;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[PlayerManager sharedInstance];

/* instance methods */
-[PlayerManager init];
-[PlayerManager audioHardwareRouteChanged:];
-[PlayerManager setUpCommandCenter];
-[PlayerManager metadataKey:atIndex:];
-[PlayerManager currentMetadataForKey:];
-[PlayerManager currentPlayingIndex];
-[PlayerManager allDownloaded];
-[PlayerManager playSongAtIndex:source:];
-[PlayerManager playSongAtIndex:];
-[PlayerManager playSongAtPath:source:];
-[PlayerManager playSongAtPath:];
-[PlayerManager playVideoAtPath:forVC:];
-[PlayerManager playerViewController:restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:];
-[PlayerManager play];
-[PlayerManager pause];
-[PlayerManager next];
-[PlayerManager previous];
-[PlayerManager stop];
-[PlayerManager isPlaying];
-[PlayerManager isPaused];
-[PlayerManager setMetadataForCurrentIndex];
-[PlayerManager setMetadataForIndex:];
-[PlayerManager updateElapsedPlaybackTime];
-[PlayerManager changedScrubber:];
-[PlayerManager progress];
-[PlayerManager updateProgress];
-[PlayerManager duration];
-[PlayerManager currentTime];
-[PlayerManager setCurrentTime:];
-[PlayerManager timeStringFromSeconds:];
-[PlayerManager setAudioSessionActive];
-[PlayerManager setShuffle:];
-[PlayerManager audioPlayerDidFinishPlaying:successfully:];
-[PlayerManager videoPlayer];
-[PlayerManager setVideoPlayer:];
-[PlayerManager playerViewController];
-[PlayerManager setPlayerViewController:];
-[PlayerManager source];
-[PlayerManager setSource:];
-[PlayerManager currentPlayingPath];
-[PlayerManager setCurrentPlayingPath:];
-[PlayerManager currentArtwork];
-[PlayerManager setCurrentArtwork:];
-[PlayerManager title];
-[PlayerManager setTitle:];
-[PlayerManager channel];
-[PlayerManager setChannel:];
-[PlayerManager repeatStatus];
-[PlayerManager setRepeatStatus:];
-[PlayerManager shuffleStatus];
-[PlayerManager setShuffleStatus:];
-[PlayerManager ytMediaTime];
-[PlayerManager setYtMediaTime:];
-[PlayerManager played];
-[PlayerManager setPlayed:];
-[PlayerManager player];
-[PlayerManager setPlayer:];
@end

@interface PlayerVC : <UITextViewDelegate> {
  /* instance variables */
  @"AVRoutePickerView" airplayButton;
  B _isScrubbing;
  B _isShowingLyricsView;
  @"UIBarButtonItem" _playButton;
  @"UIBarButtonItem" _nextButton;
  @"UIBarButtonItem" _previousButton;
  @"UIBarButtonItem" _closeButton;
  @"ArtworkImageView" _artworkImageView;
  @"UIImageView" _backgroundImageView;
  @"UISlider" _slider;
  @"SSBouncyButton" _optionsButton;
  @"UITextView" _lyricsView;
  @"SSBouncyButton" _lyricsButton;
  @"UIButton" _playPlayerButton;
  @"UIButton" _nextPlayerButton;
  @"UIButton" _previousPlayerButton;
  @"UIButton" _repeatPlayerButton;
  @"UIButton" _shufflePlayerButton;
  @"__MarqueeLabel" _totalSongs;
  @"__MarqueeLabel" _songTitle;
  @"__MarqueeLabel" _channel;
  @"UILabel" _currentTime;
  @"UILabel" _totalTime;
}

@property (T@"UIBarButtonItem",&,N,V_playButton) playButton;
@property (T@"UIBarButtonItem",&,N,V_nextButton) nextButton;
@property (T@"UIBarButtonItem",&,N,V_previousButton) previousButton;
@property (T@"UIBarButtonItem",&,N,V_closeButton) closeButton;
@property (T@"ArtworkImageView",&,N,V_artworkImageView) artworkImageView;
@property (T@"UIImageView",&,N,V_backgroundImageView) backgroundImageView;
@property (T@"UISlider",&,N,V_slider) slider;
@property (T@"SSBouncyButton",&,N,V_optionsButton) optionsButton;
@property (T@"UITextView",&,N,V_lyricsView) lyricsView;
@property (T@"SSBouncyButton",&,N,V_lyricsButton) lyricsButton;
@property (T@"UIButton",&,N,V_playPlayerButton) playPlayerButton;
@property (T@"UIButton",&,N,V_nextPlayerButton) nextPlayerButton;
@property (T@"UIButton",&,N,V_previousPlayerButton) previousPlayerButton;
@property (T@"UIButton",&,N,V_repeatPlayerButton) repeatPlayerButton;
@property (T@"UIButton",&,N,V_shufflePlayerButton) shufflePlayerButton;
@property (T@"__MarqueeLabel",&,N,V_totalSongs) totalSongs;
@property (T@"__MarqueeLabel",&,N,V_songTitle) songTitle;
@property (T@"__MarqueeLabel",&,N,V_channel) channel;
@property (T@"UILabel",&,N,V_currentTime) currentTime;
@property (T@"UILabel",&,N,V_totalTime) totalTime;
@property (TB,N,V_isScrubbing) isScrubbing;
@property (TB,N,V_isShowingLyricsView) isShowingLyricsView;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[PlayerVC init];
-[PlayerVC dealloc];
-[PlayerVC viewWillAppear:];
-[PlayerVC viewWillDisappear:];
-[PlayerVC willTransitionToTraitCollection:withTransitionCoordinator:];
-[PlayerVC _setPopupItemButtonsWithTraitCollection:];
-[PlayerVC prefersStatusBarHidden];
-[PlayerVC preferredStatusBarStyle];
-[PlayerVC preferredStatusBarUpdateAnimation];
-[PlayerVC ytBackgroundColor];
-[PlayerVC ytTextColor];
-[PlayerVC updatePageStyles];
-[PlayerVC close];
-[PlayerVC play];
-[PlayerVC pause];
-[PlayerVC next];
-[PlayerVC previous];
-[PlayerVC repeat];
-[PlayerVC shuffle];
-[PlayerVC updatePlayer];
-[PlayerVC updateProgress];
-[PlayerVC sliderValueChanged:forEvent:];
-[PlayerVC optionButton:];
-[PlayerVC getLyricsButton:];
-[PlayerVC createTmpLinkURLToFileAtPath:withName:];
-[PlayerVC textViewShouldBeginEditing:];
-[PlayerVC isRTL];
-[PlayerVC playButton];
-[PlayerVC setPlayButton:];
-[PlayerVC nextButton];
-[PlayerVC setNextButton:];
-[PlayerVC previousButton];
-[PlayerVC setPreviousButton:];
-[PlayerVC closeButton];
-[PlayerVC setCloseButton:];
-[PlayerVC artworkImageView];
-[PlayerVC setArtworkImageView:];
-[PlayerVC backgroundImageView];
-[PlayerVC setBackgroundImageView:];
-[PlayerVC slider];
-[PlayerVC setSlider:];
-[PlayerVC optionsButton];
-[PlayerVC setOptionsButton:];
-[PlayerVC lyricsView];
-[PlayerVC setLyricsView:];
-[PlayerVC lyricsButton];
-[PlayerVC setLyricsButton:];
-[PlayerVC playPlayerButton];
-[PlayerVC setPlayPlayerButton:];
-[PlayerVC nextPlayerButton];
-[PlayerVC setNextPlayerButton:];
-[PlayerVC previousPlayerButton];
-[PlayerVC setPreviousPlayerButton:];
-[PlayerVC repeatPlayerButton];
-[PlayerVC setRepeatPlayerButton:];
-[PlayerVC shufflePlayerButton];
-[PlayerVC setShufflePlayerButton:];
-[PlayerVC totalSongs];
-[PlayerVC setTotalSongs:];
-[PlayerVC songTitle];
-[PlayerVC setSongTitle:];
-[PlayerVC channel];
-[PlayerVC setChannel:];
-[PlayerVC currentTime];
-[PlayerVC setCurrentTime:];
-[PlayerVC totalTime];
-[PlayerVC setTotalTime:];
-[PlayerVC isScrubbing];
-[PlayerVC setIsScrubbing:];
-[PlayerVC isShowingLyricsView];
-[PlayerVC setIsShowingLyricsView:];
@end

@interface RequestItem :  {
  /* instance variables */
  i _type;
  @"NSString" _videoID;
  @"NSString" _playerID;
  @"NSString" _downloadQuality;
  @"UIView" _sourceView;
  @"NSDictionary" _videoInfo;
  @"NSString" _title;
  @"NSString" _channel;
  @"NSString" _channelURL;
  @"NSString" _audioFormat;
  @"NSString" _audioURL;
}

@property (T@"NSString",&,N,V_videoID) videoID;
@property (T@"NSString",&,N,V_playerID) playerID;
@property (T@"NSString",&,N,V_downloadQuality) downloadQuality;
@property (T@"UIView",&,N,V_sourceView) sourceView;
@property (T@"NSDictionary",&,N,V_videoInfo) videoInfo;
@property (T@"NSString",&,N,V_title) title;
@property (T@"NSString",&,N,V_channel) channel;
@property (T@"NSString",&,N,V_channelURL) channelURL;
@property (T@"NSString",&,N,V_audioFormat) audioFormat;
@property (T@"NSString",&,N,V_audioURL) audioURL;
@property (Ti,N,V_type) type;

/* instance methods */
-[RequestItem videoID];
-[RequestItem setVideoID:];
-[RequestItem playerID];
-[RequestItem setPlayerID:];
-[RequestItem downloadQuality];
-[RequestItem setDownloadQuality:];
-[RequestItem sourceView];
-[RequestItem setSourceView:];
-[RequestItem videoInfo];
-[RequestItem setVideoInfo:];
-[RequestItem title];
-[RequestItem setTitle:];
-[RequestItem channel];
-[RequestItem setChannel:];
-[RequestItem channelURL];
-[RequestItem setChannelURL:];
-[RequestItem audioFormat];
-[RequestItem setAudioFormat:];
-[RequestItem audioURL];
-[RequestItem setAudioURL:];
-[RequestItem type];
-[RequestItem setType:];
@end

@interface SDAnimatedImage : <SDAnimatedImage> {
  /* instance variables */
  B _allFramesLoaded;
  q _animatedImageFormat;
  @"<SDAnimatedImageCoder>" _animatedCoder;
  @"NSArray" _loadedAnimatedImageFrames;
}

@property (T@"<SDAnimatedImageCoder>",&,N,V_animatedCoder) animatedCoder;
@property (Tq,N,V_animatedImageFormat) animatedImageFormat;
@property (T@"NSArray",C,V_loadedAnimatedImageFrames) loadedAnimatedImageFrames;
@property (TB,N,GisAllFramesLoaded,V_allFramesLoaded) allFramesLoaded;
@property (T@"NSData",R,C,N) animatedImageData;
@property (Td,R,D,N) scale;
@property (TQ,R,N) animatedImageFrameCount;
@property (TQ,R,N) animatedImageLoopCount;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDAnimatedImage sd_imageWithData:];
-[SDAnimatedImage sd_imageWithData:scale:];
-[SDAnimatedImage sd_imageWithData:scale:firstFrameOnly:];
-[SDAnimatedImage imageNamed:];
-[SDAnimatedImage imageNamed:inBundle:compatibleWithTraitCollection:];
-[SDAnimatedImage imageNamed:inBundle:scale:];
-[SDAnimatedImage imageWithContentsOfFile:];
-[SDAnimatedImage imageWithData:];
-[SDAnimatedImage imageWithData:scale:];
-[SDAnimatedImage supportsSecureCoding];

/* instance methods */
-[SDAnimatedImage sd_imageData];
-[SDAnimatedImage sd_imageDataAsFormat:];
-[SDAnimatedImage sd_imageDataAsFormat:compressionQuality:];
-[SDAnimatedImage sd_imageDataAsFormat:compressionQuality:firstFrameOnly:];
-[SDAnimatedImage sd_isAnimated];
-[SDAnimatedImage sd_imageLoopCount];
-[SDAnimatedImage setSd_imageLoopCount:];
-[SDAnimatedImage sd_imageFormat];
-[SDAnimatedImage setSd_imageFormat:];
-[SDAnimatedImage sd_isVector];
-[SDAnimatedImage sd_memoryCost];
-[SDAnimatedImage initWithContentsOfFile:];
-[SDAnimatedImage initWithData:];
-[SDAnimatedImage initWithData:scale:];
-[SDAnimatedImage initWithData:scale:options:];
-[SDAnimatedImage initWithAnimatedCoder:scale:];
-[SDAnimatedImage preloadAllFrames];
-[SDAnimatedImage unloadAllFrames];
-[SDAnimatedImage initWithCoder:];
-[SDAnimatedImage encodeWithCoder:];
-[SDAnimatedImage animatedImageData];
-[SDAnimatedImage animatedImageLoopCount];
-[SDAnimatedImage animatedImageFrameCount];
-[SDAnimatedImage animatedImageFrameAtIndex:];
-[SDAnimatedImage animatedImageDurationAtIndex:];
-[SDAnimatedImage animatedImageFormat];
-[SDAnimatedImage setAnimatedImageFormat:];
-[SDAnimatedImage isAllFramesLoaded];
-[SDAnimatedImage setAllFramesLoaded:];
-[SDAnimatedImage animatedCoder];
-[SDAnimatedImage setAnimatedCoder:];
-[SDAnimatedImage loadedAnimatedImageFrames];
-[SDAnimatedImage setLoadedAnimatedImageFrames:];
@end

@interface SDAnimatedImagePlayer :  {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _lock;
  @"NSString" _runLoopMode;
  B _bufferMiss;
  B _needsDisplayWhenImageBecomesAvailable;
  B _shouldReverse;
  @"UIImage" _currentFrame;
  Q _currentFrameIndex;
  Q _currentLoopCount;
  Q _totalFrameCount;
  Q _totalLoopCount;
  d _playbackRate;
  Q _playbackMode;
  Q _maxBufferSize;
  @? _animationFrameHandler;
  @? _animationLoopHandler;
  @"<SDAnimatedImageProvider>" _animatedProvider;
  @"NSMutableDictionary" _frameBuffer;
  d _currentTime;
  Q _maxBufferCount;
  @"NSOperationQueue" _fetchQueue;
  @"SDDisplayLink" _displayLink;
}

@property (T@"UIImage",&,N,V_currentFrame) currentFrame;
@property (TQ,N,V_currentFrameIndex) currentFrameIndex;
@property (TQ,N,V_currentLoopCount) currentLoopCount;
@property (T@"<SDAnimatedImageProvider>",&,N,V_animatedProvider) animatedProvider;
@property (T@"NSMutableDictionary",&,N,V_frameBuffer) frameBuffer;
@property (Td,N,V_currentTime) currentTime;
@property (TB,N,V_bufferMiss) bufferMiss;
@property (TB,N,V_needsDisplayWhenImageBecomesAvailable) needsDisplayWhenImageBecomesAvailable;
@property (TB,N,V_shouldReverse) shouldReverse;
@property (TQ,N,V_maxBufferCount) maxBufferCount;
@property (T@"NSOperationQueue",&,N,V_fetchQueue) fetchQueue;
@property (T@"SDDisplayLink",&,N,V_displayLink) displayLink;
@property (TQ,N,V_totalFrameCount) totalFrameCount;
@property (TQ,N,V_totalLoopCount) totalLoopCount;
@property (Td,N,V_playbackRate) playbackRate;
@property (TQ,N,V_playbackMode) playbackMode;
@property (TQ,N,V_maxBufferSize) maxBufferSize;
@property (T@"NSString",C,N) runLoopMode;
@property (T@?,C,N,V_animationFrameHandler) animationFrameHandler;
@property (T@?,C,N,V_animationLoopHandler) animationLoopHandler;
@property (TB,R,N) isPlaying;

/* class methods */
-[SDAnimatedImagePlayer playerWithProvider:];
-[SDAnimatedImagePlayer defaultRunLoopMode];

/* instance methods */
-[SDAnimatedImagePlayer initWithProvider:];
-[SDAnimatedImagePlayer dealloc];
-[SDAnimatedImagePlayer didReceiveMemoryWarning:];
-[SDAnimatedImagePlayer fetchQueue];
-[SDAnimatedImagePlayer frameBuffer];
-[SDAnimatedImagePlayer displayLink];
-[SDAnimatedImagePlayer setRunLoopMode:];
-[SDAnimatedImagePlayer runLoopMode];
-[SDAnimatedImagePlayer setupCurrentFrame];
-[SDAnimatedImagePlayer resetCurrentFrameStatus];
-[SDAnimatedImagePlayer clearFrameBuffer];
-[SDAnimatedImagePlayer startPlaying];
-[SDAnimatedImagePlayer stopPlaying];
-[SDAnimatedImagePlayer pausePlaying];
-[SDAnimatedImagePlayer isPlaying];
-[SDAnimatedImagePlayer seekToFrameAtIndex:loopCount:];
-[SDAnimatedImagePlayer displayDidRefresh:];
-[SDAnimatedImagePlayer handleFrameChange];
-[SDAnimatedImagePlayer handleLoopChange];
-[SDAnimatedImagePlayer calculateMaxBufferCount];
-[SDAnimatedImagePlayer currentFrame];
-[SDAnimatedImagePlayer setCurrentFrame:];
-[SDAnimatedImagePlayer currentFrameIndex];
-[SDAnimatedImagePlayer setCurrentFrameIndex:];
-[SDAnimatedImagePlayer currentLoopCount];
-[SDAnimatedImagePlayer setCurrentLoopCount:];
-[SDAnimatedImagePlayer totalFrameCount];
-[SDAnimatedImagePlayer setTotalFrameCount:];
-[SDAnimatedImagePlayer totalLoopCount];
-[SDAnimatedImagePlayer setTotalLoopCount:];
-[SDAnimatedImagePlayer playbackRate];
-[SDAnimatedImagePlayer setPlaybackRate:];
-[SDAnimatedImagePlayer playbackMode];
-[SDAnimatedImagePlayer setPlaybackMode:];
-[SDAnimatedImagePlayer maxBufferSize];
-[SDAnimatedImagePlayer setMaxBufferSize:];
-[SDAnimatedImagePlayer animationFrameHandler];
-[SDAnimatedImagePlayer setAnimationFrameHandler:];
-[SDAnimatedImagePlayer animationLoopHandler];
-[SDAnimatedImagePlayer setAnimationLoopHandler:];
-[SDAnimatedImagePlayer animatedProvider];
-[SDAnimatedImagePlayer setAnimatedProvider:];
-[SDAnimatedImagePlayer setFrameBuffer:];
-[SDAnimatedImagePlayer currentTime];
-[SDAnimatedImagePlayer setCurrentTime:];
-[SDAnimatedImagePlayer bufferMiss];
-[SDAnimatedImagePlayer setBufferMiss:];
-[SDAnimatedImagePlayer needsDisplayWhenImageBecomesAvailable];
-[SDAnimatedImagePlayer setNeedsDisplayWhenImageBecomesAvailable:];
-[SDAnimatedImagePlayer shouldReverse];
-[SDAnimatedImagePlayer setShouldReverse:];
-[SDAnimatedImagePlayer maxBufferCount];
-[SDAnimatedImagePlayer setMaxBufferCount:];
-[SDAnimatedImagePlayer setFetchQueue:];
-[SDAnimatedImagePlayer setDisplayLink:];
@end

@interface SDAnimatedImageView :  {
  /* instance variables */
  B _initFinished;
  @"NSString" _runLoopMode;
  Q _maxBufferSize;
  d _playbackRate;
  Q _playbackMode;
  B _shouldCustomLoopCount;
  B _shouldIncrementalLoad;
  B _clearBufferWhenStopped;
  B _resetFrameIndexWhenStopped;
  B _autoPlayAnimatedImage;
  B _shouldAnimate;
  B _isProgressive;
  @"SDAnimatedImagePlayer" _player;
  @"UIImage" _currentFrame;
  Q _currentFrameIndex;
  Q _currentLoopCount;
  @"CALayer" _imageViewLayer;
}

@property (T@"SDAnimatedImagePlayer",&,N,V_player) player;
@property (T@"UIImage",&,N,V_currentFrame) currentFrame;
@property (TQ,N,V_currentFrameIndex) currentFrameIndex;
@property (TQ,N,V_currentLoopCount) currentLoopCount;
@property (TB,N,V_shouldAnimate) shouldAnimate;
@property (TB,N,V_isProgressive) isProgressive;
@property (T@"CALayer",&,N,V_imageViewLayer) imageViewLayer;
@property (TB,N,V_shouldCustomLoopCount) shouldCustomLoopCount;
@property (Tq,D,N) animationRepeatCount;
@property (Td,N) playbackRate;
@property (TQ,N) playbackMode;
@property (TQ,N) maxBufferSize;
@property (TB,N,V_shouldIncrementalLoad) shouldIncrementalLoad;
@property (TB,N,V_clearBufferWhenStopped) clearBufferWhenStopped;
@property (TB,N,V_resetFrameIndexWhenStopped) resetFrameIndexWhenStopped;
@property (TB,N,V_autoPlayAnimatedImage) autoPlayAnimatedImage;
@property (T@"NSString",C,N) runLoopMode;

/* class methods */
-[SDAnimatedImageView defaultRunLoopMode];

/* instance methods */
-[SDAnimatedImageView sd_setImageWithURL:];
-[SDAnimatedImageView sd_setImageWithURL:placeholderImage:];
-[SDAnimatedImageView sd_setImageWithURL:placeholderImage:options:];
-[SDAnimatedImageView sd_setImageWithURL:placeholderImage:options:context:];
-[SDAnimatedImageView sd_setImageWithURL:completed:];
-[SDAnimatedImageView sd_setImageWithURL:placeholderImage:completed:];
-[SDAnimatedImageView sd_setImageWithURL:placeholderImage:options:completed:];
-[SDAnimatedImageView sd_setImageWithURL:placeholderImage:options:progress:completed:];
-[SDAnimatedImageView sd_setImageWithURL:placeholderImage:options:context:progress:completed:];
-[SDAnimatedImageView initWithImage:];
-[SDAnimatedImageView initWithImage:highlightedImage:];
-[SDAnimatedImageView initWithFrame:];
-[SDAnimatedImageView initWithCoder:];
-[SDAnimatedImageView commonInit];
-[SDAnimatedImageView setImage:];
-[SDAnimatedImageView setRunLoopMode:];
-[SDAnimatedImageView runLoopMode];
-[SDAnimatedImageView setMaxBufferSize:];
-[SDAnimatedImageView maxBufferSize];
-[SDAnimatedImageView setPlaybackRate:];
-[SDAnimatedImageView playbackRate];
-[SDAnimatedImageView setPlaybackMode:];
-[SDAnimatedImageView playbackMode];
-[SDAnimatedImageView didMoveToSuperview];
-[SDAnimatedImageView didMoveToWindow];
-[SDAnimatedImageView setAlpha:];
-[SDAnimatedImageView setHidden:];
-[SDAnimatedImageView setAnimationRepeatCount:];
-[SDAnimatedImageView startAnimating];
-[SDAnimatedImageView stopAnimating];
-[SDAnimatedImageView isAnimating];
-[SDAnimatedImageView setHighlighted:];
-[SDAnimatedImageView checkPlay];
-[SDAnimatedImageView updateShouldAnimate];
-[SDAnimatedImageView updateIsProgressiveWithImage:];
-[SDAnimatedImageView progressiveAnimatedCoderForImage:];
-[SDAnimatedImageView displayLayer:];
-[SDAnimatedImageView player];
-[SDAnimatedImageView setPlayer:];
-[SDAnimatedImageView currentFrame];
-[SDAnimatedImageView setCurrentFrame:];
-[SDAnimatedImageView currentFrameIndex];
-[SDAnimatedImageView setCurrentFrameIndex:];
-[SDAnimatedImageView currentLoopCount];
-[SDAnimatedImageView setCurrentLoopCount:];
-[SDAnimatedImageView shouldCustomLoopCount];
-[SDAnimatedImageView setShouldCustomLoopCount:];
-[SDAnimatedImageView shouldIncrementalLoad];
-[SDAnimatedImageView setShouldIncrementalLoad:];
-[SDAnimatedImageView clearBufferWhenStopped];
-[SDAnimatedImageView setClearBufferWhenStopped:];
-[SDAnimatedImageView resetFrameIndexWhenStopped];
-[SDAnimatedImageView setResetFrameIndexWhenStopped:];
-[SDAnimatedImageView autoPlayAnimatedImage];
-[SDAnimatedImageView setAutoPlayAnimatedImage:];
-[SDAnimatedImageView shouldAnimate];
-[SDAnimatedImageView setShouldAnimate:];
-[SDAnimatedImageView isProgressive];
-[SDAnimatedImageView setIsProgressive:];
-[SDAnimatedImageView imageViewLayer];
-[SDAnimatedImageView setImageViewLayer:];
@end

@interface SDAsyncBlockOperation :  {
  /* instance variables */
  B _executing;
  B _finished;
  @? _executionBlock;
}

@property (TB,N,GisExecuting,V_executing) executing;
@property (TB,N,GisFinished,V_finished) finished;
@property (T@?,C,N,V_executionBlock) executionBlock;

/* class methods */
-[SDAsyncBlockOperation blockOperationWithBlock:];

/* instance methods */
-[SDAsyncBlockOperation initWithBlock:];
-[SDAsyncBlockOperation start];
-[SDAsyncBlockOperation cancel];
-[SDAsyncBlockOperation complete];
-[SDAsyncBlockOperation setFinished:];
-[SDAsyncBlockOperation setExecuting:];
-[SDAsyncBlockOperation isConcurrent];
-[SDAsyncBlockOperation isExecuting];
-[SDAsyncBlockOperation isFinished];
-[SDAsyncBlockOperation executionBlock];
-[SDAsyncBlockOperation setExecutionBlock:];
@end

@interface SDDeviceHelper : 
/* class methods */
-[SDDeviceHelper totalMemory];
-[SDDeviceHelper freeMemory];
@end

@interface SDDiskCache : <SDDiskCache> {
  /* instance variables */
  @"SDImageCacheConfig" _config;
  @"NSString" _diskCachePath;
  @"NSFileManager" _fileManager;
}

@property (T@"NSString",C,N,V_diskCachePath) diskCachePath;
@property (T@"NSFileManager",&,N,V_fileManager) fileManager;
@property (T@"SDImageCacheConfig",R,N,V_config) config;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[SDDiskCache init];
-[SDDiskCache initWithCachePath:config:];
-[SDDiskCache commonInit];
-[SDDiskCache containsDataForKey:];
-[SDDiskCache dataForKey:];
-[SDDiskCache setData:forKey:];
-[SDDiskCache extendedDataForKey:];
-[SDDiskCache setExtendedData:forKey:];
-[SDDiskCache removeDataForKey:];
-[SDDiskCache removeAllData];
-[SDDiskCache removeExpiredData];
-[SDDiskCache cachePathForKey:];
-[SDDiskCache totalSize];
-[SDDiskCache totalCount];
-[SDDiskCache cachePathForKey:inPath:];
-[SDDiskCache moveCacheDirectoryFromPath:toPath:];
-[SDDiskCache config];
-[SDDiskCache diskCachePath];
-[SDDiskCache setDiskCachePath:];
-[SDDiskCache fileManager];
-[SDDiskCache setFileManager:];
@end

@interface SDDisplayLink :  {
  /* instance variables */
  @ _target;
  : _selector;
  @"CADisplayLink" _displayLink;
}

@property (T@"CADisplayLink",&,N,V_displayLink) displayLink;
@property (T@,R,W,N,V_target) target;
@property (T:,R,N,V_selector) selector;
@property (Td,R,N) duration;
@property (TB,R,N) isRunning;

/* class methods */
-[SDDisplayLink displayLinkWithTarget:selector:];

/* instance methods */
-[SDDisplayLink dealloc];
-[SDDisplayLink initWithTarget:selector:];
-[SDDisplayLink duration];
-[SDDisplayLink isRunning];
-[SDDisplayLink addToRunLoop:forMode:];
-[SDDisplayLink removeFromRunLoop:forMode:];
-[SDDisplayLink start];
-[SDDisplayLink stop];
-[SDDisplayLink displayLinkDidRefresh:];
-[SDDisplayLink target];
-[SDDisplayLink selector];
-[SDDisplayLink displayLink];
-[SDDisplayLink setDisplayLink:];
@end

@interface SDFileAttributeHelper : 
/* class methods */
-[SDFileAttributeHelper extendedAttributeNamesAtPath:traverseLink:error:];
-[SDFileAttributeHelper hasExtendedAttribute:atPath:traverseLink:error:];
-[SDFileAttributeHelper extendedAttribute:atPath:traverseLink:error:];
-[SDFileAttributeHelper setExtendedAttribute:value:atPath:traverseLink:overwrite:error:];
-[SDFileAttributeHelper removeExtendedAttribute:atPath:traverseLink:error:];
@end

@interface SDGraphicsImageRenderer :  {
  /* instance variables */
  @"SDGraphicsImageRendererFormat" _format;
  @"UIGraphicsImageRenderer" _uirenderer;
  {CGSize="width"d"height"d} _size;
}

@property (T{CGSize=dd},N,V_size) size;
@property (T@"SDGraphicsImageRendererFormat",&,N,V_format) format;
@property (T@"UIGraphicsImageRenderer",&,N,V_uirenderer) uirenderer;

/* instance methods */
-[SDGraphicsImageRenderer initWithSize:];
-[SDGraphicsImageRenderer initWithSize:format:];
-[SDGraphicsImageRenderer imageWithActions:];
-[SDGraphicsImageRenderer size];
-[SDGraphicsImageRenderer setSize:];
-[SDGraphicsImageRenderer format];
-[SDGraphicsImageRenderer setFormat:];
-[SDGraphicsImageRenderer uirenderer];
-[SDGraphicsImageRenderer setUirenderer:];
@end

@interface SDGraphicsImageRendererFormat :  {
  /* instance variables */
  B _opaque;
  d _scale;
  q _preferredRange;
  @"UIGraphicsImageRendererFormat" _uiformat;
}

@property (T@"UIGraphicsImageRendererFormat",&,N,V_uiformat) uiformat;
@property (Td,N,V_scale) scale;
@property (TB,N,V_opaque) opaque;
@property (Tq,N,V_preferredRange) preferredRange;

/* class methods */
-[SDGraphicsImageRendererFormat preferredFormat];

/* instance methods */
-[SDGraphicsImageRendererFormat scale];
-[SDGraphicsImageRendererFormat setScale:];
-[SDGraphicsImageRendererFormat opaque];
-[SDGraphicsImageRendererFormat setOpaque:];
-[SDGraphicsImageRendererFormat preferredRange];
-[SDGraphicsImageRendererFormat setPreferredRange:];
-[SDGraphicsImageRendererFormat init];
-[SDGraphicsImageRendererFormat initForMainScreen];
-[SDGraphicsImageRendererFormat uiformat];
-[SDGraphicsImageRendererFormat setUiformat:];
@end

@interface SDImageAPNGCoder : SDImageIOAnimatedCoder<SDProgressiveImageCoder, SDAnimatedImageCoder>

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;
@property (T@"NSData",R,C,N) animatedImageData;
@property (TQ,R,N) animatedImageFrameCount;
@property (TQ,R,N) animatedImageLoopCount;

/* class methods */
-[SDImageAPNGCoder sharedCoder];
-[SDImageAPNGCoder imageFormat];
-[SDImageAPNGCoder imageUTType];
-[SDImageAPNGCoder dictionaryProperty];
-[SDImageAPNGCoder unclampedDelayTimeProperty];
-[SDImageAPNGCoder delayTimeProperty];
-[SDImageAPNGCoder loopCountProperty];
-[SDImageAPNGCoder defaultLoopCount];
@end

@interface SDImageAWebPCoder : SDImageIOAnimatedCoder<SDProgressiveImageCoder, SDAnimatedImageCoder>

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;
@property (T@"NSData",R,C,N) animatedImageData;
@property (TQ,R,N) animatedImageFrameCount;
@property (TQ,R,N) animatedImageLoopCount;

/* class methods */
-[SDImageAWebPCoder initialize];
-[SDImageAWebPCoder sharedCoder];
-[SDImageAWebPCoder imageFormat];
-[SDImageAWebPCoder imageUTType];
-[SDImageAWebPCoder dictionaryProperty];
-[SDImageAWebPCoder unclampedDelayTimeProperty];
-[SDImageAWebPCoder delayTimeProperty];
-[SDImageAWebPCoder loopCountProperty];
-[SDImageAWebPCoder defaultLoopCount];

/* instance methods */
-[SDImageAWebPCoder canDecodeFromData:];
-[SDImageAWebPCoder canIncrementalDecodeFromData:];
-[SDImageAWebPCoder canEncodeToFormat:];
@end

@interface SDImageAssetManager :  {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _lock;
  @"NSMapTable" _imageTable;
}

@property (T@"NSMapTable",&,N,V_imageTable) imageTable;

/* class methods */
-[SDImageAssetManager sharedAssetManager];

/* instance methods */
-[SDImageAssetManager init];
-[SDImageAssetManager dealloc];
-[SDImageAssetManager didReceiveMemoryWarning:];
-[SDImageAssetManager getPathForName:bundle:preferredScale:];
-[SDImageAssetManager imageForName:];
-[SDImageAssetManager storeImage:forName:];
-[SDImageAssetManager imageTable];
-[SDImageAssetManager setImageTable:];
@end

@interface SDImageBlurTransformer : <SDImageTransformer> {
  /* instance variables */
  d _blurRadius;
}

@property (Td,N,V_blurRadius) blurRadius;
@property (T@"NSString",R,C,N) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageBlurTransformer transformerWithRadius:];

/* instance methods */
-[SDImageBlurTransformer transformerKey];
-[SDImageBlurTransformer transformedImageWithImage:forKey:];
-[SDImageBlurTransformer blurRadius];
-[SDImageBlurTransformer setBlurRadius:];
@end

@interface SDImageCache : <SDImageCache> {
  /* instance variables */
  @"SDImageCacheConfig" _config;
  @"<SDMemoryCache>" _memoryCache;
  @"<SDDiskCache>" _diskCache;
  @"NSString" _diskCachePath;
  @? _additionalCachePathBlock;
  @"NSObject<OS_dispatch_queue>" _ioQueue;
}

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;
@property (T@"<SDMemoryCache>",&,N,V_memoryCache) memoryCache;
@property (T@"<SDDiskCache>",&,N,V_diskCache) diskCache;
@property (T@"SDImageCacheConfig",C,N,V_config) config;
@property (T@"NSString",C,N,V_diskCachePath) diskCachePath;
@property (T@"NSObject<OS_dispatch_queue>",&,N,V_ioQueue) ioQueue;
@property (T@?,C,N,V_additionalCachePathBlock) additionalCachePathBlock;

/* class methods */
-[SDImageCache sharedImageCache];
-[SDImageCache defaultDiskCacheDirectory];
-[SDImageCache setDefaultDiskCacheDirectory:];
-[SDImageCache userCacheDirectory];
-[SDImageCache imageOptionsFromCacheOptions:];

/* instance methods */
-[SDImageCache queryImageForKey:options:context:completion:];
-[SDImageCache queryImageForKey:options:context:cacheType:completion:];
-[SDImageCache storeImage:imageData:forKey:cacheType:completion:];
-[SDImageCache removeImageForKey:cacheType:completion:];
-[SDImageCache containsImageForKey:cacheType:completion:];
-[SDImageCache clearWithCacheType:completion:];
-[SDImageCache init];
-[SDImageCache initWithNamespace:];
-[SDImageCache initWithNamespace:diskCacheDirectory:];
-[SDImageCache initWithNamespace:diskCacheDirectory:config:];
-[SDImageCache dealloc];
-[SDImageCache cachePathForKey:];
-[SDImageCache migrateDiskCacheDirectory];
-[SDImageCache storeImage:forKey:completion:];
-[SDImageCache storeImage:forKey:toDisk:completion:];
-[SDImageCache storeImage:imageData:forKey:toDisk:completion:];
-[SDImageCache storeImage:imageData:forKey:toMemory:toDisk:completion:];
-[SDImageCache _archivedDataWithImage:forKey:];
-[SDImageCache storeImageToMemory:forKey:];
-[SDImageCache storeImageDataToDisk:forKey:];
-[SDImageCache _storeImageDataToDisk:forKey:];
-[SDImageCache diskImageExistsWithKey:completion:];
-[SDImageCache diskImageDataExistsWithKey:];
-[SDImageCache _diskImageDataExistsWithKey:];
-[SDImageCache diskImageDataQueryForKey:completion:];
-[SDImageCache diskImageDataForKey:];
-[SDImageCache imageFromMemoryCacheForKey:];
-[SDImageCache imageFromDiskCacheForKey:];
-[SDImageCache imageFromDiskCacheForKey:options:context:];
-[SDImageCache imageFromCacheForKey:];
-[SDImageCache imageFromCacheForKey:options:context:];
-[SDImageCache diskImageDataBySearchingAllPathsForKey:];
-[SDImageCache diskImageForKey:];
-[SDImageCache diskImageForKey:data:];
-[SDImageCache diskImageForKey:data:options:context:];
-[SDImageCache _unarchiveObjectWithImage:forKey:];
-[SDImageCache queryCacheOperationForKey:done:];
-[SDImageCache queryCacheOperationForKey:options:done:];
-[SDImageCache queryCacheOperationForKey:options:context:done:];
-[SDImageCache queryCacheOperationForKey:options:context:cacheType:done:];
-[SDImageCache removeImageForKey:withCompletion:];
-[SDImageCache removeImageForKey:fromDisk:withCompletion:];
-[SDImageCache removeImageForKey:fromMemory:fromDisk:withCompletion:];
-[SDImageCache removeImageFromMemoryForKey:];
-[SDImageCache removeImageFromDiskForKey:];
-[SDImageCache _removeImageFromDiskForKey:];
-[SDImageCache clearMemory];
-[SDImageCache clearDiskOnCompletion:];
-[SDImageCache deleteOldFilesWithCompletionBlock:];
-[SDImageCache applicationWillTerminate:];
-[SDImageCache applicationDidEnterBackground:];
-[SDImageCache totalDiskSize];
-[SDImageCache totalDiskCount];
-[SDImageCache calculateSizeWithCompletionBlock:];
-[SDImageCache config];
-[SDImageCache setConfig:];
-[SDImageCache memoryCache];
-[SDImageCache setMemoryCache:];
-[SDImageCache diskCache];
-[SDImageCache setDiskCache:];
-[SDImageCache diskCachePath];
-[SDImageCache setDiskCachePath:];
-[SDImageCache additionalCachePathBlock];
-[SDImageCache setAdditionalCachePathBlock:];
-[SDImageCache ioQueue];
-[SDImageCache setIoQueue:];
@end

@interface SDImageCacheConfig : <NSCopying> {
  /* instance variables */
  B _shouldDisableiCloud;
  B _shouldCacheImagesInMemory;
  B _shouldUseWeakMemoryCache;
  B _shouldRemoveExpiredDataWhenEnterBackground;
  Q _diskCacheReadingOptions;
  Q _diskCacheWritingOptions;
  d _maxDiskAge;
  Q _maxDiskSize;
  Q _maxMemoryCost;
  Q _maxMemoryCount;
  Q _diskCacheExpireType;
  @"NSFileManager" _fileManager;
  # _memoryCacheClass;
  # _diskCacheClass;
}

@property (TB,N,V_shouldDisableiCloud) shouldDisableiCloud;
@property (TB,N,V_shouldCacheImagesInMemory) shouldCacheImagesInMemory;
@property (TB,N,V_shouldUseWeakMemoryCache) shouldUseWeakMemoryCache;
@property (TB,N,V_shouldRemoveExpiredDataWhenEnterBackground) shouldRemoveExpiredDataWhenEnterBackground;
@property (TQ,N,V_diskCacheReadingOptions) diskCacheReadingOptions;
@property (TQ,N,V_diskCacheWritingOptions) diskCacheWritingOptions;
@property (Td,N,V_maxDiskAge) maxDiskAge;
@property (TQ,N,V_maxDiskSize) maxDiskSize;
@property (TQ,N,V_maxMemoryCost) maxMemoryCost;
@property (TQ,N,V_maxMemoryCount) maxMemoryCount;
@property (TQ,N,V_diskCacheExpireType) diskCacheExpireType;
@property (T@"NSFileManager",&,N,V_fileManager) fileManager;
@property (T#,N,V_memoryCacheClass) memoryCacheClass;
@property (T#,N,V_diskCacheClass) diskCacheClass;

/* class methods */
-[SDImageCacheConfig defaultCacheConfig];

/* instance methods */
-[SDImageCacheConfig init];
-[SDImageCacheConfig copyWithZone:];
-[SDImageCacheConfig shouldDisableiCloud];
-[SDImageCacheConfig setShouldDisableiCloud:];
-[SDImageCacheConfig shouldCacheImagesInMemory];
-[SDImageCacheConfig setShouldCacheImagesInMemory:];
-[SDImageCacheConfig shouldUseWeakMemoryCache];
-[SDImageCacheConfig setShouldUseWeakMemoryCache:];
-[SDImageCacheConfig shouldRemoveExpiredDataWhenEnterBackground];
-[SDImageCacheConfig setShouldRemoveExpiredDataWhenEnterBackground:];
-[SDImageCacheConfig diskCacheReadingOptions];
-[SDImageCacheConfig setDiskCacheReadingOptions:];
-[SDImageCacheConfig diskCacheWritingOptions];
-[SDImageCacheConfig setDiskCacheWritingOptions:];
-[SDImageCacheConfig maxDiskAge];
-[SDImageCacheConfig setMaxDiskAge:];
-[SDImageCacheConfig maxDiskSize];
-[SDImageCacheConfig setMaxDiskSize:];
-[SDImageCacheConfig maxMemoryCost];
-[SDImageCacheConfig setMaxMemoryCost:];
-[SDImageCacheConfig maxMemoryCount];
-[SDImageCacheConfig setMaxMemoryCount:];
-[SDImageCacheConfig diskCacheExpireType];
-[SDImageCacheConfig setDiskCacheExpireType:];
-[SDImageCacheConfig fileManager];
-[SDImageCacheConfig setFileManager:];
-[SDImageCacheConfig memoryCacheClass];
-[SDImageCacheConfig setMemoryCacheClass:];
-[SDImageCacheConfig diskCacheClass];
-[SDImageCacheConfig setDiskCacheClass:];
@end

@interface SDImageCachesManager : <SDImageCache> {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _cachesLock;
  Q _queryOperationPolicy;
  Q _storeOperationPolicy;
  Q _removeOperationPolicy;
  Q _containsOperationPolicy;
  Q _clearOperationPolicy;
  @"NSMutableArray" _imageCaches;
}

@property (T@"NSMutableArray",&,N,V_imageCaches) imageCaches;
@property (TQ,N,V_queryOperationPolicy) queryOperationPolicy;
@property (TQ,N,V_storeOperationPolicy) storeOperationPolicy;
@property (TQ,N,V_removeOperationPolicy) removeOperationPolicy;
@property (TQ,N,V_containsOperationPolicy) containsOperationPolicy;
@property (TQ,N,V_clearOperationPolicy) clearOperationPolicy;
@property (T@"NSArray",C,N) caches;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageCachesManager sharedManager];

/* instance methods */
-[SDImageCachesManager init];
-[SDImageCachesManager caches];
-[SDImageCachesManager setCaches:];
-[SDImageCachesManager addCache:];
-[SDImageCachesManager removeCache:];
-[SDImageCachesManager queryImageForKey:options:context:completion:];
-[SDImageCachesManager queryImageForKey:options:context:cacheType:completion:];
-[SDImageCachesManager storeImage:imageData:forKey:cacheType:completion:];
-[SDImageCachesManager removeImageForKey:cacheType:completion:];
-[SDImageCachesManager containsImageForKey:cacheType:completion:];
-[SDImageCachesManager clearWithCacheType:completion:];
-[SDImageCachesManager concurrentQueryImageForKey:options:context:cacheType:completion:enumerator:operation:];
-[SDImageCachesManager concurrentStoreImage:imageData:forKey:cacheType:completion:enumerator:operation:];
-[SDImageCachesManager concurrentRemoveImageForKey:cacheType:completion:enumerator:operation:];
-[SDImageCachesManager concurrentContainsImageForKey:cacheType:completion:enumerator:operation:];
-[SDImageCachesManager concurrentClearWithCacheType:completion:enumerator:operation:];
-[SDImageCachesManager serialQueryImageForKey:options:context:cacheType:completion:enumerator:operation:];
-[SDImageCachesManager serialStoreImage:imageData:forKey:cacheType:completion:enumerator:];
-[SDImageCachesManager serialRemoveImageForKey:cacheType:completion:enumerator:];
-[SDImageCachesManager serialContainsImageForKey:cacheType:completion:enumerator:operation:];
-[SDImageCachesManager serialClearWithCacheType:completion:enumerator:];
-[SDImageCachesManager queryOperationPolicy];
-[SDImageCachesManager setQueryOperationPolicy:];
-[SDImageCachesManager storeOperationPolicy];
-[SDImageCachesManager setStoreOperationPolicy:];
-[SDImageCachesManager removeOperationPolicy];
-[SDImageCachesManager setRemoveOperationPolicy:];
-[SDImageCachesManager containsOperationPolicy];
-[SDImageCachesManager setContainsOperationPolicy:];
-[SDImageCachesManager clearOperationPolicy];
-[SDImageCachesManager setClearOperationPolicy:];
-[SDImageCachesManager imageCaches];
-[SDImageCachesManager setImageCaches:];
@end

@interface SDImageCachesManagerOperation :  {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _pendingCountLock;
  B _executing;
  B _finished;
  B _cancelled;
  Q _pendingCount;
}

@property (TQ,R,N,V_pendingCount) pendingCount;

/* instance methods */
-[SDImageCachesManagerOperation init];
-[SDImageCachesManagerOperation beginWithTotalCount:];
-[SDImageCachesManagerOperation pendingCount];
-[SDImageCachesManagerOperation completeOne];
-[SDImageCachesManagerOperation cancel];
-[SDImageCachesManagerOperation done];
-[SDImageCachesManagerOperation reset];
-[SDImageCachesManagerOperation setFinished:];
-[SDImageCachesManagerOperation setExecuting:];
-[SDImageCachesManagerOperation setCancelled:];
-[SDImageCachesManagerOperation isExecuting];
-[SDImageCachesManagerOperation isFinished];
-[SDImageCachesManagerOperation isCancelled];
@end

@interface SDImageCoderHelper : 
/* class methods */
-[SDImageCoderHelper animatedImageWithFrames:];
-[SDImageCoderHelper framesFromAnimatedImage:];
-[SDImageCoderHelper colorSpaceGetDeviceRGB];
-[SDImageCoderHelper CGImageContainsAlpha:];
-[SDImageCoderHelper CGImageCreateDecoded:];
-[SDImageCoderHelper CGImageCreateDecoded:orientation:];
-[SDImageCoderHelper CGImageCreateScaled:size:];
-[SDImageCoderHelper decodedImageWithImage:];
-[SDImageCoderHelper decodedAndScaledDownImageWithImage:limitBytes:];
-[SDImageCoderHelper defaultScaleDownLimitBytes];
-[SDImageCoderHelper setDefaultScaleDownLimitBytes:];
-[SDImageCoderHelper imageOrientationFromEXIFOrientation:];
-[SDImageCoderHelper exifOrientationFromImageOrientation:];
-[SDImageCoderHelper shouldDecodeImage:];
-[SDImageCoderHelper shouldScaleDownImage:limitBytes:];
@end

@interface SDImageCodersManager : <SDImageCoder> {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _codersLock;
  @"NSMutableArray" _imageCoders;
}

@property (T@"NSMutableArray",&,N,V_imageCoders) imageCoders;
@property (T@"NSArray",C,N) coders;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageCodersManager sharedManager];

/* instance methods */
-[SDImageCodersManager init];
-[SDImageCodersManager coders];
-[SDImageCodersManager setCoders:];
-[SDImageCodersManager addCoder:];
-[SDImageCodersManager removeCoder:];
-[SDImageCodersManager canDecodeFromData:];
-[SDImageCodersManager canEncodeToFormat:];
-[SDImageCodersManager decodedImageWithData:options:];
-[SDImageCodersManager encodedDataWithImage:format:options:];
-[SDImageCodersManager imageCoders];
-[SDImageCodersManager setImageCoders:];
@end

@interface SDImageCroppingTransformer : <SDImageTransformer> {
  /* instance variables */
  {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rect;
}

@property (T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_rect) rect;
@property (T@"NSString",R,C,N) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageCroppingTransformer transformerWithRect:];

/* instance methods */
-[SDImageCroppingTransformer transformerKey];
-[SDImageCroppingTransformer transformedImageWithImage:forKey:];
-[SDImageCroppingTransformer rect];
-[SDImageCroppingTransformer setRect:];
@end

@interface SDImageFilterTransformer : <SDImageTransformer> {
  /* instance variables */
  @"CIFilter" _filter;
}

@property (T@"CIFilter",&,N,V_filter) filter;
@property (T@"NSString",R,C,N) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageFilterTransformer transformerWithFilter:];

/* instance methods */
-[SDImageFilterTransformer transformerKey];
-[SDImageFilterTransformer transformedImageWithImage:forKey:];
-[SDImageFilterTransformer filter];
-[SDImageFilterTransformer setFilter:];
@end

@interface SDImageFlippingTransformer : <SDImageTransformer> {
  /* instance variables */
  B _horizontal;
  B _vertical;
}

@property (TB,N,V_horizontal) horizontal;
@property (TB,N,V_vertical) vertical;
@property (T@"NSString",R,C,N) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageFlippingTransformer transformerWithHorizontal:vertical:];

/* instance methods */
-[SDImageFlippingTransformer transformerKey];
-[SDImageFlippingTransformer transformedImageWithImage:forKey:];
-[SDImageFlippingTransformer horizontal];
-[SDImageFlippingTransformer setHorizontal:];
-[SDImageFlippingTransformer vertical];
-[SDImageFlippingTransformer setVertical:];
@end

@interface SDImageFrame :  {
  /* instance variables */
  @"UIImage" _image;
  d _duration;
}

@property (T@"UIImage",&,N,V_image) image;
@property (Td,N,V_duration) duration;

/* class methods */
-[SDImageFrame frameWithImage:duration:];

/* instance methods */
-[SDImageFrame image];
-[SDImageFrame setImage:];
-[SDImageFrame duration];
-[SDImageFrame setDuration:];
@end

@interface SDImageGIFCoder : SDImageIOAnimatedCoder<SDProgressiveImageCoder, SDAnimatedImageCoder>

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;
@property (T@"NSData",R,C,N) animatedImageData;
@property (TQ,R,N) animatedImageFrameCount;
@property (TQ,R,N) animatedImageLoopCount;

/* class methods */
-[SDImageGIFCoder sharedCoder];
-[SDImageGIFCoder imageFormat];
-[SDImageGIFCoder imageUTType];
-[SDImageGIFCoder dictionaryProperty];
-[SDImageGIFCoder unclampedDelayTimeProperty];
-[SDImageGIFCoder delayTimeProperty];
-[SDImageGIFCoder loopCountProperty];
-[SDImageGIFCoder defaultLoopCount];
@end

@interface SDImageHEICCoder : SDImageIOAnimatedCoder<SDProgressiveImageCoder, SDAnimatedImageCoder>

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;
@property (T@"NSData",R,C,N) animatedImageData;
@property (TQ,R,N) animatedImageFrameCount;
@property (TQ,R,N) animatedImageLoopCount;

/* class methods */
-[SDImageHEICCoder initialize];
-[SDImageHEICCoder sharedCoder];
-[SDImageHEICCoder imageFormat];
-[SDImageHEICCoder imageUTType];
-[SDImageHEICCoder dictionaryProperty];
-[SDImageHEICCoder unclampedDelayTimeProperty];
-[SDImageHEICCoder delayTimeProperty];
-[SDImageHEICCoder loopCountProperty];
-[SDImageHEICCoder defaultLoopCount];

/* instance methods */
-[SDImageHEICCoder canDecodeFromData:];
-[SDImageHEICCoder canIncrementalDecodeFromData:];
-[SDImageHEICCoder canEncodeToFormat:];
@end

@interface SDImageIOAnimatedCoder : <SDProgressiveImageCoder, SDAnimatedImageCoder> {
  /* instance variables */
  Q _width;
  Q _height;
  ^{CGImageSource=} _imageSource;
  @"NSData" _imageData;
  d _scale;
  Q _loopCount;
  Q _frameCount;
  @"NSArray" _frames;
  B _finished;
  B _preserveAspectRatio;
  {CGSize="width"d"height"d} _thumbnailSize;
}

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;
@property (T@"NSData",R,C,N) animatedImageData;
@property (TQ,R,N) animatedImageFrameCount;
@property (TQ,R,N) animatedImageLoopCount;

/* class methods */
-[SDImageIOAnimatedCoder imageFormat];
-[SDImageIOAnimatedCoder imageUTType];
-[SDImageIOAnimatedCoder dictionaryProperty];
-[SDImageIOAnimatedCoder unclampedDelayTimeProperty];
-[SDImageIOAnimatedCoder delayTimeProperty];
-[SDImageIOAnimatedCoder loopCountProperty];
-[SDImageIOAnimatedCoder defaultLoopCount];
-[SDImageIOAnimatedCoder canDecodeFromFormat:];
-[SDImageIOAnimatedCoder canEncodeToFormat:];
-[SDImageIOAnimatedCoder imageLoopCountWithSource:];
-[SDImageIOAnimatedCoder frameDurationAtIndex:source:];
-[SDImageIOAnimatedCoder createFrameAtIndex:source:scale:preserveAspectRatio:thumbnailSize:options:];

/* instance methods */
-[SDImageIOAnimatedCoder dealloc];
-[SDImageIOAnimatedCoder didReceiveMemoryWarning:];
-[SDImageIOAnimatedCoder canDecodeFromData:];
-[SDImageIOAnimatedCoder decodedImageWithData:options:];
-[SDImageIOAnimatedCoder canIncrementalDecodeFromData:];
-[SDImageIOAnimatedCoder initIncrementalWithOptions:];
-[SDImageIOAnimatedCoder updateIncrementalData:finished:];
-[SDImageIOAnimatedCoder incrementalDecodedImageWithOptions:];
-[SDImageIOAnimatedCoder canEncodeToFormat:];
-[SDImageIOAnimatedCoder encodedDataWithImage:format:options:];
-[SDImageIOAnimatedCoder initWithAnimatedImageData:options:];
-[SDImageIOAnimatedCoder scanAndCheckFramesValidWithImageSource:];
-[SDImageIOAnimatedCoder animatedImageData];
-[SDImageIOAnimatedCoder animatedImageLoopCount];
-[SDImageIOAnimatedCoder animatedImageFrameCount];
-[SDImageIOAnimatedCoder animatedImageDurationAtIndex:];
-[SDImageIOAnimatedCoder animatedImageFrameAtIndex:];
@end

@interface SDImageIOCoder : <SDProgressiveImageCoder> {
  /* instance variables */
  Q _width;
  Q _height;
  I _orientation;
  ^{CGImageSource=} _imageSource;
  d _scale;
  B _finished;
  B _preserveAspectRatio;
  {CGSize="width"d"height"d} _thumbnailSize;
}

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageIOCoder sharedCoder];

/* instance methods */
-[SDImageIOCoder dealloc];
-[SDImageIOCoder didReceiveMemoryWarning:];
-[SDImageIOCoder canDecodeFromData:];
-[SDImageIOCoder decodedImageWithData:options:];
-[SDImageIOCoder canIncrementalDecodeFromData:];
-[SDImageIOCoder initIncrementalWithOptions:];
-[SDImageIOCoder updateIncrementalData:finished:];
-[SDImageIOCoder incrementalDecodedImageWithOptions:];
-[SDImageIOCoder canEncodeToFormat:];
-[SDImageIOCoder encodedDataWithImage:format:options:];
@end

@interface SDImageIOCoderFrame :  {
  /* instance variables */
  Q _index;
  d _duration;
}

@property (TQ,N,V_index) index;
@property (Td,N,V_duration) duration;

/* instance methods */
-[SDImageIOCoderFrame index];
-[SDImageIOCoderFrame setIndex:];
-[SDImageIOCoderFrame duration];
-[SDImageIOCoderFrame setDuration:];
@end

@interface SDImageLoadersManager : <SDImageLoader> {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _loadersLock;
  @"NSMutableArray" _imageLoaders;
}

@property (T@"NSMutableArray",&,N,V_imageLoaders) imageLoaders;
@property (T@"NSArray",C,N) loaders;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageLoadersManager sharedManager];

/* instance methods */
-[SDImageLoadersManager init];
-[SDImageLoadersManager loaders];
-[SDImageLoadersManager setLoaders:];
-[SDImageLoadersManager addLoader:];
-[SDImageLoadersManager removeLoader:];
-[SDImageLoadersManager canRequestImageForURL:];
-[SDImageLoadersManager requestImageWithURL:options:context:progress:completed:];
-[SDImageLoadersManager shouldBlockFailedURLWithURL:error:];
-[SDImageLoadersManager imageLoaders];
-[SDImageLoadersManager setImageLoaders:];
@end

@interface SDImagePipelineTransformer : <SDImageTransformer> {
  /* instance variables */
  @"NSArray" _transformers;
  @"NSString" _transformerKey;
}

@property (T@"NSArray",C,N,V_transformers) transformers;
@property (T@"NSString",C,N,V_transformerKey) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImagePipelineTransformer transformerWithTransformers:];
-[SDImagePipelineTransformer cacheKeyForTransformers:];

/* instance methods */
-[SDImagePipelineTransformer transformedImageWithImage:forKey:];
-[SDImagePipelineTransformer transformers];
-[SDImagePipelineTransformer setTransformers:];
-[SDImagePipelineTransformer transformerKey];
-[SDImagePipelineTransformer setTransformerKey:];
@end

@interface SDImageResizingTransformer : <SDImageTransformer> {
  /* instance variables */
  Q _scaleMode;
  {CGSize="width"d"height"d} _size;
}

@property (T{CGSize=dd},N,V_size) size;
@property (TQ,N,V_scaleMode) scaleMode;
@property (T@"NSString",R,C,N) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageResizingTransformer transformerWithSize:scaleMode:];

/* instance methods */
-[SDImageResizingTransformer transformerKey];
-[SDImageResizingTransformer transformedImageWithImage:forKey:];
-[SDImageResizingTransformer size];
-[SDImageResizingTransformer setSize:];
-[SDImageResizingTransformer scaleMode];
-[SDImageResizingTransformer setScaleMode:];
@end

@interface SDImageRotationTransformer : <SDImageTransformer> {
  /* instance variables */
  B _fitSize;
  d _angle;
}

@property (Td,N,V_angle) angle;
@property (TB,N,V_fitSize) fitSize;
@property (T@"NSString",R,C,N) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageRotationTransformer transformerWithAngle:fitSize:];

/* instance methods */
-[SDImageRotationTransformer transformerKey];
-[SDImageRotationTransformer transformedImageWithImage:forKey:];
-[SDImageRotationTransformer angle];
-[SDImageRotationTransformer setAngle:];
-[SDImageRotationTransformer fitSize];
-[SDImageRotationTransformer setFitSize:];
@end

@interface SDImageRoundCornerTransformer : <SDImageTransformer> {
  /* instance variables */
  d _cornerRadius;
  Q _corners;
  d _borderWidth;
  @"UIColor" _borderColor;
}

@property (Td,N,V_cornerRadius) cornerRadius;
@property (TQ,N,V_corners) corners;
@property (Td,N,V_borderWidth) borderWidth;
@property (T@"UIColor",&,N,V_borderColor) borderColor;
@property (T@"NSString",R,C,N) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageRoundCornerTransformer transformerWithRadius:corners:borderWidth:borderColor:];

/* instance methods */
-[SDImageRoundCornerTransformer transformerKey];
-[SDImageRoundCornerTransformer transformedImageWithImage:forKey:];
-[SDImageRoundCornerTransformer cornerRadius];
-[SDImageRoundCornerTransformer setCornerRadius:];
-[SDImageRoundCornerTransformer corners];
-[SDImageRoundCornerTransformer setCorners:];
-[SDImageRoundCornerTransformer borderWidth];
-[SDImageRoundCornerTransformer setBorderWidth:];
-[SDImageRoundCornerTransformer borderColor];
-[SDImageRoundCornerTransformer setBorderColor:];
@end

@interface SDImageTintTransformer : <SDImageTransformer> {
  /* instance variables */
  @"UIColor" _tintColor;
}

@property (T@"UIColor",&,N,V_tintColor) tintColor;
@property (T@"NSString",R,C,N) transformerKey;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDImageTintTransformer transformerWithColor:];

/* instance methods */
-[SDImageTintTransformer transformerKey];
-[SDImageTintTransformer transformedImageWithImage:forKey:];
-[SDImageTintTransformer tintColor];
-[SDImageTintTransformer setTintColor:];
@end

@interface SDMemoryCache : <SDMemoryCache> {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _weakCacheLock;
  @"SDImageCacheConfig" _config;
  @"NSMapTable" _weakCache;
}

@property (T@"SDImageCacheConfig",&,N,V_config) config;
@property (T@"NSMapTable",&,N,V_weakCache) weakCache;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[SDMemoryCache dealloc];
-[SDMemoryCache init];
-[SDMemoryCache initWithConfig:];
-[SDMemoryCache commonInit];
-[SDMemoryCache didReceiveMemoryWarning:];
-[SDMemoryCache setObject:forKey:cost:];
-[SDMemoryCache objectForKey:];
-[SDMemoryCache removeObjectForKey:];
-[SDMemoryCache removeAllObjects];
-[SDMemoryCache observeValueForKeyPath:ofObject:change:context:];
-[SDMemoryCache config];
-[SDMemoryCache setConfig:];
-[SDMemoryCache weakCache];
-[SDMemoryCache setWeakCache:];
@end

@interface SDWeakProxy :  {
  /* instance variables */
  @ _target;
}

@property (T@,R,W,N,V_target) target;

/* class methods */
-[SDWeakProxy proxyWithTarget:];

/* instance methods */
-[SDWeakProxy initWithTarget:];
-[SDWeakProxy forwardingTargetForSelector:];
-[SDWeakProxy forwardInvocation:];
-[SDWeakProxy methodSignatureForSelector:];
-[SDWeakProxy respondsToSelector:];
-[SDWeakProxy isEqual:];
-[SDWeakProxy hash];
-[SDWeakProxy superclass];
-[SDWeakProxy class];
-[SDWeakProxy isKindOfClass:];
-[SDWeakProxy isMemberOfClass:];
-[SDWeakProxy conformsToProtocol:];
-[SDWeakProxy isProxy];
-[SDWeakProxy description];
-[SDWeakProxy debugDescription];
-[SDWeakProxy target];
@end

@interface SDWebImageActivityIndicator : <SDWebImageIndicator> {
  /* instance variables */
  @"UIActivityIndicatorView" _indicatorView;
}

@property (T@"UIActivityIndicatorView",&,N,V_indicatorView) indicatorView;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageActivityIndicator grayIndicator];
-[SDWebImageActivityIndicator grayLargeIndicator];
-[SDWebImageActivityIndicator whiteIndicator];
-[SDWebImageActivityIndicator whiteLargeIndicator];
-[SDWebImageActivityIndicator largeIndicator];
-[SDWebImageActivityIndicator mediumIndicator];

/* instance methods */
-[SDWebImageActivityIndicator init];
-[SDWebImageActivityIndicator commonInit];
-[SDWebImageActivityIndicator startAnimatingIndicator];
-[SDWebImageActivityIndicator stopAnimatingIndicator];
-[SDWebImageActivityIndicator indicatorView];
-[SDWebImageActivityIndicator setIndicatorView:];
@end

@interface SDWebImageCacheKeyFilter : <SDWebImageCacheKeyFilter> {
  /* instance variables */
  @? _block;
}

@property (T@?,C,N,V_block) block;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageCacheKeyFilter cacheKeyFilterWithBlock:];

/* instance methods */
-[SDWebImageCacheKeyFilter initWithBlock:];
-[SDWebImageCacheKeyFilter cacheKeyForURL:];
-[SDWebImageCacheKeyFilter block];
-[SDWebImageCacheKeyFilter setBlock:];
@end

@interface SDWebImageCacheSerializer : <SDWebImageCacheSerializer> {
  /* instance variables */
  @? _block;
}

@property (T@?,C,N,V_block) block;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageCacheSerializer cacheSerializerWithBlock:];

/* instance methods */
-[SDWebImageCacheSerializer initWithBlock:];
-[SDWebImageCacheSerializer cacheDataWithImage:originalData:imageURL:];
-[SDWebImageCacheSerializer block];
-[SDWebImageCacheSerializer setBlock:];
@end

@interface SDWebImageCombinedOperation : <SDWebImageOperation> {
  /* instance variables */
  B _cancelled;
  @"<SDWebImageOperation>" _cacheOperation;
  @"<SDWebImageOperation>" _loaderOperation;
  @"SDWebImageManager" _manager;
}

@property (TB,N,GisCancelled,V_cancelled) cancelled;
@property (T@"<SDWebImageOperation>",&,N,V_loaderOperation) loaderOperation;
@property (T@"<SDWebImageOperation>",&,N,V_cacheOperation) cacheOperation;
@property (T@"SDWebImageManager",W,N,V_manager) manager;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[SDWebImageCombinedOperation cancel];
-[SDWebImageCombinedOperation cacheOperation];
-[SDWebImageCombinedOperation setCacheOperation:];
-[SDWebImageCombinedOperation loaderOperation];
-[SDWebImageCombinedOperation setLoaderOperation:];
-[SDWebImageCombinedOperation isCancelled];
-[SDWebImageCombinedOperation setCancelled:];
-[SDWebImageCombinedOperation manager];
-[SDWebImageCombinedOperation setManager:];
@end

@interface SDWebImageDownloadToken : <SDWebImageOperation> {
  /* instance variables */
  B _cancelled;
  @"NSURL" _url;
  @"NSURLRequest" _request;
  @"NSURLResponse" _response;
  @"NSURLSessionTaskMetrics" _metrics;
  @ _downloadOperationCancelToken;
  @"NSOperation<SDWebImageDownloaderOperation>" _downloadOperation;
}

@property (T@"NSURL",&,N,V_url) url;
@property (T@"NSURLRequest",&,N,V_request) request;
@property (T@"NSURLResponse",&,N,V_response) response;
@property (T@"NSURLSessionTaskMetrics",&,N,V_metrics) metrics;
@property (T@,W,N,V_downloadOperationCancelToken) downloadOperationCancelToken;
@property (T@"NSOperation<SDWebImageDownloaderOperation>",W,N,V_downloadOperation) downloadOperation;
@property (TB,N,GisCancelled,V_cancelled) cancelled;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[SDWebImageDownloadToken dealloc];
-[SDWebImageDownloadToken initWithDownloadOperation:];
-[SDWebImageDownloadToken downloadDidReceiveResponse:];
-[SDWebImageDownloadToken downloadDidStop:];
-[SDWebImageDownloadToken cancel];
-[SDWebImageDownloadToken url];
-[SDWebImageDownloadToken setUrl:];
-[SDWebImageDownloadToken request];
-[SDWebImageDownloadToken setRequest:];
-[SDWebImageDownloadToken response];
-[SDWebImageDownloadToken setResponse:];
-[SDWebImageDownloadToken metrics];
-[SDWebImageDownloadToken setMetrics:];
-[SDWebImageDownloadToken downloadOperationCancelToken];
-[SDWebImageDownloadToken setDownloadOperationCancelToken:];
-[SDWebImageDownloadToken downloadOperation];
-[SDWebImageDownloadToken setDownloadOperation:];
-[SDWebImageDownloadToken isCancelled];
-[SDWebImageDownloadToken setCancelled:];
@end

@interface SDWebImageDownloader : <SDImageLoader, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _HTTPHeadersLock;
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _operationsLock;
  @"SDWebImageDownloaderConfig" _config;
  @"<SDWebImageDownloaderRequestModifier>" _requestModifier;
  @"<SDWebImageDownloaderResponseModifier>" _responseModifier;
  @"<SDWebImageDownloaderDecryptor>" _decryptor;
  @"NSOperationQueue" _downloadQueue;
  @"NSMutableDictionary" _URLOperations;
  @"NSMutableDictionary" _HTTPHeaders;
  @"NSURLSession" _session;
}

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;
@property (T@"NSOperationQueue",&,N,V_downloadQueue) downloadQueue;
@property (T@"NSMutableDictionary",&,N,V_URLOperations) URLOperations;
@property (T@"NSMutableDictionary",&,N,V_HTTPHeaders) HTTPHeaders;
@property (T@"NSURLSession",&,N,V_session) session;
@property (T@"SDWebImageDownloaderConfig",R,C,N,V_config) config;
@property (T@"<SDWebImageDownloaderRequestModifier>",&,N,V_requestModifier) requestModifier;
@property (T@"<SDWebImageDownloaderResponseModifier>",&,N,V_responseModifier) responseModifier;
@property (T@"<SDWebImageDownloaderDecryptor>",&,N,V_decryptor) decryptor;
@property (T@"NSURLSessionConfiguration",R,N) sessionConfiguration;
@property (TB,N,GisSuspended) suspended;
@property (TQ,R,N) currentDownloadCount;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageDownloader initialize];
-[SDWebImageDownloader sharedDownloader];

/* instance methods */
-[SDWebImageDownloader canRequestImageForURL:];
-[SDWebImageDownloader canRequestImageForURL:options:context:];
-[SDWebImageDownloader requestImageWithURL:options:context:progress:completed:];
-[SDWebImageDownloader shouldBlockFailedURLWithURL:error:];
-[SDWebImageDownloader shouldBlockFailedURLWithURL:error:options:context:];
-[SDWebImageDownloader init];
-[SDWebImageDownloader initWithConfig:];
-[SDWebImageDownloader dealloc];
-[SDWebImageDownloader invalidateSessionAndCancel:];
-[SDWebImageDownloader setValue:forHTTPHeaderField:];
-[SDWebImageDownloader valueForHTTPHeaderField:];
-[SDWebImageDownloader downloadImageWithURL:completed:];
-[SDWebImageDownloader downloadImageWithURL:options:progress:completed:];
-[SDWebImageDownloader downloadImageWithURL:options:context:progress:completed:];
-[SDWebImageDownloader createDownloaderOperationWithUrl:options:context:];
-[SDWebImageDownloader cancelAllDownloads];
-[SDWebImageDownloader isSuspended];
-[SDWebImageDownloader setSuspended:];
-[SDWebImageDownloader currentDownloadCount];
-[SDWebImageDownloader sessionConfiguration];
-[SDWebImageDownloader observeValueForKeyPath:ofObject:change:context:];
-[SDWebImageDownloader operationWithTask:];
-[SDWebImageDownloader URLSession:dataTask:didReceiveResponse:completionHandler:];
-[SDWebImageDownloader URLSession:dataTask:didReceiveData:];
-[SDWebImageDownloader URLSession:dataTask:willCacheResponse:completionHandler:];
-[SDWebImageDownloader URLSession:task:didCompleteWithError:];
-[SDWebImageDownloader URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:];
-[SDWebImageDownloader URLSession:task:didReceiveChallenge:completionHandler:];
-[SDWebImageDownloader URLSession:task:didFinishCollectingMetrics:];
-[SDWebImageDownloader config];
-[SDWebImageDownloader requestModifier];
-[SDWebImageDownloader setRequestModifier:];
-[SDWebImageDownloader responseModifier];
-[SDWebImageDownloader setResponseModifier:];
-[SDWebImageDownloader decryptor];
-[SDWebImageDownloader setDecryptor:];
-[SDWebImageDownloader downloadQueue];
-[SDWebImageDownloader setDownloadQueue:];
-[SDWebImageDownloader URLOperations];
-[SDWebImageDownloader setURLOperations:];
-[SDWebImageDownloader HTTPHeaders];
-[SDWebImageDownloader setHTTPHeaders:];
-[SDWebImageDownloader session];
-[SDWebImageDownloader setSession:];
@end

@interface SDWebImageDownloaderConfig : <NSCopying> {
  /* instance variables */
  q _maxConcurrentDownloads;
  d _downloadTimeout;
  d _minimumProgressInterval;
  @"NSURLSessionConfiguration" _sessionConfiguration;
  # _operationClass;
  q _executionOrder;
  @"NSURLCredential" _urlCredential;
  @"NSString" _username;
  @"NSString" _password;
}

@property (Tq,N,V_maxConcurrentDownloads) maxConcurrentDownloads;
@property (Td,N,V_downloadTimeout) downloadTimeout;
@property (Td,N,V_minimumProgressInterval) minimumProgressInterval;
@property (T@"NSURLSessionConfiguration",&,N,V_sessionConfiguration) sessionConfiguration;
@property (T#,N,V_operationClass) operationClass;
@property (Tq,N,V_executionOrder) executionOrder;
@property (T@"NSURLCredential",C,N,V_urlCredential) urlCredential;
@property (T@"NSString",C,N,V_username) username;
@property (T@"NSString",C,N,V_password) password;

/* class methods */
-[SDWebImageDownloaderConfig defaultDownloaderConfig];

/* instance methods */
-[SDWebImageDownloaderConfig init];
-[SDWebImageDownloaderConfig copyWithZone:];
-[SDWebImageDownloaderConfig maxConcurrentDownloads];
-[SDWebImageDownloaderConfig setMaxConcurrentDownloads:];
-[SDWebImageDownloaderConfig downloadTimeout];
-[SDWebImageDownloaderConfig setDownloadTimeout:];
-[SDWebImageDownloaderConfig minimumProgressInterval];
-[SDWebImageDownloaderConfig setMinimumProgressInterval:];
-[SDWebImageDownloaderConfig sessionConfiguration];
-[SDWebImageDownloaderConfig setSessionConfiguration:];
-[SDWebImageDownloaderConfig operationClass];
-[SDWebImageDownloaderConfig setOperationClass:];
-[SDWebImageDownloaderConfig executionOrder];
-[SDWebImageDownloaderConfig setExecutionOrder:];
-[SDWebImageDownloaderConfig urlCredential];
-[SDWebImageDownloaderConfig setUrlCredential:];
-[SDWebImageDownloaderConfig username];
-[SDWebImageDownloaderConfig setUsername:];
-[SDWebImageDownloaderConfig password];
-[SDWebImageDownloaderConfig setPassword:];
@end

@interface SDWebImageDownloaderDecryptor : <SDWebImageDownloaderDecryptor> {
  /* instance variables */
  @? _block;
}

@property (T@?,C,N,V_block) block;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageDownloaderDecryptor base64Decryptor];
-[SDWebImageDownloaderDecryptor decryptorWithBlock:];

/* instance methods */
-[SDWebImageDownloaderDecryptor initWithBlock:];
-[SDWebImageDownloaderDecryptor decryptedDataWithData:response:];
-[SDWebImageDownloaderDecryptor block];
-[SDWebImageDownloaderDecryptor setBlock:];
@end

@interface SDWebImageDownloaderOperation : <SDWebImageDownloaderOperation> {
  /* instance variables */
  B _executing;
  B _finished;
  @"NSURLRequest" _request;
  @"NSURLResponse" _response;
  @"NSURLSessionTask" _dataTask;
  @"NSURLSessionTaskMetrics" _metrics;
  @"NSURLCredential" _credential;
  d _minimumProgressInterval;
  Q _options;
  @"NSDictionary" _context;
  @"NSMutableArray" _callbackBlocks;
  @"NSMutableData" _imageData;
  @"NSData" _cachedData;
  Q _expectedSize;
  Q _receivedSize;
  @"NSError" _responseError;
  d _previousProgress;
  @"<SDWebImageDownloaderResponseModifier>" _responseModifier;
  @"<SDWebImageDownloaderDecryptor>" _decryptor;
  @"NSURLSession" _unownedSession;
  @"NSURLSession" _ownedSession;
  @"NSOperationQueue" _coderQueue;
  Q _backgroundTaskId;
}

@property (T@"NSMutableArray",&,N,V_callbackBlocks) callbackBlocks;
@property (TQ,N,V_options) options;
@property (T@"NSDictionary",C,N,V_context) context;
@property (TB,N,GisExecuting,V_executing) executing;
@property (TB,N,GisFinished,V_finished) finished;
@property (T@"NSMutableData",&,N,V_imageData) imageData;
@property (T@"NSData",C,N,V_cachedData) cachedData;
@property (TQ,N,V_expectedSize) expectedSize;
@property (TQ,N,V_receivedSize) receivedSize;
@property (T@"NSURLResponse",&,N,V_response) response;
@property (T@"NSError",&,N,V_responseError) responseError;
@property (Td,N,V_previousProgress) previousProgress;
@property (T@"<SDWebImageDownloaderResponseModifier>",&,N,V_responseModifier) responseModifier;
@property (T@"<SDWebImageDownloaderDecryptor>",&,N,V_decryptor) decryptor;
@property (T@"NSURLSession",W,N,V_unownedSession) unownedSession;
@property (T@"NSURLSession",&,N,V_ownedSession) ownedSession;
@property (T@"NSURLSessionTask",&,N,V_dataTask) dataTask;
@property (T@"NSURLSessionTaskMetrics",&,N,V_metrics) metrics;
@property (T@"NSOperationQueue",&,N,V_coderQueue) coderQueue;
@property (TQ,N,V_backgroundTaskId) backgroundTaskId;
@property (T@"NSURLRequest",R,N,V_request) request;
@property (T@"NSURLCredential",&,N,V_credential) credential;
@property (Td,N,V_minimumProgressInterval) minimumProgressInterval;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageDownloaderOperation imageOptionsFromDownloaderOptions:];

/* instance methods */
-[SDWebImageDownloaderOperation init];
-[SDWebImageDownloaderOperation initWithRequest:inSession:options:];
-[SDWebImageDownloaderOperation initWithRequest:inSession:options:context:];
-[SDWebImageDownloaderOperation addHandlersForProgress:completed:];
-[SDWebImageDownloaderOperation callbacksForKey:];
-[SDWebImageDownloaderOperation cancel:];
-[SDWebImageDownloaderOperation start];
-[SDWebImageDownloaderOperation cancel];
-[SDWebImageDownloaderOperation cancelInternal];
-[SDWebImageDownloaderOperation done];
-[SDWebImageDownloaderOperation reset];
-[SDWebImageDownloaderOperation setFinished:];
-[SDWebImageDownloaderOperation setExecuting:];
-[SDWebImageDownloaderOperation isConcurrent];
-[SDWebImageDownloaderOperation URLSession:dataTask:didReceiveResponse:completionHandler:];
-[SDWebImageDownloaderOperation URLSession:dataTask:didReceiveData:];
-[SDWebImageDownloaderOperation URLSession:dataTask:willCacheResponse:completionHandler:];
-[SDWebImageDownloaderOperation URLSession:task:didCompleteWithError:];
-[SDWebImageDownloaderOperation URLSession:task:didReceiveChallenge:completionHandler:];
-[SDWebImageDownloaderOperation URLSession:task:didFinishCollectingMetrics:];
-[SDWebImageDownloaderOperation shouldContinueWhenAppEntersBackground];
-[SDWebImageDownloaderOperation callCompletionBlocksWithError:];
-[SDWebImageDownloaderOperation callCompletionBlocksWithImage:imageData:error:finished:];
-[SDWebImageDownloaderOperation isExecuting];
-[SDWebImageDownloaderOperation isFinished];
-[SDWebImageDownloaderOperation request];
-[SDWebImageDownloaderOperation response];
-[SDWebImageDownloaderOperation setResponse:];
-[SDWebImageDownloaderOperation dataTask];
-[SDWebImageDownloaderOperation setDataTask:];
-[SDWebImageDownloaderOperation metrics];
-[SDWebImageDownloaderOperation setMetrics:];
-[SDWebImageDownloaderOperation credential];
-[SDWebImageDownloaderOperation setCredential:];
-[SDWebImageDownloaderOperation minimumProgressInterval];
-[SDWebImageDownloaderOperation setMinimumProgressInterval:];
-[SDWebImageDownloaderOperation options];
-[SDWebImageDownloaderOperation setOptions:];
-[SDWebImageDownloaderOperation context];
-[SDWebImageDownloaderOperation setContext:];
-[SDWebImageDownloaderOperation callbackBlocks];
-[SDWebImageDownloaderOperation setCallbackBlocks:];
-[SDWebImageDownloaderOperation imageData];
-[SDWebImageDownloaderOperation setImageData:];
-[SDWebImageDownloaderOperation cachedData];
-[SDWebImageDownloaderOperation setCachedData:];
-[SDWebImageDownloaderOperation expectedSize];
-[SDWebImageDownloaderOperation setExpectedSize:];
-[SDWebImageDownloaderOperation receivedSize];
-[SDWebImageDownloaderOperation setReceivedSize:];
-[SDWebImageDownloaderOperation responseError];
-[SDWebImageDownloaderOperation setResponseError:];
-[SDWebImageDownloaderOperation previousProgress];
-[SDWebImageDownloaderOperation setPreviousProgress:];
-[SDWebImageDownloaderOperation responseModifier];
-[SDWebImageDownloaderOperation setResponseModifier:];
-[SDWebImageDownloaderOperation decryptor];
-[SDWebImageDownloaderOperation setDecryptor:];
-[SDWebImageDownloaderOperation unownedSession];
-[SDWebImageDownloaderOperation setUnownedSession:];
-[SDWebImageDownloaderOperation ownedSession];
-[SDWebImageDownloaderOperation setOwnedSession:];
-[SDWebImageDownloaderOperation coderQueue];
-[SDWebImageDownloaderOperation setCoderQueue:];
-[SDWebImageDownloaderOperation backgroundTaskId];
-[SDWebImageDownloaderOperation setBackgroundTaskId:];
@end

@interface SDWebImageDownloaderRequestModifier : <SDWebImageDownloaderRequestModifier> {
  /* instance variables */
  @? _block;
}

@property (T@?,C,N,V_block) block;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageDownloaderRequestModifier requestModifierWithBlock:];

/* instance methods */
-[SDWebImageDownloaderRequestModifier initWithMethod:];
-[SDWebImageDownloaderRequestModifier initWithHeaders:];
-[SDWebImageDownloaderRequestModifier initWithBody:];
-[SDWebImageDownloaderRequestModifier initWithMethod:headers:body:];
-[SDWebImageDownloaderRequestModifier initWithBlock:];
-[SDWebImageDownloaderRequestModifier modifiedRequestWithRequest:];
-[SDWebImageDownloaderRequestModifier block];
-[SDWebImageDownloaderRequestModifier setBlock:];
@end

@interface SDWebImageDownloaderResponseModifier : <SDWebImageDownloaderResponseModifier> {
  /* instance variables */
  @? _block;
}

@property (T@?,C,N,V_block) block;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageDownloaderResponseModifier responseModifierWithBlock:];

/* instance methods */
-[SDWebImageDownloaderResponseModifier initWithStatusCode:];
-[SDWebImageDownloaderResponseModifier initWithVersion:];
-[SDWebImageDownloaderResponseModifier initWithHeaders:];
-[SDWebImageDownloaderResponseModifier initWithStatusCode:version:headers:];
-[SDWebImageDownloaderResponseModifier initWithBlock:];
-[SDWebImageDownloaderResponseModifier modifiedResponseWithResponse:];
-[SDWebImageDownloaderResponseModifier block];
-[SDWebImageDownloaderResponseModifier setBlock:];
@end

@interface SDWebImageManager :  {
  /* instance variables */
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _failedURLsLock;
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _runningOperationsLock;
  @"<SDWebImageManagerDelegate>" _delegate;
  @"SDImageCache" _imageCache;
  @"<SDImageLoader>" _imageLoader;
  @"<SDImageTransformer>" _transformer;
  @"<SDWebImageCacheKeyFilter>" _cacheKeyFilter;
  @"<SDWebImageCacheSerializer>" _cacheSerializer;
  @"<SDWebImageOptionsProcessor>" _optionsProcessor;
  @"NSMutableSet" _failedURLs;
  @"NSMutableSet" _runningOperations;
}

@property (T@"SDImageCache",&,N,V_imageCache) imageCache;
@property (T@"<SDImageLoader>",&,N,V_imageLoader) imageLoader;
@property (T@"NSMutableSet",&,N,V_failedURLs) failedURLs;
@property (T@"NSMutableSet",&,N,V_runningOperations) runningOperations;
@property (T@"<SDWebImageManagerDelegate>",W,N,V_delegate) delegate;
@property (T@"<SDImageTransformer>",&,N,V_transformer) transformer;
@property (T@"<SDWebImageCacheKeyFilter>",&,N,V_cacheKeyFilter) cacheKeyFilter;
@property (T@"<SDWebImageCacheSerializer>",&,N,V_cacheSerializer) cacheSerializer;
@property (T@"<SDWebImageOptionsProcessor>",&,N,V_optionsProcessor) optionsProcessor;
@property (TB,R,N,GisRunning) running;

/* class methods */
-[SDWebImageManager defaultImageCache];
-[SDWebImageManager setDefaultImageCache:];
-[SDWebImageManager defaultImageLoader];
-[SDWebImageManager setDefaultImageLoader:];
-[SDWebImageManager sharedManager];

/* instance methods */
-[SDWebImageManager init];
-[SDWebImageManager initWithCache:loader:];
-[SDWebImageManager cacheKeyForURL:];
-[SDWebImageManager cacheKeyForURL:context:];
-[SDWebImageManager loadImageWithURL:options:progress:completed:];
-[SDWebImageManager loadImageWithURL:options:context:progress:completed:];
-[SDWebImageManager cancelAll];
-[SDWebImageManager isRunning];
-[SDWebImageManager removeFailedURL:];
-[SDWebImageManager removeAllFailedURLs];
-[SDWebImageManager callCacheProcessForOperation:url:options:context:progress:completed:];
-[SDWebImageManager callOriginalCacheProcessForOperation:url:options:context:progress:completed:];
-[SDWebImageManager callDownloadProcessForOperation:url:options:context:cachedImage:cachedData:cacheType:progress:completed:];
-[SDWebImageManager callStoreCacheProcessForOperation:url:options:context:downloadedImage:downloadedData:finished:progress:completed:];
-[SDWebImageManager callTransformProcessForOperation:url:options:context:originalImage:originalData:finished:progress:completed:];
-[SDWebImageManager safelyRemoveOperationFromRunning:];
-[SDWebImageManager storeImage:imageData:forKey:cacheType:options:context:completion:];
-[SDWebImageManager callCompletionBlockForOperation:completion:error:url:];
-[SDWebImageManager callCompletionBlockForOperation:completion:image:data:error:cacheType:finished:url:];
-[SDWebImageManager shouldBlockFailedURLWithURL:error:options:context:];
-[SDWebImageManager processedResultForURL:options:context:];
-[SDWebImageManager delegate];
-[SDWebImageManager setDelegate:];
-[SDWebImageManager imageCache];
-[SDWebImageManager setImageCache:];
-[SDWebImageManager imageLoader];
-[SDWebImageManager setImageLoader:];
-[SDWebImageManager transformer];
-[SDWebImageManager setTransformer:];
-[SDWebImageManager cacheKeyFilter];
-[SDWebImageManager setCacheKeyFilter:];
-[SDWebImageManager cacheSerializer];
-[SDWebImageManager setCacheSerializer:];
-[SDWebImageManager optionsProcessor];
-[SDWebImageManager setOptionsProcessor:];
-[SDWebImageManager failedURLs];
-[SDWebImageManager setFailedURLs:];
-[SDWebImageManager runningOperations];
-[SDWebImageManager setRunningOperations:];
@end

@interface SDWebImageOptionsProcessor : <SDWebImageOptionsProcessor> {
  /* instance variables */
  @? _block;
}

@property (T@?,C,N,V_block) block;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageOptionsProcessor optionsProcessorWithBlock:];

/* instance methods */
-[SDWebImageOptionsProcessor initWithBlock:];
-[SDWebImageOptionsProcessor processedResultForURL:options:context:];
-[SDWebImageOptionsProcessor block];
-[SDWebImageOptionsProcessor setBlock:];
@end

@interface SDWebImageOptionsResult :  {
  /* instance variables */
  Q _options;
  @"NSDictionary" _context;
}

@property (TQ,N,V_options) options;
@property (T@"NSDictionary",C,N,V_context) context;

/* instance methods */
-[SDWebImageOptionsResult initWithOptions:context:];
-[SDWebImageOptionsResult options];
-[SDWebImageOptionsResult setOptions:];
-[SDWebImageOptionsResult context];
-[SDWebImageOptionsResult setContext:];
@end

@interface SDWebImagePrefetchToken : <SDWebImageOperation> {
  /* instance variables */
  AQ _skippedCount;
  AQ _finishedCount;
  {atomic_flag="_Value"AB} _isAllFinished;
  Q _totalCount;
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _prefetchOperationsLock;
  {os_unfair_lock_s="_os_unfair_lock_opaque"I} _loadOperationsLock;
  @"NSArray" _urls;
  @"NSPointerArray" _loadOperations;
  @"NSPointerArray" _prefetchOperations;
  @"SDWebImagePrefetcher" _prefetcher;
  @? _completionBlock;
  @? _progressBlock;
}

@property (T@"NSArray",C,N,V_urls) urls;
@property (T@"NSPointerArray",&,N,V_loadOperations) loadOperations;
@property (T@"NSPointerArray",&,N,V_prefetchOperations) prefetchOperations;
@property (T@"SDWebImagePrefetcher",W,N,V_prefetcher) prefetcher;
@property (T@?,C,N,V_completionBlock) completionBlock;
@property (T@?,C,N,V_progressBlock) progressBlock;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[SDWebImagePrefetchToken init];
-[SDWebImagePrefetchToken cancel];
-[SDWebImagePrefetchToken urls];
-[SDWebImagePrefetchToken setUrls:];
-[SDWebImagePrefetchToken loadOperations];
-[SDWebImagePrefetchToken setLoadOperations:];
-[SDWebImagePrefetchToken prefetchOperations];
-[SDWebImagePrefetchToken setPrefetchOperations:];
-[SDWebImagePrefetchToken prefetcher];
-[SDWebImagePrefetchToken setPrefetcher:];
-[SDWebImagePrefetchToken completionBlock];
-[SDWebImagePrefetchToken setCompletionBlock:];
-[SDWebImagePrefetchToken progressBlock];
-[SDWebImagePrefetchToken setProgressBlock:];
@end

@interface SDWebImagePrefetcher :  {
  /* instance variables */
  @"SDWebImageManager" _manager;
  Q _options;
  @"NSDictionary" _context;
  @"NSObject<OS_dispatch_queue>" _delegateQueue;
  @"<SDWebImagePrefetcherDelegate>" _delegate;
  @"NSMutableSet" _runningTokens;
  @"NSOperationQueue" _prefetchQueue;
}

@property (T@"SDWebImageManager",&,N,V_manager) manager;
@property (T@"NSMutableSet",&,V_runningTokens) runningTokens;
@property (T@"NSOperationQueue",&,N,V_prefetchQueue) prefetchQueue;
@property (TQ,N) maxConcurrentPrefetchCount;
@property (TQ,N,V_options) options;
@property (T@"NSDictionary",C,N,V_context) context;
@property (T@"NSObject<OS_dispatch_queue>",&,N,V_delegateQueue) delegateQueue;
@property (T@"<SDWebImagePrefetcherDelegate>",W,N,V_delegate) delegate;

/* class methods */
-[SDWebImagePrefetcher sharedImagePrefetcher];

/* instance methods */
-[SDWebImagePrefetcher init];
-[SDWebImagePrefetcher initWithImageManager:];
-[SDWebImagePrefetcher setMaxConcurrentPrefetchCount:];
-[SDWebImagePrefetcher maxConcurrentPrefetchCount];
-[SDWebImagePrefetcher prefetchURLs:];
-[SDWebImagePrefetcher prefetchURLs:progress:completed:];
-[SDWebImagePrefetcher startPrefetchWithToken:];
-[SDWebImagePrefetcher cancelPrefetching];
-[SDWebImagePrefetcher callProgressBlockForToken:imageURL:];
-[SDWebImagePrefetcher callCompletionBlockForToken:];
-[SDWebImagePrefetcher tokenTotalCount];
-[SDWebImagePrefetcher tokenSkippedCount];
-[SDWebImagePrefetcher tokenFinishedCount];
-[SDWebImagePrefetcher addRunningToken:];
-[SDWebImagePrefetcher removeRunningToken:];
-[SDWebImagePrefetcher countOfRunningTokens];
-[SDWebImagePrefetcher manager];
-[SDWebImagePrefetcher setManager:];
-[SDWebImagePrefetcher options];
-[SDWebImagePrefetcher setOptions:];
-[SDWebImagePrefetcher context];
-[SDWebImagePrefetcher setContext:];
-[SDWebImagePrefetcher delegateQueue];
-[SDWebImagePrefetcher setDelegateQueue:];
-[SDWebImagePrefetcher delegate];
-[SDWebImagePrefetcher setDelegate:];
-[SDWebImagePrefetcher runningTokens];
-[SDWebImagePrefetcher setRunningTokens:];
-[SDWebImagePrefetcher prefetchQueue];
-[SDWebImagePrefetcher setPrefetchQueue:];
@end

@interface SDWebImageProgressIndicator : <SDWebImageIndicator> {
  /* instance variables */
  @"UIProgressView" _indicatorView;
}

@property (T@"UIProgressView",&,N,V_indicatorView) indicatorView;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[SDWebImageProgressIndicator defaultIndicator];
-[SDWebImageProgressIndicator barIndicator];

/* instance methods */
-[SDWebImageProgressIndicator init];
-[SDWebImageProgressIndicator commonInit];
-[SDWebImageProgressIndicator startAnimatingIndicator];
-[SDWebImageProgressIndicator stopAnimatingIndicator];
-[SDWebImageProgressIndicator updateIndicatorProgress:];
-[SDWebImageProgressIndicator indicatorView];
-[SDWebImageProgressIndicator setIndicatorView:];
@end

@interface SDWebImageTransition :  {
  /* instance variables */
  B _avoidAutoSetImage;
  d _duration;
  @"CAMediaTimingFunction" _timingFunction;
  Q _animationOptions;
  @? _prepares;
  @? _animations;
  @? _completion;
}

@property (TB,N,V_avoidAutoSetImage) avoidAutoSetImage;
@property (Td,N,V_duration) duration;
@property (T@"CAMediaTimingFunction",&,N,V_timingFunction) timingFunction;
@property (TQ,N,V_animationOptions) animationOptions;
@property (T@?,C,N,V_prepares) prepares;
@property (T@?,C,N,V_animations) animations;
@property (T@?,C,N,V_completion) completion;

/* class methods */
-[SDWebImageTransition fadeTransition];
-[SDWebImageTransition fadeTransitionWithDuration:];
-[SDWebImageTransition flipFromLeftTransition];
-[SDWebImageTransition flipFromLeftTransitionWithDuration:];
-[SDWebImageTransition flipFromRightTransition];
-[SDWebImageTransition flipFromRightTransitionWithDuration:];
-[SDWebImageTransition flipFromTopTransition];
-[SDWebImageTransition flipFromTopTransitionWithDuration:];
-[SDWebImageTransition flipFromBottomTransition];
-[SDWebImageTransition flipFromBottomTransitionWithDuration:];
-[SDWebImageTransition curlUpTransition];
-[SDWebImageTransition curlUpTransitionWithDuration:];
-[SDWebImageTransition curlDownTransition];
-[SDWebImageTransition curlDownTransitionWithDuration:];

/* instance methods */
-[SDWebImageTransition init];
-[SDWebImageTransition avoidAutoSetImage];
-[SDWebImageTransition setAvoidAutoSetImage:];
-[SDWebImageTransition duration];
-[SDWebImageTransition setDuration:];
-[SDWebImageTransition timingFunction];
-[SDWebImageTransition setTimingFunction:];
-[SDWebImageTransition animationOptions];
-[SDWebImageTransition setAnimationOptions:];
-[SDWebImageTransition prepares];
-[SDWebImageTransition setPrepares:];
-[SDWebImageTransition animations];
-[SDWebImageTransition setAnimations:];
-[SDWebImageTransition completion];
-[SDWebImageTransition setCompletion:];
@end

@interface SSBouncyButton :  {
  /* instance variables */
  B _isShrinking;
  B _isShrinked;
  B _touchEnded;
  d _cornerRadius;
  @"NSTimer" _touchDelayTimer;
}

@property (T@"NSTimer",&,N,V_touchDelayTimer) touchDelayTimer;
@property (TB,N,V_isShrinking) isShrinking;
@property (TB,N,V_isShrinked) isShrinked;
@property (TB,N,V_touchEnded) touchEnded;
@property (Td,N,V_cornerRadius) cornerRadius;

/* instance methods */
-[SSBouncyButton init];
-[SSBouncyButton initWithCoder:];
-[SSBouncyButton initWithFrame:];
-[SSBouncyButton setTintColor:];
-[SSBouncyButton setCornerRadius:];
-[SSBouncyButton setTitle:forState:];
-[SSBouncyButton updateBackgroundImage];
-[SSBouncyButton touchesBegan:withEvent:];
-[SSBouncyButton touchesEnded:withEvent:];
-[SSBouncyButton touchesCancelled:withEvent:];
-[SSBouncyButton beginShrinkAnimation];
-[SSBouncyButton beginEnlargeAnimation];
-[SSBouncyButton cornerRadius];
-[SSBouncyButton touchDelayTimer];
-[SSBouncyButton setTouchDelayTimer:];
-[SSBouncyButton isShrinking];
-[SSBouncyButton setIsShrinking:];
-[SSBouncyButton isShrinked];
-[SSBouncyButton setIsShrinked:];
-[SSBouncyButton touchEnded];
-[SSBouncyButton setTouchEnded:];
@end

@interface STPopupContainerViewController : 
/* instance methods */
-[STPopupContainerViewController preferredStatusBarStyle];
-[STPopupContainerViewController childViewControllerForStatusBarHidden];
-[STPopupContainerViewController childViewControllerForStatusBarStyle];
-[STPopupContainerViewController showViewController:sender:];
-[STPopupContainerViewController showDetailViewController:sender:];
@end

@interface STPopupController : <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, STPopupNavigationTouchEventDelegate> {
  /* instance variables */
  @"STPopupContainerViewController" _containerViewController;
  @"NSMutableArray" _viewControllers;
  @"UIView" _contentView;
  @"UILabel" _defaultTitleLabel;
  @"STPopupLeftBarItem" _defaultLeftBarItem;
  @"NSDictionary" _keyboardInfo;
  B _didOverrideSafeAreaInsets;
  B _observing;
  @"STPopupControllerTransitioningSlideVertical" _transitioningSlideVertical;
  @"STPopupControllerTransitioningFade" _transitioningFade;
  B _navigationBarHidden;
  B _hidesCloseButton;
  Q _style;
  Q _transitionStyle;
  @"<STPopupControllerTransitioning>" _transitioning;
  d _cornerRadius;
  @"STPopupNavigationBar" _navigationBar;
  @"UIView" _backgroundView;
  @"UIView" _containerView;
  {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _safeAreaInsets;
}

@property (TQ,N,V_style) style;
@property (TQ,N,V_transitionStyle) transitionStyle;
@property (T@"<STPopupControllerTransitioning>",W,N,V_transitioning) transitioning;
@property (Td,N,V_cornerRadius) cornerRadius;
@property (TB,N,V_navigationBarHidden) navigationBarHidden;
@property (TB,N,V_hidesCloseButton) hidesCloseButton;
@property (T{UIEdgeInsets=dddd},N,V_safeAreaInsets) safeAreaInsets;
@property (T@"STPopupNavigationBar",R,N,V_navigationBar) navigationBar;
@property (T@"UIView",&,N,V_backgroundView) backgroundView;
@property (T@"UIView",R,N,V_containerView) containerView;
@property (T@"UIViewController",R,N) topViewController;
@property (TB,R,N) presented;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[STPopupController load];

/* instance methods */
-[STPopupController init];
-[STPopupController initWithRootViewController:];
-[STPopupController dealloc];
-[STPopupController topViewController];
-[STPopupController presented];
-[STPopupController setBackgroundView:];
-[STPopupController setHidesCloseButton:];
-[STPopupController setSafeAreaInsets:];
-[STPopupController setupObservers];
-[STPopupController destroyObservers];
-[STPopupController setupObserversForViewController:];
-[STPopupController destroyObserversOfViewController:];
-[STPopupController observeValueForKeyPath:ofObject:change:context:];
-[STPopupController presentInViewController:];
-[STPopupController presentInViewController:completion:];
-[STPopupController dismiss];
-[STPopupController dismissWithCompletion:];
-[STPopupController pushViewController:animated:];
-[STPopupController popViewControllerAnimated:];
-[STPopupController popToRootViewControllerAnimated:];
-[STPopupController transitFromViewController:toViewController:animated:];
-[STPopupController updateNavigationBarAnimated:];
-[STPopupController setNavigationBarHidden:];
-[STPopupController setNavigationBarHidden:animated:];
-[STPopupController layoutContainerView];
-[STPopupController contentSizeOfTopView];
-[STPopupController preferredNavigationBarHeight];
-[STPopupController setup];
-[STPopupController setupBackgroundView];
-[STPopupController setupContainerView];
-[STPopupController setupNavigationBar];
-[STPopupController leftBarItemDidTap];
-[STPopupController bgViewDidTap];
-[STPopupController setCornerRadius:];
-[STPopupController orientationDidChange];
-[STPopupController keyboardWillShow:];
-[STPopupController keyboardWillHide:];
-[STPopupController adjustContainerViewOrigin];
-[STPopupController getCurrentTextInputInView:];
-[STPopupController firstResponderDidChange];
-[STPopupController animationControllerForPresentedController:presentingController:sourceController:];
-[STPopupController animationControllerForDismissedController:];
-[STPopupController convertTransitioningContext:];
-[STPopupController transitionDuration:];
-[STPopupController animateTransition:];
-[STPopupController popupNavigationBar:touchDidMoveWithOffset:];
-[STPopupController popupNavigationBar:touchDidEndWithOffset:];
-[STPopupController style];
-[STPopupController setStyle:];
-[STPopupController transitionStyle];
-[STPopupController setTransitionStyle:];
-[STPopupController transitioning];
-[STPopupController setTransitioning:];
-[STPopupController cornerRadius];
-[STPopupController navigationBarHidden];
-[STPopupController hidesCloseButton];
-[STPopupController safeAreaInsets];
-[STPopupController navigationBar];
-[STPopupController backgroundView];
-[STPopupController containerView];
@end

@interface STPopupControllerTransitioningContext :  {
  /* instance variables */
  Q _action;
  @"UIView" _containerView;
}

@property (TQ,R,N,V_action) action;
@property (T@"UIView",R,N,V_containerView) containerView;

/* instance methods */
-[STPopupControllerTransitioningContext initWithContainerView:action:];
-[STPopupControllerTransitioningContext action];
-[STPopupControllerTransitioningContext containerView];
@end

@interface STPopupControllerTransitioningFade : <STPopupControllerTransitioning>

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[STPopupControllerTransitioningFade popupControllerTransitionDuration:];
-[STPopupControllerTransitioningFade popupControllerAnimateTransition:completion:];
@end

@interface STPopupControllerTransitioningSlideVertical : <STPopupControllerTransitioning>

@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[STPopupControllerTransitioningSlideVertical popupControllerTransitionDuration:];
-[STPopupControllerTransitioningSlideVertical popupControllerAnimateTransition:completion:];
@end

@interface STPopupLeftBarItem :  {
  /* instance variables */
  @"UIControl" _customView;
  @"UIView" _bar1;
  @"UIView" _bar2;
  Q _type;
}

@property (TQ,N,V_type) type;

/* instance methods */
-[STPopupLeftBarItem initWithTarget:action:];
-[STPopupLeftBarItem setType:];
-[STPopupLeftBarItem setType:animated:];
-[STPopupLeftBarItem updateLayout];
-[STPopupLeftBarItem setTintColor:];
-[STPopupLeftBarItem type];
@end

@interface STPopupNavigationBar :  {
  /* instance variables */
  B _moving;
  d _movingStartY;
  B _draggable;
  @"<STPopupNavigationTouchEventDelegate>" _touchEventDelegate;
}

@property (T@"<STPopupNavigationTouchEventDelegate>",W,N,V_touchEventDelegate) touchEventDelegate;
@property (TB,N,V_draggable) draggable;

/* instance methods */
-[STPopupNavigationBar initWithFrame:];
-[STPopupNavigationBar touchesBegan:withEvent:];
-[STPopupNavigationBar touchesMoved:withEvent:];
-[STPopupNavigationBar touchesCancelled:withEvent:];
-[STPopupNavigationBar touchesEnded:withEvent:];
-[STPopupNavigationBar movingDidEndWithOffset:];
-[STPopupNavigationBar draggable];
-[STPopupNavigationBar setDraggable:];
-[STPopupNavigationBar touchEventDelegate];
-[STPopupNavigationBar setTouchEventDelegate:];
@end

@interface SettingsVC :  {
  /* instance variables */
  @"FRPreferences" _preferences;
}

@property (T@"FRPreferences",&,N,V_preferences) preferences;

/* instance methods */
-[SettingsVC init];
-[SettingsVC dismissVC];
-[SettingsVC clearDownloading];
-[SettingsVC clearDownloaded];
-[SettingsVC clearAll];
-[SettingsVC preferences];
-[SettingsVC setPreferences:];
@end

@interface Statistics :  {
  /* instance variables */
  q executionId;
  i videoFrameNumber;
  f videoFps;
  f videoQuality;
  q size;
  i time;
  d bitrate;
  d speed;
}

/* instance methods */
-[Statistics init];
-[Statistics initWithId:videoFrameNumber:fps:quality:size:time:bitrate:speed:];
-[Statistics update:];
-[Statistics getExecutionId];
-[Statistics getVideoFrameNumber];
-[Statistics getVideoFps];
-[Statistics getVideoQuality];
-[Statistics getSize];
-[Statistics getTime];
-[Statistics getBitrate];
-[Statistics getSpeed];
@end

@interface StreamInformation :  {
  /* instance variables */
  @"NSDictionary" dictionary;
}

/* instance methods */
-[StreamInformation init:];
-[StreamInformation getIndex];
-[StreamInformation getType];
-[StreamInformation getCodec];
-[StreamInformation getFullCodec];
-[StreamInformation getFormat];
-[StreamInformation getWidth];
-[StreamInformation getHeight];
-[StreamInformation getBitrate];
-[StreamInformation getSampleRate];
-[StreamInformation getSampleFormat];
-[StreamInformation getChannelLayout];
-[StreamInformation getSampleAspectRatio];
-[StreamInformation getDisplayAspectRatio];
-[StreamInformation getAverageFrameRate];
-[StreamInformation getRealFrameRate];
-[StreamInformation getTimeBase];
-[StreamInformation getCodecTimeBase];
-[StreamInformation getTags];
-[StreamInformation getStringProperty:];
-[StreamInformation getNumberProperty:];
-[StreamInformation getProperties:];
-[StreamInformation getAllProperties];
@end

@interface UserButtonCell : SSBouncyButton {
  /* instance variables */
  @"UIView" _leftSeparator;
  @"UIView" _rightSeparator;
}

@property (T@"UIView",&,N,V_leftSeparator) leftSeparator;
@property (T@"UIView",&,N,V_rightSeparator) rightSeparator;

/* instance methods */
-[UserButtonCell initWithLabel:account:imageName:logo:roll:color:bundlePath:avatarBackground:];
-[UserButtonCell leftSeparator];
-[UserButtonCell setLeftSeparator:];
-[UserButtonCell rightSeparator];
-[UserButtonCell setRightSeparator:];
@end

@interface _AFURLSessionTaskSwizzling : 
/* class methods */
-[_AFURLSessionTaskSwizzling load];
-[_AFURLSessionTaskSwizzling swizzleResumeAndSuspendMethodForClass:];

/* instance methods */
-[_AFURLSessionTaskSwizzling state];
-[_AFURLSessionTaskSwizzling af_resume];
-[_AFURLSessionTaskSwizzling af_suspend];
@end

@interface _LNPopupBarAppearanceChainProxy :  {
  /* instance variables */
  @"NSArray" _chain;
}

/* instance methods */
-[_LNPopupBarAppearanceChainProxy description];
-[_LNPopupBarAppearanceChainProxy initWithAppearanceChain:];
-[_LNPopupBarAppearanceChainProxy objectForKey:];
-[_LNPopupBarAppearanceChainProxy boolForKey:];
-[_LNPopupBarAppearanceChainProxy unsignedIntegerForKey:];
-[_LNPopupBarAppearanceChainProxy doubleForKey:];
-[_LNPopupBarAppearanceChainProxy setChainDelegate:];
@end

@interface _LNPopupBarBackgroundView :  {
  /* instance variables */
  @"UIView" _colorView;
  @"UIImageView" _imageView;
}

@property (T@"UIView",R,N) colorView;
@property (T@"UIImageView",R,N) imageView;

/* instance methods */
-[_LNPopupBarBackgroundView initWithEffect:];
-[_LNPopupBarBackgroundView colorView];
-[_LNPopupBarBackgroundView imageView];
-[_LNPopupBarBackgroundView layoutSubviews];
@end

@interface _LNPopupBarContentView : 
@end

@interface _LNPopupBarShadowView : 
@end

@interface _LNPopupBarTitlesView : 
@end

@interface _LNPopupBottomBarSupport : 
/* instance methods */
-[_LNPopupBottomBarSupport initWithFrame:];
@end

@interface _LNPopupToolbar : 
/* instance methods */
-[_LNPopupToolbar hitTest:withEvent:];
-[_LNPopupToolbar layoutSubviews];
-[_LNPopupToolbar _deepSetSemanticContentAttribute:toView:startingFromView:];
-[_LNPopupToolbar setSemanticContentAttribute:];
@end

@interface _LNPopupTransitionCoordinator : <UIViewControllerTransitionCoordinator>

@property (TB,R,N,GisAnimated) animated;
@property (Tq,R,N) presentationStyle;
@property (TB,R,N) initiallyInteractive;
@property (TB,R,N) isInterruptible;
@property (TB,R,N,GisInteractive) interactive;
@property (TB,R,N,GisCancelled) cancelled;
@property (Td,R,N) transitionDuration;
@property (Td,R,N) percentComplete;
@property (Td,R,N) completionVelocity;
@property (Tq,R,N) completionCurve;
@property (T@"UIView",R,N) containerView;
@property (T{CGAffineTransform=dddddd},R,N) targetTransform;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[_LNPopupTransitionCoordinator isInterruptible];
-[_LNPopupTransitionCoordinator isAnimated];
-[_LNPopupTransitionCoordinator presentationStyle];
-[_LNPopupTransitionCoordinator initiallyInteractive];
-[_LNPopupTransitionCoordinator isInteractive];
-[_LNPopupTransitionCoordinator isCancelled];
-[_LNPopupTransitionCoordinator transitionDuration];
-[_LNPopupTransitionCoordinator percentComplete];
-[_LNPopupTransitionCoordinator completionVelocity];
-[_LNPopupTransitionCoordinator completionCurve];
-[_LNPopupTransitionCoordinator viewControllerForKey:];
-[_LNPopupTransitionCoordinator viewForKey:];
-[_LNPopupTransitionCoordinator containerView];
-[_LNPopupTransitionCoordinator targetTransform];
-[_LNPopupTransitionCoordinator animateAlongsideTransition:completion:];
-[_LNPopupTransitionCoordinator animateAlongsideTransitionInView:animation:completion:];
-[_LNPopupTransitionCoordinator notifyWhenInteractionEndsUsingBlock:];
-[_LNPopupTransitionCoordinator notifyWhenInteractionChangesUsingBlock:];
@end

@interface _LNWeakRef :  {
  /* instance variables */
  @ _object;
}

@property (T@,R,W,N,V_object) object;

/* class methods */
-[_LNWeakRef refWithObject:];

/* instance methods */
-[_LNWeakRef object];
@end

@interface _LN_UIViewController_AppearanceControl : 
/* instance methods */
-[_LN_UIViewController_AppearanceControl viewWillAppear:];
-[_LN_UIViewController_AppearanceControl viewDidAppear:];
-[_LN_UIViewController_AppearanceControl viewWillDisappear:];
-[_LN_UIViewController_AppearanceControl viewDidDisappear:];
-[_LN_UIViewController_AppearanceControl class];
@end

@interface __FakeMarqueeLabel : <__MarqueeLabelType> {
  /* instance variables */
  B _holdScrolling;
  d _rate;
  d _animationDelay;
  @"__MarqueeLabel" _synchronizedLabel;
}

@property (Td,N,V_rate) rate;
@property (Td,N,V_animationDelay) animationDelay;
@property (T@"__MarqueeLabel",W,N,V_synchronizedLabel) synchronizedLabel;
@property (Td,R,N) animationDuration;
@property (TB,N,V_holdScrolling) holdScrolling;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[__FakeMarqueeLabel resetLabel];
-[__FakeMarqueeLabel unpauseLabel];
-[__FakeMarqueeLabel pauseLabel];
-[__FakeMarqueeLabel restartLabel];
-[__FakeMarqueeLabel shutdownLabel];
-[__FakeMarqueeLabel isPaused];
-[__FakeMarqueeLabel animationDuration];
-[__FakeMarqueeLabel rate];
-[__FakeMarqueeLabel setRate:];
-[__FakeMarqueeLabel animationDelay];
-[__FakeMarqueeLabel setAnimationDelay:];
-[__FakeMarqueeLabel synchronizedLabel];
-[__FakeMarqueeLabel setSynchronizedLabel:];
-[__FakeMarqueeLabel holdScrolling];
-[__FakeMarqueeLabel setHoldScrolling:];
@end

@interface __GradientSetupAnimation : 
@end

@interface __LNChevronView :  {
  /* instance variables */
  @"UIView" _leftView;
  @"UIView" _rightView;
  q _pendingState;
  q _state;
  d _width;
  d _animationDuration;
}

@property (Tq,N,V_state) state;
@property (Td,N,V_width) width;
@property (Td,N,V_animationDuration) animationDuration;

/* instance methods */
-[__LNChevronView initWithFrame:];
-[__LNChevronView initWithCoder:];
-[__LNChevronView _commonInit];
-[__LNChevronView layoutSubviews];
-[__LNChevronView setChevronState:];
-[__LNChevronView setState:];
-[__LNChevronView setState:animated:];
-[__LNChevronView tintColorDidChange];
-[__LNChevronView setWidth:];
-[__LNChevronView state];
-[__LNChevronView width];
-[__LNChevronView animationDuration];
-[__LNChevronView setAnimationDuration:];
@end

@interface __MarqueeLabel : <CAAnimationDelegate> {
  /* instance variables */
  B _labelize;
  B _holdScrolling;
  B _tapToScroll;
  B _isPaused;
  Q _animationCurve;
  Q _marqueeType;
  d _scrollDuration;
  d _rate;
  d _leadingBuffer;
  d _trailingBuffer;
  d _fadeLength;
  d _animationDelay;
  @"__MarqueeLabel" _synchronizedLabel;
  d _animationDuration;
  @"UILabel" _subLabel;
  @"UITapGestureRecognizer" _tapRecognizer;
  d _awayOffset;
  @? _scrollCompletionBlock;
  @"NSArray" _gradientColors;
  {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _homeLabelFrame;
}

@property (T@"UILabel",&,N,V_subLabel) subLabel;
@property (Td,N,V_animationDuration) animationDuration;
@property (TB,R,N) labelShouldScroll;
@property (T@"UITapGestureRecognizer",W,N,V_tapRecognizer) tapRecognizer;
@property (T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_homeLabelFrame) homeLabelFrame;
@property (Td,N,V_awayOffset) awayOffset;
@property (TB,N,V_isPaused) isPaused;
@property (T@?,C,N,V_scrollCompletionBlock) scrollCompletionBlock;
@property (T@"NSArray",&,N,V_gradientColors) gradientColors;
@property (TQ,N,V_animationCurve) animationCurve;
@property (TB,N,V_labelize) labelize;
@property (TB,N,V_holdScrolling) holdScrolling;
@property (TB,N,V_tapToScroll) tapToScroll;
@property (TQ,N,V_marqueeType) marqueeType;
@property (Td,N,V_scrollDuration) scrollDuration;
@property (Td,N,V_rate) rate;
@property (Td,N,V_leadingBuffer) leadingBuffer;
@property (Td,N,V_trailingBuffer) trailingBuffer;
@property (Td,N) continuousMarqueeExtraBuffer;
@property (Td,N,V_fadeLength) fadeLength;
@property (Td,N,V_animationDelay) animationDelay;
@property (T@"__MarqueeLabel",W,N,V_synchronizedLabel) synchronizedLabel;
@property (TB,R,N) awayFromHome;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* class methods */
-[__MarqueeLabel restartLabelsOfController:];
-[__MarqueeLabel controllerViewWillAppear:];
-[__MarqueeLabel controllerViewDidAppear:];
-[__MarqueeLabel controllerViewAppearing:];
-[__MarqueeLabel controllerLabelsShouldLabelize:];
-[__MarqueeLabel controllerLabelsShouldAnimate:];
-[__MarqueeLabel notifyController:withMessage:];
-[__MarqueeLabel layerClass];

/* instance methods */
-[__MarqueeLabel viewControllerShouldRestart:];
-[__MarqueeLabel labelsShouldLabelize:];
-[__MarqueeLabel labelsShouldAnimate:];
-[__MarqueeLabel initWithFrame:];
-[__MarqueeLabel initWithFrame:duration:andFadeLength:];
-[__MarqueeLabel initWithFrame:rate:andFadeLength:];
-[__MarqueeLabel initWithCoder:];
-[__MarqueeLabel awakeFromNib];
-[__MarqueeLabel prepareForInterfaceBuilder];
-[__MarqueeLabel repliLayer];
-[__MarqueeLabel maskLayer];
-[__MarqueeLabel drawLayer:inContext:];
-[__MarqueeLabel forwardPropertiesToSubLabel];
-[__MarqueeLabel setupLabel];
-[__MarqueeLabel minimizeLabelFrameWithMaximumSize:adjustHeight:];
-[__MarqueeLabel didMoveToSuperview];
-[__MarqueeLabel layoutSubviews];
-[__MarqueeLabel willMoveToWindow:];
-[__MarqueeLabel didMoveToWindow];
-[__MarqueeLabel updateSublabel];
-[__MarqueeLabel updateSublabelAndBeginScroll:];
-[__MarqueeLabel subLabelSize];
-[__MarqueeLabel sizeThatFits:];
-[__MarqueeLabel labelShouldScroll];
-[__MarqueeLabel labelReadyForScroll];
-[__MarqueeLabel beginScroll];
-[__MarqueeLabel beginScrollWithDelay:];
-[__MarqueeLabel returnLabelToOriginImmediately];
-[__MarqueeLabel scrollAwayWithInterval:];
-[__MarqueeLabel scrollAwayWithInterval:delay:];
-[__MarqueeLabel scrollAwayWithInterval:delayAmount:shouldReturn:];
-[__MarqueeLabel scrollContinuousWithInterval:after:];
-[__MarqueeLabel scrollContinuousWithInterval:after:labelAnimation:gradientAnimation:];
-[__MarqueeLabel applyGradientMaskForFadeLength:animated:];
-[__MarqueeLabel removeGradientMask];
-[__MarqueeLabel keyFrameAnimationForGradientFadeLength:interval:delay:];
-[__MarqueeLabel keyFrameAnimationForProperty:values:interval:delay:];
-[__MarqueeLabel timingFunctionForAnimationOptions:];
-[__MarqueeLabel animationDidStop:finished:];
-[__MarqueeLabel restartLabel];
-[__MarqueeLabel resetLabel];
-[__MarqueeLabel shutdownLabel];
-[__MarqueeLabel pauseLabel];
-[__MarqueeLabel unpauseLabel];
-[__MarqueeLabel labelWasTapped:];
-[__MarqueeLabel triggerScrollStart];
-[__MarqueeLabel labelWillBeginScroll];
-[__MarqueeLabel labelReturnedToHome:];
-[__MarqueeLabel setFrame:];
-[__MarqueeLabel setBounds:];
-[__MarqueeLabel viewForBaselineLayout];
-[__MarqueeLabel viewForLastBaselineLayout];
-[__MarqueeLabel viewForFirstBaselineLayout];
-[__MarqueeLabel text];
-[__MarqueeLabel setText:];
-[__MarqueeLabel attributedText];
-[__MarqueeLabel setAttributedText:];
-[__MarqueeLabel font];
-[__MarqueeLabel setFont:];
-[__MarqueeLabel textColor];
-[__MarqueeLabel setTextColor:];
-[__MarqueeLabel backgroundColor];
-[__MarqueeLabel setBackgroundColor:];
-[__MarqueeLabel shadowColor];
-[__MarqueeLabel setShadowColor:];
-[__MarqueeLabel shadowOffset];
-[__MarqueeLabel setShadowOffset:];
-[__MarqueeLabel highlightedTextColor];
-[__MarqueeLabel setHighlightedTextColor:];
-[__MarqueeLabel isHighlighted];
-[__MarqueeLabel setHighlighted:];
-[__MarqueeLabel isEnabled];
-[__MarqueeLabel setEnabled:];
-[__MarqueeLabel setNumberOfLines:];
-[__MarqueeLabel setAdjustsFontSizeToFitWidth:];
-[__MarqueeLabel setMinimumFontSize:];
-[__MarqueeLabel baselineAdjustment];
-[__MarqueeLabel setBaselineAdjustment:];
-[__MarqueeLabel tintColor];
-[__MarqueeLabel setTintColor:];
-[__MarqueeLabel tintColorDidChange];
-[__MarqueeLabel intrinsicContentSize];
-[__MarqueeLabel setAdjustsLetterSpacingToFitWidth:];
-[__MarqueeLabel setMinimumScaleFactor:];
-[__MarqueeLabel contentMode];
-[__MarqueeLabel setContentMode:];
-[__MarqueeLabel setIsAccessibilityElement:];
-[__MarqueeLabel setRate:];
-[__MarqueeLabel setScrollDuration:];
-[__MarqueeLabel setAnimationCurve:];
-[__MarqueeLabel setLeadingBuffer:];
-[__MarqueeLabel setTrailingBuffer:];
-[__MarqueeLabel setContinuousMarqueeExtraBuffer:];
-[__MarqueeLabel continuousMarqueeExtraBuffer];
-[__MarqueeLabel setFadeLength:];
-[__MarqueeLabel setTapToScroll:];
-[__MarqueeLabel setMarqueeType:];
-[__MarqueeLabel setLabelize:];
-[__MarqueeLabel setHoldScrolling:];
-[__MarqueeLabel awayFromHome];
-[__MarqueeLabel gradientColors];
-[__MarqueeLabel dealloc];
-[__MarqueeLabel animationCurve];
-[__MarqueeLabel labelize];
-[__MarqueeLabel holdScrolling];
-[__MarqueeLabel tapToScroll];
-[__MarqueeLabel marqueeType];
-[__MarqueeLabel scrollDuration];
-[__MarqueeLabel rate];
-[__MarqueeLabel leadingBuffer];
-[__MarqueeLabel trailingBuffer];
-[__MarqueeLabel fadeLength];
-[__MarqueeLabel animationDelay];
-[__MarqueeLabel setAnimationDelay:];
-[__MarqueeLabel synchronizedLabel];
-[__MarqueeLabel setSynchronizedLabel:];
-[__MarqueeLabel animationDuration];
-[__MarqueeLabel setAnimationDuration:];
-[__MarqueeLabel isPaused];
-[__MarqueeLabel setIsPaused:];
-[__MarqueeLabel subLabel];
-[__MarqueeLabel setSubLabel:];
-[__MarqueeLabel tapRecognizer];
-[__MarqueeLabel setTapRecognizer:];
-[__MarqueeLabel homeLabelFrame];
-[__MarqueeLabel setHomeLabelFrame:];
-[__MarqueeLabel awayOffset];
-[__MarqueeLabel setAwayOffset:];
-[__MarqueeLabel scrollCompletionBlock];
-[__MarqueeLabel setScrollCompletionBlock:];
-[__MarqueeLabel setGradientColors:];
@end

@interface boolSettingsVC : FRPreferences {
  /* instance variables */
  @"FRPreferences" _preferences;
}

@property (T@"FRPreferences",&,N,V_preferences) preferences;

/* instance methods */
-[boolSettingsVC initWithTitle:sections:footer:];
-[boolSettingsVC preferences];
-[boolSettingsVC setPreferences:];
@end

@interface settingsReorderTable : <UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  @"UITableView" _tableView;
  @"NSArray" _items;
  @"NSArray" _defaultValues;
  @"NSMutableArray" _currentValues;
  @"NSString" _key;
  @"NSString" _header;
  @"NSString" _footer;
}

@property (T@"UITableView",&,N,V_tableView) tableView;
@property (T@"NSArray",&,N,V_items) items;
@property (T@"NSArray",&,N,V_defaultValues) defaultValues;
@property (T@"NSMutableArray",&,N,V_currentValues) currentValues;
@property (T@"NSString",&,N,V_key) key;
@property (T@"NSString",&,N,V_header) header;
@property (T@"NSString",&,N,V_footer) footer;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[settingsReorderTable initWithTitle:items:defaultValues:key:header:footer:];
-[settingsReorderTable save];
-[settingsReorderTable numberOfSectionsInTableView:];
-[settingsReorderTable tableView:numberOfRowsInSection:];
-[settingsReorderTable tableView:titleForHeaderInSection:];
-[settingsReorderTable tableView:titleForFooterInSection:];
-[settingsReorderTable tableView:cellForRowAtIndexPath:];
-[settingsReorderTable tableView:canEditRowAtIndexPath:];
-[settingsReorderTable tableView:shouldIndentWhileEditingRowAtIndexPath:];
-[settingsReorderTable tableView:canMoveRowAtIndexPath:];
-[settingsReorderTable tableView:moveRowAtIndexPath:toIndexPath:];
-[settingsReorderTable tableView:editingStyleForRowAtIndexPath:];
-[settingsReorderTable tableView];
-[settingsReorderTable setTableView:];
-[settingsReorderTable items];
-[settingsReorderTable setItems:];
-[settingsReorderTable defaultValues];
-[settingsReorderTable setDefaultValues:];
-[settingsReorderTable currentValues];
-[settingsReorderTable setCurrentValues:];
-[settingsReorderTable key];
-[settingsReorderTable setKey:];
-[settingsReorderTable header];
-[settingsReorderTable setHeader:];
-[settingsReorderTable footer];
-[settingsReorderTable setFooter:];
@end

@interface xYouCheckUpdate :  {
  /* instance variables */
  @"LottieHolder" updateLottie;
  @"NSString" _tweakID;
  @"NSString" _version;
}

/* instance methods */
-[xYouCheckUpdate initWithTweakName:tweakID:version:message:tintColor:showAllButtons:];
-[xYouCheckUpdate dismiss];
-[xYouCheckUpdate dontShow];
-[xYouCheckUpdate updateAction];
-[xYouCheckUpdate viewWillAppear:];
-[xYouCheckUpdate viewDidDisappear:];
@end

@interface xYouImportVC : <UIImagePickerControllerDelegate> {
  /* instance variables */
  @"UIImageView" _headerView;
  @"NSString" _artworkPath;
  @"UIImage" _artworkImage;
  @"NSString" _filePath;
  @"NSString" _title;
  @"NSString" _album;
  @"NSString" _artist;
  @"NSString" _year;
  i _explicit;
  i _kind;
  @"FRPreferences" _import;
}

@property (T@"FRPreferences",&,N,V_import) import;
@property (TQ,R) hash;
@property (T#,R) superclass;
@property (T@"NSString",R,C) description;
@property (T@"NSString",R,C) debugDescription;

/* instance methods */
-[xYouImportVC initWithTitle:artist:artworkImage:filePath:isAudio:];
-[xYouImportVC changeArtwork];
-[xYouImportVC dismissVC];
-[xYouImportVC startImporting];
-[xYouImportVC imagePickerController:didFinishPickingMediaWithInfo:];
-[xYouImportVC import];
-[xYouImportVC setImport:];
@end

@interface xYouInViewGesture : xYouPanGestureRecognizer {
  /* instance variables */
  B _isStarted;
  Q _currentPoint;
  Q _previousPoint;
  d _startedScale;
  Q _gestureSpeed;
  @ _currentLayout;
  Q _startedPoint;
  Q _targetHeight;
}

@property (TB,N,V_isStarted) isStarted;
@property (TQ,N,V_currentPoint) currentPoint;
@property (TQ,N,V_previousPoint) previousPoint;
@property (Td,N,V_startedScale) startedScale;
@property (TQ,N,V_gestureSpeed) gestureSpeed;
@property (T@,N,V_currentLayout) currentLayout;
@property (TQ,N,V_startedPoint) startedPoint;
@property (TQ,N,V_targetHeight) targetHeight;

/* instance methods */
-[xYouInViewGesture isMovingToLeft];
-[xYouInViewGesture isMovingToRight];
-[xYouInViewGesture isStartedFromTop];
-[xYouInViewGesture isStartedFromCenter];
-[xYouInViewGesture isStartedFromBottom];
-[xYouInViewGesture started];
-[xYouInViewGesture reset];
-[xYouInViewGesture touchesBegan:withEvent:];
-[xYouInViewGesture isStarted];
-[xYouInViewGesture setIsStarted:];
-[xYouInViewGesture currentPoint];
-[xYouInViewGesture setCurrentPoint:];
-[xYouInViewGesture previousPoint];
-[xYouInViewGesture setPreviousPoint:];
-[xYouInViewGesture startedScale];
-[xYouInViewGesture setStartedScale:];
-[xYouInViewGesture gestureSpeed];
-[xYouInViewGesture setGestureSpeed:];
-[xYouInViewGesture currentLayout];
-[xYouInViewGesture setCurrentLayout:];
-[xYouInViewGesture startedPoint];
-[xYouInViewGesture setStartedPoint:];
-[xYouInViewGesture targetHeight];
-[xYouInViewGesture setTargetHeight:];
@end

@interface xYouItem : <NSCoding> {
  /* instance variables */
  B _isConverting;
  B _isFinished;
  i _type;
  i _conversionPercentage;
  @"NSString" _downloadIdentifier;
  @"NSString" _videoID;
  @"NSString" _title;
  @"NSString" _channel;
  @"NSString" _channelURL;
  @"NSString" _qualityLabel;
  @"NSString" _typeAndQuality;
  @"NSString" _audioFormat;
  @"NSString" _videoFormat;
  @"NSString" _audioURL;
  @"NSString" _videoURL;
  @"DownloadItem" _audioItem;
  @"DownloadItem" _videoItem;
  @"UIImage" _image;
  @"NSString" _conversionInfoText;
  @"NSString" _quality;
}

@property (T@"NSString",&,N,V_downloadIdentifier) downloadIdentifier;
@property (T@"NSString",&,N,V_videoID) videoID;
@property (T@"NSString",&,N,V_title) title;
@property (T@"NSString",&,N,V_channel) channel;
@property (T@"NSString",&,N,V_channelURL) channelURL;
@property (T@"NSString",&,N,V_quality) quality;
@property (T@"NSString",&,N,V_qualityLabel) qualityLabel;
@property (T@"NSString",&,N,V_typeAndQuality) typeAndQuality;
@property (T@"NSString",&,N,V_audioFormat) audioFormat;
@property (T@"NSString",&,N,V_videoFormat) videoFormat;
@property (T@"NSString",&,N,V_audioURL) audioURL;
@property (T@"NSString",&,N,V_videoURL) videoURL;
@property (T@"DownloadItem",&,N,V_audioItem) audioItem;
@property (T@"DownloadItem",&,N,V_videoItem) videoItem;
@property (T@"UIImage",&,N,V_image) image;
@property (Ti,N,V_type) type;
@property (TB,N,V_isConverting) isConverting;
@property (TB,N,V_isFinished) isFinished;
@property (Ti,N,V_conversionPercentage) conversionPercentage;
@property (T@"NSString",&,N,V_conversionInfoText) conversionInfoText;

/* instance methods */
-[xYouItem initWithWithRequestItem:info:];
-[xYouItem encodeWithCoder:];
-[xYouItem initWithCoder:];
-[xYouItem description];
-[xYouItem cachedAudioPath];
-[xYouItem cachedVideoPath];
-[xYouItem tmpAudioPath];
-[xYouItem tmpVideoPath];
-[xYouItem tmpMKVPath];
-[xYouItem tmpMP4Path];
-[xYouItem filePath];
-[xYouItem path];
-[xYouItem thumbnailPath];
-[xYouItem isMP4];
-[xYouItem isDownloadFinished];
-[xYouItem downloadIdentifier];
-[xYouItem setDownloadIdentifier:];
-[xYouItem videoID];
-[xYouItem setVideoID:];
-[xYouItem title];
-[xYouItem setTitle:];
-[xYouItem channel];
-[xYouItem setChannel:];
-[xYouItem channelURL];
-[xYouItem setChannelURL:];
-[xYouItem qualityLabel];
-[xYouItem setQualityLabel:];
-[xYouItem typeAndQuality];
-[xYouItem setTypeAndQuality:];
-[xYouItem audioFormat];
-[xYouItem setAudioFormat:];
-[xYouItem videoFormat];
-[xYouItem setVideoFormat:];
-[xYouItem audioURL];
-[xYouItem setAudioURL:];
-[xYouItem videoURL];
-[xYouItem setVideoURL:];
-[xYouItem audioItem];
-[xYouItem setAudioItem:];
-[xYouItem videoItem];
-[xYouItem setVideoItem:];
-[xYouItem image];
-[xYouItem setImage:];
-[xYouItem type];
-[xYouItem setType:];
-[xYouItem isConverting];
-[xYouItem setIsConverting:];
-[xYouItem isFinished];
-[xYouItem setIsFinished:];
-[xYouItem conversionPercentage];
-[xYouItem setConversionPercentage:];
-[xYouItem conversionInfoText];
-[xYouItem setConversionInfoText:];
-[xYouItem quality];
-[xYouItem setQuality:];
@end

@interface xYouMigrating :  {
  /* instance variables */
  @"LottieHolder" lottieView;
  @"UIActivityIndicatorView" activityIndicatorView;
  @"UILabel" loadingLabel;
  @"SSBouncyButton" leftButton;
  @"SSBouncyButton" rightButton;
  @"SSBouncyButton" middleButton;
  @"UIView" loadingView;
  @"UILabel" textLabel;
}

/* instance methods */
-[xYouMigrating initWithTitle:];
-[xYouMigrating dismiss];
-[xYouMigrating copyAllCercube];
-[xYouMigrating moveAllCercube];
-[xYouMigrating copyAllDLEasy];
-[xYouMigrating moveAllDLEasy];
-[xYouMigrating viewWillAppear:];
-[xYouMigrating viewDidDisappear:];
-[xYouMigrating moveAllDownloadsFromCercube:];
-[xYouMigrating moveAllDownloadsFromDLEasy:];
@end

@interface xYouPanGestureRecognizer :  {
  /* instance variables */
  B _verticalDirection;
  B _bouncesScale;
  B _pressedLongEnough;
  Q _numberOfTapsRequired;
  Q _numberOfTouchesRequired;
  Q _areas;
  d _minimumPressDuration;
  d _activateAfter;
  d _scaleFactor;
  d _scale;
  d _minimumScale;
  d _maximumScale;
  d _initialScale;
  {CGPoint="x"d"y"d} _initialLocationOnScreen;
}

@property (T{CGPoint=dd},N,V_initialLocationOnScreen) initialLocationOnScreen;
@property (Td,N,V_initialScale) initialScale;
@property (TB,N,V_pressedLongEnough) pressedLongEnough;
@property (TB,N,V_verticalDirection) verticalDirection;
@property (TQ,N,V_numberOfTapsRequired) numberOfTapsRequired;
@property (TQ,N,V_numberOfTouchesRequired) numberOfTouchesRequired;
@property (TQ,N,V_areas) areas;
@property (Td,N,V_minimumPressDuration) minimumPressDuration;
@property (Td,N,V_activateAfter) activateAfter;
@property (Td,N,V_scaleFactor) scaleFactor;
@property (Td,N,V_scale) scale;
@property (TB,N,V_bouncesScale) bouncesScale;
@property (Td,N,V_minimumScale) minimumScale;
@property (Td,N,V_maximumScale) maximumScale;

/* instance methods */
-[xYouPanGestureRecognizer initWithTarget:action:];
-[xYouPanGestureRecognizer screenLocationXOfTouch:];
-[xYouPanGestureRecognizer screenLocationYOfTouch:];
-[xYouPanGestureRecognizer zoomRubberBandScaleForZoomScale:minimumZoomScale:maximumZoomScale:];
-[xYouPanGestureRecognizer zoomScaleForRubberBandScale:minimumZoomScale:maximumZoomScale:];
-[xYouPanGestureRecognizer reset];
-[xYouPanGestureRecognizer touchesBegan:withEvent:];
-[xYouPanGestureRecognizer touchesMoved:withEvent:];
-[xYouPanGestureRecognizer touchesEnded:withEvent:];
-[xYouPanGestureRecognizer touchesCancelled:withEvent:];
-[xYouPanGestureRecognizer setScaleFactor:];
-[xYouPanGestureRecognizer verticalDirection];
-[xYouPanGestureRecognizer setVerticalDirection:];
-[xYouPanGestureRecognizer numberOfTapsRequired];
-[xYouPanGestureRecognizer setNumberOfTapsRequired:];
-[xYouPanGestureRecognizer numberOfTouchesRequired];
-[xYouPanGestureRecognizer setNumberOfTouchesRequired:];
-[xYouPanGestureRecognizer areas];
-[xYouPanGestureRecognizer setAreas:];
-[xYouPanGestureRecognizer minimumPressDuration];
-[xYouPanGestureRecognizer setMinimumPressDuration:];
-[xYouPanGestureRecognizer activateAfter];
-[xYouPanGestureRecognizer setActivateAfter:];
-[xYouPanGestureRecognizer scaleFactor];
-[xYouPanGestureRecognizer scale];
-[xYouPanGestureRecognizer setScale:];
-[xYouPanGestureRecognizer bouncesScale];
-[xYouPanGestureRecognizer setBouncesScale:];
-[xYouPanGestureRecognizer minimumScale];
-[xYouPanGestureRecognizer setMinimumScale:];
-[xYouPanGestureRecognizer maximumScale];
-[xYouPanGestureRecognizer setMaximumScale:];
-[xYouPanGestureRecognizer initialLocationOnScreen];
-[xYouPanGestureRecognizer setInitialLocationOnScreen:];
-[xYouPanGestureRecognizer initialScale];
-[xYouPanGestureRecognizer setInitialScale:];
-[xYouPanGestureRecognizer pressedLongEnough];
-[xYouPanGestureRecognizer setPressedLongEnough:];
@end

@interface xYouWelcome :  {
  /* instance variables */
  B _colorItemsImages;
  @"NSString" _titleText;
  @"NSString" _subtitleText;
  @"NSString" _item_one_title;
  @"NSString" _item_one_description;
  @"NSString" _item_two_title;
  @"NSString" _item_two_description;
  @"NSString" _item_three_title;
  @"NSString" _item_three_description;
  @"NSString" _buttonTitle;
  @"NSString" _buttonCaption;
  @"NSString" _package_ID;
  @"NSString" _bundle_Name;
  @"UIColor" _tintColor;
}

@property (T@"NSString",&,N,V_titleText) titleText;
@property (T@"NSString",&,N,V_subtitleText) subtitleText;
@property (T@"NSString",&,N,V_item_one_title) item_one_title;
@property (T@"NSString",&,N,V_item_one_description) item_one_description;
@property (T@"NSString",&,N,V_item_two_title) item_two_title;
@property (T@"NSString",&,N,V_item_two_description) item_two_description;
@property (T@"NSString",&,N,V_item_three_title) item_three_title;
@property (T@"NSString",&,N,V_item_three_description) item_three_description;
@property (T@"NSString",&,N,V_buttonTitle) buttonTitle;
@property (T@"NSString",&,N,V_buttonCaption) buttonCaption;
@property (T@"NSString",&,N,V_package_ID) package_ID;
@property (T@"NSString",&,N,V_bundle_Name) bundle_Name;
@property (T@"UIColor",&,N,V_tintColor) tintColor;
@property (TB,V_colorItemsImages) colorItemsImages;

/* instance methods */
-[xYouWelcome viewDidLoad];
-[xYouWelcome dismissWelcomeController];
-[xYouWelcome openTwitterForUser:];
-[xYouWelcome openTwitter];
-[xYouWelcome titleText];
-[xYouWelcome setTitleText:];
-[xYouWelcome subtitleText];
-[xYouWelcome setSubtitleText:];
-[xYouWelcome item_one_title];
-[xYouWelcome setItem_one_title:];
-[xYouWelcome item_one_description];
-[xYouWelcome setItem_one_description:];
-[xYouWelcome item_two_title];
-[xYouWelcome setItem_two_title:];
-[xYouWelcome item_two_description];
-[xYouWelcome setItem_two_description:];
-[xYouWelcome item_three_title];
-[xYouWelcome setItem_three_title:];
-[xYouWelcome item_three_description];
-[xYouWelcome setItem_three_description:];
-[xYouWelcome buttonTitle];
-[xYouWelcome setButtonTitle:];
-[xYouWelcome buttonCaption];
-[xYouWelcome setButtonCaption:];
-[xYouWelcome package_ID];
-[xYouWelcome setPackage_ID:];
-[xYouWelcome bundle_Name];
-[xYouWelcome setBundle_Name:];
-[xYouWelcome tintColor];
-[xYouWelcome setTintColor:];
-[xYouWelcome colorItemsImages];
-[xYouWelcome setColorItemsImages:];
@end

@interface (AFNetworkingSafeImageLoading)
/* class methods */
-[AFNetworkingSafeImageLoading imageWithColor:];
-[AFNetworkingSafeImageLoading imageWithColor:size:];
-[AFNetworkingSafeImageLoading imageWithColor:borderAttributes:size:];
-[AFNetworkingSafeImageLoading imageWithColor:borderAttributes:size:cornerRadius:];
-[AFNetworkingSafeImageLoading imageWithColor:borderAttributes:size:cornerInset:];
-[AFNetworkingSafeImageLoading resizableImageWithColor:];
-[AFNetworkingSafeImageLoading resizableImageWithColor:cornerRadius:];
-[AFNetworkingSafeImageLoading resizableImageWithColor:borderAttributes:cornerRadius:];
-[AFNetworkingSafeImageLoading resizableImageWithColor:borderAttributes:cornerInset:];
-[AFNetworkingSafeImageLoading blackColorImage];
-[AFNetworkingSafeImageLoading darkGrayColorImage];
-[AFNetworkingSafeImageLoading lightGrayColorImage];
-[AFNetworkingSafeImageLoading whiteColorImage];
-[AFNetworkingSafeImageLoading grayColorImage];
-[AFNetworkingSafeImageLoading redColorImage];
-[AFNetworkingSafeImageLoading greenColorImage];
-[AFNetworkingSafeImageLoading blueColorImage];
-[AFNetworkingSafeImageLoading cyanColorImage];
-[AFNetworkingSafeImageLoading yellowColorImage];
-[AFNetworkingSafeImageLoading magentaColorImage];
-[AFNetworkingSafeImageLoading orangeColorImage];
-[AFNetworkingSafeImageLoading purpleColorImage];
-[AFNetworkingSafeImageLoading brownColorImage];
-[AFNetworkingSafeImageLoading clearColorImage];
-[AFNetworkingSafeImageLoading imageNamed:tintColor:style:];
-[AFNetworkingSafeImageLoading _cache];
-[AFNetworkingSafeImageLoading _cachedImageWithDescriptors:];
-[AFNetworkingSafeImageLoading _cacheImage:withDescriptors:];
-[AFNetworkingSafeImageLoading _keyForImageWithDescriptors:];
-[AFNetworkingSafeImageLoading _imageWithColor:size:cornerInset:saveInCache:];
-[AFNetworkingSafeImageLoading _imageWithColor:borderAttributes:size:cornerInset:saveInCache:];
-[AFNetworkingSafeImageLoading imageWithGradient:size:direction:];
-[AFNetworkingSafeImageLoading resizableImageWithGradient:size:direction:];
-[AFNetworkingSafeImageLoading sd_imageWithData:];
-[AFNetworkingSafeImageLoading sd_imageWithData:scale:];
-[AFNetworkingSafeImageLoading sd_imageWithData:scale:firstFrameOnly:];
-[AFNetworkingSafeImageLoading sd_imageWithGIFData:];
-[AFNetworkingSafeImageLoading sd_decodedImageWithImage:];
-[AFNetworkingSafeImageLoading sd_decodedAndScaledDownImageWithImage:];
-[AFNetworkingSafeImageLoading sd_decodedAndScaledDownImageWithImage:limitBytes:];
-[AFNetworkingSafeImageLoading af_safeImageWithData:];

/* instance methods */
-[AFNetworkingSafeImageLoading crop:];
-[AFNetworkingSafeImageLoading tintedImageWithColor:style:];
-[AFNetworkingSafeImageLoading imageWithRoundedBounds];
-[AFNetworkingSafeImageLoading imageWithCornerRadius:];
-[AFNetworkingSafeImageLoading imageWithCornerInset:];
-[AFNetworkingSafeImageLoading isValidCornerInset:];
-[AFNetworkingSafeImageLoading imageAddingImage:];
-[AFNetworkingSafeImageLoading imageAddingImage:offset:];
-[AFNetworkingSafeImageLoading sd_drawInRect:context:scaleMode:clipsToBounds:];
-[AFNetworkingSafeImageLoading sd_resizedImageWithSize:scaleMode:];
-[AFNetworkingSafeImageLoading sd_croppedImageWithRect:];
-[AFNetworkingSafeImageLoading sd_roundedCornerImageWithRadius:corners:borderWidth:borderColor:];
-[AFNetworkingSafeImageLoading sd_rotatedImageWithAngle:fitSize:];
-[AFNetworkingSafeImageLoading sd_flippedImageWithHorizontal:vertical:];
-[AFNetworkingSafeImageLoading sd_tintedImageWithColor:];
-[AFNetworkingSafeImageLoading sd_colorAtPoint:];
-[AFNetworkingSafeImageLoading sd_colorsWithRect:];
-[AFNetworkingSafeImageLoading sd_blurredImageWithRadius:];
-[AFNetworkingSafeImageLoading sd_filteredImageWithFilter:];
-[AFNetworkingSafeImageLoading sd_imageData];
-[AFNetworkingSafeImageLoading sd_imageDataAsFormat:];
-[AFNetworkingSafeImageLoading sd_imageDataAsFormat:compressionQuality:];
-[AFNetworkingSafeImageLoading sd_imageDataAsFormat:compressionQuality:firstFrameOnly:];
-[AFNetworkingSafeImageLoading sd_imageLoopCount];
-[AFNetworkingSafeImageLoading setSd_imageLoopCount:];
-[AFNetworkingSafeImageLoading sd_isAnimated];
-[AFNetworkingSafeImageLoading sd_isVector];
-[AFNetworkingSafeImageLoading sd_imageFormat];
-[AFNetworkingSafeImageLoading setSd_imageFormat:];
-[AFNetworkingSafeImageLoading setSd_isIncremental:];
-[AFNetworkingSafeImageLoading sd_isIncremental];
-[AFNetworkingSafeImageLoading sd_memoryCost];
-[AFNetworkingSafeImageLoading setSd_memoryCost:];
-[AFNetworkingSafeImageLoading sd_isDecoded];
-[AFNetworkingSafeImageLoading setSd_isDecoded:];
-[AFNetworkingSafeImageLoading sd_extendedObject];
-[AFNetworkingSafeImageLoading setSd_extendedObject:];
@end

@interface (AltKVC)
/* instance methods */
-[AltKVC __ln_valueForKey:];
@end

@interface (FindUIViewController)
/* instance methods */
-[FindUIViewController sd_operationDictionary];
-[FindUIViewController sd_imageLoadOperationForKey:];
-[FindUIViewController sd_setImageLoadOperation:forKey:];
-[FindUIViewController sd_cancelImageLoadOperationWithKey:];
-[FindUIViewController sd_removeImageLoadOperationWithKey:];
-[FindUIViewController sd_imageURL];
-[FindUIViewController setSd_imageURL:];
-[FindUIViewController sd_latestOperationKey];
-[FindUIViewController setSd_latestOperationKey:];
-[FindUIViewController sd_imageProgress];
-[FindUIViewController setSd_imageProgress:];
-[FindUIViewController sd_internalSetImageWithURL:placeholderImage:options:context:setImageBlock:progress:completed:];
-[FindUIViewController sd_cancelCurrentImageLoad];
-[FindUIViewController sd_setImage:imageData:basedOnClassOrViaCustomSetImageBlock:cacheType:imageURL:];
-[FindUIViewController sd_setImage:imageData:basedOnClassOrViaCustomSetImageBlock:transition:cacheType:imageURL:];
-[FindUIViewController sd_setNeedsLayout];
-[FindUIViewController sd_imageTransition];
-[FindUIViewController setSd_imageTransition:];
-[FindUIViewController sd_imageIndicator];
-[FindUIViewController setSd_imageIndicator:];
-[FindUIViewController sd_startImageIndicator];
-[FindUIViewController sd_stopImageIndicator];
-[FindUIViewController firstAvailableViewController];
-[FindUIViewController traverseResponderChainForFirstViewController];
-[FindUIViewController firstAvailableUIViewController];
-[FindUIViewController traverseResponderChainForUIViewController];
@end

@interface (HighlightedWebCache)
/* instance methods */
-[HighlightedWebCache awakeFromNib];
-[HighlightedWebCache layoutSubviews];
-[HighlightedWebCache setImageCornerRadius:];
-[HighlightedWebCache setShadowWithColor:shadowXOffset:shadowYOffset:shadowRadius:];
-[HighlightedWebCache initShadowContainerIfNotExist];
-[HighlightedWebCache observeValueForKeyPath:ofObject:change:context:];
-[HighlightedWebCache startRotate:withClockwise:];
-[HighlightedWebCache stopRotate];
-[HighlightedWebCache changeToCircle];
-[HighlightedWebCache setBlurEffectViewWithStyle:alpha:];
-[HighlightedWebCache changeBlurEffectStyle:];
-[HighlightedWebCache getBlurEffectStyle];
-[HighlightedWebCache equalToImageViewConstraintFor:];
-[HighlightedWebCache shadowContainer];
-[HighlightedWebCache setShadowContainer:];
-[HighlightedWebCache cornerRadius];
-[HighlightedWebCache setCornerRadius:];
-[HighlightedWebCache shadowColor];
-[HighlightedWebCache setShadowColor:];
-[HighlightedWebCache shadowXOffset];
-[HighlightedWebCache setShadowXOffset:];
-[HighlightedWebCache shadowYOffset];
-[HighlightedWebCache setShadowYOffset:];
-[HighlightedWebCache shadowRadius];
-[HighlightedWebCache setShadowRadius:];
-[HighlightedWebCache rotating];
-[HighlightedWebCache setRotating:];
-[HighlightedWebCache circle];
-[HighlightedWebCache setCircle:];
-[HighlightedWebCache blurStyle];
-[HighlightedWebCache setBlurStyle:];
-[HighlightedWebCache blurAlpha];
-[HighlightedWebCache setBlurAlpha:];
-[HighlightedWebCache effectView];
-[HighlightedWebCache setEffectView:];
-[HighlightedWebCache sd_setImageWithURL:];
-[HighlightedWebCache sd_setImageWithURL:placeholderImage:];
-[HighlightedWebCache sd_setImageWithURL:placeholderImage:options:];
-[HighlightedWebCache sd_setImageWithURL:placeholderImage:options:context:];
-[HighlightedWebCache sd_setImageWithURL:completed:];
-[HighlightedWebCache sd_setImageWithURL:placeholderImage:completed:];
-[HighlightedWebCache sd_setImageWithURL:placeholderImage:options:completed:];
-[HighlightedWebCache sd_setImageWithURL:placeholderImage:options:progress:completed:];
-[HighlightedWebCache sd_setImageWithURL:placeholderImage:options:context:progress:completed:];
-[HighlightedWebCache sd_setHighlightedImageWithURL:];
-[HighlightedWebCache sd_setHighlightedImageWithURL:options:];
-[HighlightedWebCache sd_setHighlightedImageWithURL:options:context:];
-[HighlightedWebCache sd_setHighlightedImageWithURL:completed:];
-[HighlightedWebCache sd_setHighlightedImageWithURL:options:completed:];
-[HighlightedWebCache sd_setHighlightedImageWithURL:options:progress:completed:];
-[HighlightedWebCache sd_setHighlightedImageWithURL:options:context:progress:completed:];
@end

@interface (ImageContentType)
/* class methods */
-[ImageContentType sd_imageFormatForImageData:];
-[ImageContentType sd_UTTypeFromImageFormat:];
-[ImageContentType sd_imageFormatFromUTType:];
@end

@interface (LNPopupLayout)
/* class methods */
-[LNPopupLayout load];

/* instance methods */
-[LNPopupLayout _ln_isModalInPresentation];
-[LNPopupLayout _ln_popup_setOverrideUserInterfaceStyle:];
-[LNPopupLayout _ln_setAdditionalSafeAreaInsets:];
-[LNPopupLayout _ln_setChildAdditiveSafeAreaInsets:];
-[LNPopupLayout _ln_additionalSafeAreaInsets];
-[LNPopupLayout _ln_popupSafeAreaInsetsForChildController];
-[LNPopupLayout _ln_sPVC:];
-[LNPopupLayout _ln_presentViewController:animated:completion:];
-[LNPopupLayout _ln_setNeedsStatusBarAppearanceUpdate];
-[LNPopupLayout _ln_viewWillTransitionToSize:withTransitionCoordinator:];
-[LNPopupLayout _ln_willTransitionToTraitCollection:withTransitionCoordinator:];
-[LNPopupLayout _findAncestorParentPopupContainerController];
-[LNPopupLayout _findChildInPopupPresentation];
-[LNPopupLayout _common_childviewControllersForStatusBarLogic];
-[LNPopupLayout _ln_common_childViewControllerForStatusBarHidden];
-[LNPopupLayout _ln_common_childViewControllerForStatusBarStyle];
-[LNPopupLayout _ln_childViewControllerForStatusBarHidden];
-[LNPopupLayout _ln_childViewControllerForStatusBarStyle];
-[LNPopupLayout _ln_setPopupPresentationState:];
-[LNPopupLayout _aSTVC];
-[LNPopupLayout _common_uLFSBAIO];
-[LNPopupLayout _uLFSBAIO];
-[LNPopupLayout _vSAIFS];
-[LNPopupLayout _vCUSB];
-[LNPopupLayout _layoutPopupBarOrderForTransition];
-[LNPopupLayout _layoutPopupBarOrderForUse];
-[LNPopupLayout _ln_bottomBarExtension_nocreate];
-[LNPopupLayout _ln_bottomBarExtension];
-[LNPopupLayout _ln_popup_viewDidLayoutSubviews];
-[LNPopupLayout _ignoringLayoutDuringTransition];
-[LNPopupLayout _setIgnoringLayoutDuringTransition:];
@end

@interface (LNPopupSupportPrivate)
/* class methods */
-[LNPopupSupportPrivate load];

/* instance methods */
-[LNPopupSupportPrivate _ln_d_pFHFC:];
-[LNPopupSupportPrivate _ln_d_cMIWEFC:p:];
@end

@interface (LNPopupSupportPrivate)
/* class methods */
-[LNPopupSupportPrivate load];

/* instance methods */
-[LNPopupSupportPrivate _ln__dMFW:tW:];
-[LNPopupSupportPrivate _ln_setNotifying:];
-[LNPopupSupportPrivate _ln_isNotifying];
-[LNPopupSupportPrivate _ln_notify];
-[LNPopupSupportPrivate _ln_letMeKnowWhenViewInWindowHierarchy:];
-[LNPopupSupportPrivate _ln_forgetAboutIt];
-[LNPopupSupportPrivate _effectGroupingIdentifierIfAvailable];
@end

@interface (LNPopupSupportPrivate)
/* instance methods */
-[LNPopupSupportPrivate _ln_popupController];
-[LNPopupSupportPrivate _ln_bottomBarSupport_nocreate];
-[LNPopupSupportPrivate _ln_bottomBarSupport];
-[LNPopupSupportPrivate bottomDockingViewForPopup_nocreateOrDeveloper];
-[LNPopupSupportPrivate bottomDockingViewForPopup_internalOrDeveloper];
-[LNPopupSupportPrivate bottomDockingViewForPopupBar];
-[LNPopupSupportPrivate insetsForBottomDockingView];
-[LNPopupSupportPrivate defaultFrameForBottomDockingView];
-[LNPopupSupportPrivate defaultFrameForBottomDockingView_internal];
-[LNPopupSupportPrivate defaultFrameForBottomDockingView_internalOrDeveloper];
-[LNPopupSupportPrivate shouldExtendPopupBarUnderSafeArea];
-[LNPopupSupportPrivate setShouldExtendPopupBarUnderSafeArea:];
-[LNPopupSupportPrivate nonMemoryLeakingPresentationController];
-[LNPopupSupportPrivate presentPopupBarWithContentViewController:openPopup:animated:completion:];
-[LNPopupSupportPrivate presentPopupBarWithContentViewController:animated:completion:];
-[LNPopupSupportPrivate openPopupAnimated:completion:];
-[LNPopupSupportPrivate closePopupAnimated:completion:];
-[LNPopupSupportPrivate dismissPopupBarAnimated:completion:];
-[LNPopupSupportPrivate updatePopupBarAppearance];
-[LNPopupSupportPrivate setNeedsPopupBarAppearanceUpdate];
-[LNPopupSupportPrivate popupPresentationState];
-[LNPopupSupportPrivate popupPresentationDelegate];
-[LNPopupSupportPrivate setPopupPresentationDelegate:];
-[LNPopupSupportPrivate _isContainedInPopupController];
-[LNPopupSupportPrivate _isContainedInPopupControllerOrDeallocated];
-[LNPopupSupportPrivate popupPresentationContainerViewController];
-[LNPopupSupportPrivate setPopupPresentationContainerViewController:];
-[LNPopupSupportPrivate popupContentViewController];
-[LNPopupSupportPrivate setPopupContentViewController:];
-[LNPopupSupportPrivate popupItem];
-[LNPopupSupportPrivate positionPopupCloseButton:];
-[LNPopupSupportPrivate popupBar];
-[LNPopupSupportPrivate popupContentView];
-[LNPopupSupportPrivate popupInteractionStyle];
-[LNPopupSupportPrivate setPopupInteractionStyle:];
-[LNPopupSupportPrivate _ln_popupController_nocreate];
-[LNPopupSupportPrivate viewForPopupInteractionGestureRecognizer];
-[LNPopupSupportPrivate _ln_isInPopupAppearanceTransition];
-[LNPopupSupportPrivate _ln_beginAppearanceTransition:animated:];
-[LNPopupSupportPrivate _ln_endAppearanceTransition];
@end

@interface (LNPopupSupportPrivate)
/* class methods */
-[LNPopupSupportPrivate load];

/* instance methods */
-[LNPopupSupportPrivate _isTabBarHiddenDuringTransition];
-[LNPopupSupportPrivate _setTabBarHiddenDuringTransition:];
-[LNPopupSupportPrivate _isPrepareTabBarIgnored];
-[LNPopupSupportPrivate _setPrepareTabBarIgnored:];
-[LNPopupSupportPrivate bottomDockingViewForPopup_nocreate];
-[LNPopupSupportPrivate bottomDockingViewForPopupBar];
-[LNPopupSupportPrivate insetsForBottomDockingView];
-[LNPopupSupportPrivate defaultFrameForBottomDockingView];
-[LNPopupSupportPrivate _ln_popup_viewDidLayoutSubviews_tvc];
-[LNPopupSupportPrivate _aSTVC];
-[LNPopupSupportPrivate _uLFSBAIO];
-[LNPopupSupportPrivate __repositionPopupBarToClosed_hack];
-[LNPopupSupportPrivate hBWT:iE:];
-[LNPopupSupportPrivate sBWT:iE:];
-[LNPopupSupportPrivate _ln_pTB];
-[LNPopupSupportPrivate _ln_childViewControllerForStatusBarHidden];
-[LNPopupSupportPrivate _ln_childViewControllerForStatusBarStyle];
@end

@interface (LNPopupSupportPrivate)
/* class methods */
-[LNPopupSupportPrivate load];

/* instance methods */
-[LNPopupSupportPrivate bottomDockingViewForPopup_nocreate];
-[LNPopupSupportPrivate bottomDockingViewForPopupBar];
-[LNPopupSupportPrivate defaultFrameForBottomDockingView];
-[LNPopupSupportPrivate insetsForBottomDockingView];
-[LNPopupSupportPrivate _ln_popup_viewDidLayoutSubviews_nvc];
-[LNPopupSupportPrivate _aSTVC];
-[LNPopupSupportPrivate _uLFSBAIO];
-[LNPopupSupportPrivate _sTH:e:d:];
-[LNPopupSupportPrivate hSNBDS:f:c:];
-[LNPopupSupportPrivate _ln_childViewControllerForStatusBarHidden];
-[LNPopupSupportPrivate _ln_childViewControllerForStatusBarStyle];
-[LNPopupSupportPrivate _ln_setNavigationBarHidden:animated:];
@end

@interface (LNPopupSupportPrivate)
/* class methods */
-[LNPopupSupportPrivate load];

/* instance methods */
-[LNPopupSupportPrivate _ln_popup_viewDidLayoutSubviews_SplitViewNastyApple];
@end

@interface (MD5Hashing)
/* instance methods */
-[MD5Hashing md5];
@end

@interface (MarqueeLabelHelpers)
/* instance methods */
-[MarqueeLabelHelpers durationPercentageForPositionPercentage:withDuration:];
-[MarqueeLabelHelpers solveTForY:withEpsilon:controlPoints:];
-[MarqueeLabelHelpers YforCurveAt:withControlPoints:];
-[MarqueeLabelHelpers XforCurveAt:withControlPoints:];
-[MarqueeLabelHelpers derivativeYValueForCurveAt:withControlPoints:];
-[MarqueeLabelHelpers controlPoints];
@end

@interface (SDWebImageOperation) <SDWebImageOperation>
@end

@interface (STPopup)
/* class methods */
-[STPopup load];
-[STPopup swizzleSelector:toSelector:];

/* instance methods */
-[STPopup st_becomeFirstResponder];
@end

@interface (STPopup)
/* class methods */
-[STPopup load];
-[STPopup swizzleSelector:toSelector:];

/* instance methods */
-[STPopup st_viewDidLoad];
-[STPopup st_presentViewController:animated:completion:];
-[STPopup st_dismissViewControllerAnimated:completion:];
-[STPopup st_presentedViewController];
-[STPopup st_presentingViewController];
-[STPopup setContentSizeInPopup:];
-[STPopup contentSizeInPopup];
-[STPopup setLandscapeContentSizeInPopup:];
-[STPopup landscapeContentSizeInPopup];
-[STPopup setPopupController:];
-[STPopup popupController];
@end

@interface (UIColor_Expanded)
/* class methods */
-[UIColor_Expanded colorWithHex:alpha:];
-[UIColor_Expanded colorWithHex:];
-[UIColor_Expanded whiteColorWithAlpha:];
-[UIColor_Expanded blackColorWithAlpha:];
-[UIColor_Expanded searchForColorByName:];
-[UIColor_Expanded LOT_colorWithString:];
-[UIColor_Expanded LOT_randomColor];
-[UIColor_Expanded LOT_colorWithRGBHex:];
-[UIColor_Expanded LOT_colorWithHexString:];
-[UIColor_Expanded LOT_colorWithName:];
-[UIColor_Expanded LOT_colorByLerpingFromColor:toColor:amount:];

/* instance methods */
-[UIColor_Expanded sd_hexString];
-[UIColor_Expanded colorSpaceModel];
-[UIColor_Expanded LOT_colorSpaceString];
-[UIColor_Expanded canProvideRGBComponents];
-[UIColor_Expanded LOT_arrayFromRGBAComponents];
-[UIColor_Expanded LOT_red:green:blue:alpha:];
-[UIColor_Expanded red];
-[UIColor_Expanded green];
-[UIColor_Expanded blue];
-[UIColor_Expanded white];
-[UIColor_Expanded alpha];
-[UIColor_Expanded rgbHex];
-[UIColor_Expanded LOT_colorByLuminanceMapping];
-[UIColor_Expanded LOT_colorByMultiplyingByRed:green:blue:alpha:];
-[UIColor_Expanded LOT_colorByAddingRed:green:blue:alpha:];
-[UIColor_Expanded LOT_colorByLighteningToRed:green:blue:alpha:];
-[UIColor_Expanded LOT_colorByDarkeningToRed:green:blue:alpha:];
-[UIColor_Expanded LOT_colorByMultiplyingBy:];
-[UIColor_Expanded LOT_colorByAdding:];
-[UIColor_Expanded LOT_colorByLighteningTo:];
-[UIColor_Expanded LOT_colorByDarkeningTo:];
-[UIColor_Expanded LOT_colorByMultiplyingByColor:];
-[UIColor_Expanded LOT_colorByAddingColor:];
-[UIColor_Expanded LOT_colorByLighteningToColor:];
-[UIColor_Expanded LOT_colorByDarkeningToColor:];
-[UIColor_Expanded LOT_stringFromColor];
-[UIColor_Expanded LOT_hexStringValue];
@end

@interface (UICornerInset)
/* class methods */
-[UICornerInset valueWithUICornerInset:];

/* instance methods */
-[UICornerInset UICornerInsetValue];
@end

@interface (WebCache)
/* instance methods */
-[WebCache sd_currentImageURL];
-[WebCache sd_imageURLForState:];
-[WebCache sd_setImageWithURL:forState:];
-[WebCache sd_setImageWithURL:forState:placeholderImage:];
-[WebCache sd_setImageWithURL:forState:placeholderImage:options:];
-[WebCache sd_setImageWithURL:forState:placeholderImage:options:context:];
-[WebCache sd_setImageWithURL:forState:completed:];
-[WebCache sd_setImageWithURL:forState:placeholderImage:completed:];
-[WebCache sd_setImageWithURL:forState:placeholderImage:options:completed:];
-[WebCache sd_setImageWithURL:forState:placeholderImage:options:progress:completed:];
-[WebCache sd_setImageWithURL:forState:placeholderImage:options:context:progress:completed:];
-[WebCache sd_currentBackgroundImageURL];
-[WebCache sd_backgroundImageURLForState:];
-[WebCache sd_setBackgroundImageWithURL:forState:];
-[WebCache sd_setBackgroundImageWithURL:forState:placeholderImage:];
-[WebCache sd_setBackgroundImageWithURL:forState:placeholderImage:options:];
-[WebCache sd_setBackgroundImageWithURL:forState:placeholderImage:options:context:];
-[WebCache sd_setBackgroundImageWithURL:forState:completed:];
-[WebCache sd_setBackgroundImageWithURL:forState:placeholderImage:completed:];
-[WebCache sd_setBackgroundImageWithURL:forState:placeholderImage:options:completed:];
-[WebCache sd_setBackgroundImageWithURL:forState:placeholderImage:options:progress:completed:];
-[WebCache sd_setBackgroundImageWithURL:forState:placeholderImage:options:context:progress:completed:];
-[WebCache sd_cancelImageLoadForState:];
-[WebCache sd_cancelBackgroundImageLoadForState:];
-[WebCache sd_imageURLStorage];
@end


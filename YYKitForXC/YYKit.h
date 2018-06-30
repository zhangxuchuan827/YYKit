//
//  YYKit.h
//  YYKit <https://github.com/ibireme/YYKit>
//
//  Created by ibireme on 13/3/30.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

#if __has_include(<YYKitForXC/YYKit.h>)

FOUNDATION_EXPORT double YYKitVersionNumber;
FOUNDATION_EXPORT const unsigned char YYKitVersionString[];

#import <YYKitForXC/YYKitMacro.h>
#import <YYKitForXC/NSObject+YYAdd.h>
#import <YYKitForXC/NSObject+YYAddForKVO.h>
#import <YYKitForXC/NSString+YYAdd.h>
#import <YYKitForXC/NSNumber+YYAdd.h>
#import <YYKitForXC/NSData+YYAdd.h>
#import <YYKitForXC/NSArray+YYAdd.h>
#import <YYKitForXC/NSDictionary+YYAdd.h>
#import <YYKitForXC/NSDate+YYAdd.h>
#import <YYKitForXC/NSNotificationCenter+YYAdd.h>
#import <YYKitForXC/NSKeyedUnarchiver+YYAdd.h>
#import <YYKitForXC/NSTimer+YYAdd.h>
#import <YYKitForXC/NSBundle+YYAdd.h>

#import <YYKitForXC/UIColor+YYAdd.h>
#import <YYKitForXC/UIImage+YYAdd.h>
#import <YYKitForXC/UIControl+YYAdd.h>
#import <YYKitForXC/UIBarButtonItem+YYAdd.h>
#import <YYKitForXC/UIGestureRecognizer+YYAdd.h>
#import <YYKitForXC/UIView+YYAdd.h>
#import <YYKitForXC/UIScrollView+YYAdd.h>
#import <YYKitForXC/UITableView+YYAdd.h>
#import <YYKitForXC/UITextField+YYAdd.h>
#import <YYKitForXC/UIScreen+YYAdd.h>
#import <YYKitForXC/UIDevice+YYAdd.h>
#import <YYKitForXC/UIApplication+YYAdd.h>
#import <YYKitForXC/UIFont+YYAdd.h>
#import <YYKitForXC/UIBezierPath+YYAdd.h>

#import <YYKitForXC/CALayer+YYAdd.h>
#import <YYKitForXC/YYCGUtilities.h>

#import <YYKitForXC/NSObject+YYModel.h>
#import <YYKitForXC/YYClassInfo.h>

#import <YYKitForXC/YYCache.h>
#import <YYKitForXC/YYMemoryCache.h>
#import <YYKitForXC/YYDiskCache.h>
#import <YYKitForXC/YYKVStorage.h>

#import <YYKitForXC/YYImage.h>
#import <YYKitForXC/YYFrameImage.h>
#import <YYKitForXC/YYSpriteSheetImage.h>
#import <YYKitForXC/YYAnimatedImageView.h>
#import <YYKitForXC/YYImageCoder.h>
#import <YYKitForXC/YYImageCache.h>
#import <YYKitForXC/YYWebImageOperation.h>
#import <YYKitForXC/YYWebImageManager.h>
#import <YYKitForXC/UIImageView+YYWebImage.h>
#import <YYKitForXC/UIButton+YYWebImage.h>
#import <YYKitForXC/MKAnnotationView+YYWebImage.h>
#import <YYKitForXC/CALayer+YYWebImage.h>

#import <YYKitForXC/YYLabel.h>
#import <YYKitForXC/YYTextView.h>
#import <YYKitForXC/YYTextAttribute.h>
#import <YYKitForXC/YYTextArchiver.h>
#import <YYKitForXC/YYTextParser.h>
#import <YYKitForXC/YYTextUtilities.h>
#import <YYKitForXC/YYTextRunDelegate.h>
#import <YYKitForXC/YYTextRubyAnnotation.h>
#import <YYKitForXC/NSAttributedString+YYText.h>
#import <YYKitForXC/NSParagraphStyle+YYText.h>
#import <YYKitForXC/UIPasteboard+YYText.h>
#import <YYKitForXC/YYTextLayout.h>
#import <YYKitForXC/YYTextLine.h>
#import <YYKitForXC/YYTextInput.h>
#import <YYKitForXC/YYTextDebugOption.h>
#import <YYKitForXC/YYTextContainerView.h>
#import <YYKitForXC/YYTextSelectionView.h>
#import <YYKitForXC/YYTextMagnifier.h>
#import <YYKitForXC/YYTextEffectWindow.h>
#import <YYKitForXC/YYTextKeyboardManager.h>

#import <YYKitForXC/YYReachability.h>
#import <YYKitForXC/YYGestureRecognizer.h>
#import <YYKitForXC/YYFileHash.h>
#import <YYKitForXC/YYKeychain.h>
#import <YYKitForXC/YYWeakProxy.h>
#import <YYKitForXC/YYTimer.h>
#import <YYKitForXC/YYTransaction.h>
#import <YYKitForXC/YYAsyncLayer.h>
#import <YYKitForXC/YYSentinel.h>
#import <YYKitForXC/YYDispatchQueuePool.h>
#import <YYKitForXC/YYThreadSafeArray.h>
#import <YYKitForXC/YYThreadSafeDictionary.h>

#else

#import "YYKitMacro.h"
#import "NSObject+YYAdd.h"
#import "NSObject+YYAddForKVO.h"
#import "NSString+YYAdd.h"
#import "NSNumber+YYAdd.h"
#import "NSData+YYAdd.h"
#import "NSArray+YYAdd.h"
#import "NSDictionary+YYAdd.h"
#import "NSDate+YYAdd.h"
#import "NSNotificationCenter+YYAdd.h"
#import "NSKeyedUnarchiver+YYAdd.h"
#import "NSTimer+YYAdd.h"
#import "NSBundle+YYAdd.h"

#import "UIColor+YYAdd.h"
#import "UIImage+YYAdd.h"
#import "UIControl+YYAdd.h"
#import "UIBarButtonItem+YYAdd.h"
#import "UIGestureRecognizer+YYAdd.h"
#import "UIView+YYAdd.h"
#import "UIScrollView+YYAdd.h"
#import "UITableView+YYAdd.h"
#import "UITextField+YYAdd.h"
#import "UIScreen+YYAdd.h"
#import "UIDevice+YYAdd.h"
#import "UIApplication+YYAdd.h"
#import "UIFont+YYAdd.h"
#import "UIBezierPath+YYAdd.h"

#import "CALayer+YYAdd.h"
#import "YYCGUtilities.h"

#import "NSObject+YYModel.h"
#import "YYClassInfo.h"

#import "YYCache.h"
#import "YYMemoryCache.h"
#import "YYDiskCache.h"
#import "YYKVStorage.h"

#import "YYImage.h"
#import "YYFrameImage.h"
#import "YYSpriteSheetImage.h"
#import "YYAnimatedImageView.h"
#import "YYImageCoder.h"
#import "YYImageCache.h"
#import "YYWebImageOperation.h"
#import "YYWebImageManager.h"
#import "UIImageView+YYWebImage.h"
#import "UIButton+YYWebImage.h"
#import "MKAnnotationView+YYWebImage.h"
#import "CALayer+YYWebImage.h"

#import "YYLabel.h"
#import "YYTextView.h"
#import "YYTextAttribute.h"
#import "YYTextArchiver.h"
#import "YYTextParser.h"
#import "YYTextUtilities.h"
#import "YYTextRunDelegate.h"
#import "YYTextRubyAnnotation.h"
#import "NSAttributedString+YYText.h"
#import "NSParagraphStyle+YYText.h"
#import "UIPasteboard+YYText.h"
#import "YYTextLayout.h"
#import "YYTextLine.h"
#import "YYTextInput.h"
#import "YYTextDebugOption.h"
#import "YYTextContainerView.h"
#import "YYTextSelectionView.h"
#import "YYTextMagnifier.h"
#import "YYTextEffectWindow.h"
#import "YYTextKeyboardManager.h"

#import "YYReachability.h"
#import "YYGestureRecognizer.h"
#import "YYFileHash.h"
#import "YYKeychain.h"
#import "YYWeakProxy.h"
#import "YYTimer.h"
#import "YYTransaction.h"
#import "YYAsyncLayer.h"
#import "YYSentinel.h"
#import "YYDispatchQueuePool.h"
#import "YYThreadSafeArray.h"
#import "YYThreadSafeDictionary.h"

#endif

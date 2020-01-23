#if __has_include(<React/RCTBridgeModule.h>) // React Native >= 0.40
#import <React/RCTBridgeModule.h>
#else // React Native < 0.40
#import "RCTBridgeModule.h"
#endif

@interface RNInAppBrowser : NSObject <RCTBridgeModule>
/**
 Singleton class holding references to RNInAppBrowser and associated methods
 *
 @return A RNInAppBrowser shared instance of the single class
 */
+ (nonnull instancetype)sharedInstance;
- (void)_close;
@end


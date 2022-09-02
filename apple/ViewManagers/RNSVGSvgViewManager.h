/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <React/RCTViewManager.h>

#ifdef RN_FABRIC_ENABLED
#import <rnsvg/rnsvg.h>
#endif

@interface RNSVGSvgViewManager : RCTViewManager
#ifdef RN_FABRIC_ENABLED
                                 <NativeSvgViewModuleSpec>
#endif
@end

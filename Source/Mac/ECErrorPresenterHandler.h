//
//  ECErrorPresenterHandler.h
//  ECLogging
//
//  Created by Sam Deane on 10/04/2012.
//  Copyright (c) 2012 Elegant Chaos. All rights reserved.
//

#import "ECLogHandler.h"

/**
 * Log handler which presents the logged object as an error using [NSApplication presentError:].
 *
 * This handler is intended to be configured for use by the ECErrorReporter log channel, but you
 * can use it for other channels too.
 *
 * If it's not sent an actual error to log, it makes one from the default string value of whatever it was sent.
 *
 * The handler shows a modal sheet, which is intrusive, so it's really only useful for alerting you to unexpected
 * situations, and should probably not be used in release builds.
 *
 */

extern NSString *const ECLoggingErrorDomain;
extern const NSInteger ECLoggingUnknownError;

@interface ECErrorPresenterHandler : ECLogHandler

@end

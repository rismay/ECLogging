// --------------------------------------------------------------------------
//! @author Sam Deane
//! @date 12/04/2011
//
//  Copyright 2012 Sam Deane, Elegant Chaos. All rights reserved.
//  This source code is distributed under the terms of Elegant Chaos's 
//  liberal license: http://www.elegantchaos.com/license/liberal
// --------------------------------------------------------------------------

#import "ECLogHandler.h"

/**
 * Handler which logs to disk.
 *
 * Log files are created in `~/Library/Logs/app-id/channel-name.log`.
 */

@interface ECLogHandlerFile : ECLogHandler 
{

}

- (void) logFromChannel:(ECLogChannel*)channel withObject:(id)format arguments:(va_list)arguments context:(ECLogContext *)context;

@end

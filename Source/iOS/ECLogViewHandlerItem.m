// --------------------------------------------------------------------------
//  Copyright 2013 Sam Deane, Elegant Chaos. All rights reserved.
//  This source code is distributed under the terms of Elegant Chaos's
//  liberal license: http://www.elegantchaos.com/license/liberal
// --------------------------------------------------------------------------

#import "ECLogViewHandlerItem.h"
#import "ECLogChannel.h"

@implementation ECLogViewHandlerItem

@synthesize context;
@synthesize message;

- (void)dealloc 
{
    [context release];
    [message release];
    
    [super dealloc];
}

@end

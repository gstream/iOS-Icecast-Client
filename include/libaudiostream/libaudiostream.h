//
//  libaudiostream.h
//  libaudiostream
//
//  Created by User on 2/5/16.
//  Copyright (c) 2016 User. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "libshout.h"
#import "liblame.h"

@interface libaudiostream : NSObject {
    
}
- (int) init:(NSString*) ipaddr : (int) port : (NSString*) mountpt : (NSString*) username : (NSString*) pwd : (int) mediatype;
- (int) send: (unsigned char*) buffer : (int) length;
- (int) close;
@end

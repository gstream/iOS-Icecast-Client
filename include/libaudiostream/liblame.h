//
//  liblame.h
//  libaudiostream
//
//  Created by User on 2/5/16.
//  Copyright (c) 2016 User. All rights reserved.
//

#ifndef __libaudiostream__liblame__
#define __libaudiostream__liblame__

#include <stdio.h>
#include <stdlib.h>

void Lame_init(int inSamplerate, int outChannel, int outSamplerate, int outBitrate, int quality, int mode);

int Lame_encode(const short int* buffer_l, const short int* buffer_r, const int samples, unsigned char* mp3buf, int mp3buf_size);

int Lame_flush(unsigned char* mp3buf, int mp3buf_size);

void Lame_close();
#endif /* defined(__libaudiostream__liblame__) */

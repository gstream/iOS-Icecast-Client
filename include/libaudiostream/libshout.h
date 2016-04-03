//
//  libshout.h
//  libaudiostream
//
//  Created by User on 2/5/16.
//  Copyright (c) 2016 User. All rights reserved.
//

#ifndef __libaudiostream__libshout__
#define __libaudiostream__libshout__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <pthread.h>

void close_shout();

int init_icecast(unsigned char *urlservercastA,int puertocast,unsigned char *montajecastA,unsigned char *usuariocastA,unsigned char *passwdcastA,int IsMp3Ogg);

int ShoutOutputStream_Send(unsigned char *pBuffer, int lengthOfArray);

int ShoutOutputStream_Init(unsigned char *urlservercast,int puertocast,unsigned char *montajecast,unsigned char * usuariocast,unsigned char *passwdcast, int IsMp3Ogg);

int ShoutOutputStream_Close();

#endif /* defined(__libaudiostream__libshout__) */

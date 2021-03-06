

#ifndef _PLATFORM_IMAGE_H_
#define _PLATFORM_IMAGE_H_

#include "type.h"

typedef struct image_tag
{
     u16 width;
     u16 height;
     u8  format;
     u16*             buffer;     
} image_t;

int platform_image_decode(const char *filename,image_t *image_info);
int platform_free_image_decodedata(u16 *buf);
#endif
/* 
 * Gmu Music Player
 *
 * Copyright (c) 2006-2010 Johannes Heimansberg (wejp.k.vu)
 *
 * File: jpeg.h  Created: 070605
 *
 * Description: jpeg image dimensions detector
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2 of
 * the License. See the file COPYING in the Gmu's main directory
 * for details.
 */
#include <stdio.h>
#include "imgsize.h"
#ifndef _JPEG_H
#define _JPEG_H
/* functions return 1 if a valid jpeg header was found, otherwise 0 */
int jpeg_get_dimensions_from_file(ImageSize *is, char *filename, unsigned int *width, unsigned int *height);
int jpeg_get_dimensions_from_memory(ImageSize *is, char *mem, unsigned int memsize, unsigned int *width, unsigned int *height);
#endif

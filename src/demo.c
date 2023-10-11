/*
 * Copyright 2022-2023 The project author HM.
 *
 */

#include <string.h>

int random_function(const char *dir)
{
	unsigned char tmpbuf[BUFSIZE];
	return memcpy(tmpbuf, dir, strlen(dir));
}



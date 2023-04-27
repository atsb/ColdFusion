// Particle Type File
// Copyright David Gary Wood (Hakx) 1999

#ifndef __PTCLTYPE__
#define __PTCLTYPE__

#include "doomtype.h"

typedef struct particle_s
{
 byte type;
 int ttl; // Time to Live
 int centre_x, centre_y, centre_z;
 int a_x;
 int a_y;
 int a_z;
} particle_t;

#endif

// EOF

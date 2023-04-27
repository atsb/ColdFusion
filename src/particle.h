// Particle Types, main header file etc.
// Copyright David Gary Wood (Hakx) 1999

#ifndef __PARTICLE__
#define __PARTICLE__

extern void PTCL_Handle(mobj_t* particle);
extern mobj_t *PTCL_SpawnParticle(int x, int y, int z, int type);

// Particle Types
#define PTYPE_EXPLOSION 1

#endif

// EOF

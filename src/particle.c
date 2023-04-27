// Main Particle Handler File
// Copyright David Gary Wood (Hakx) 1999

#include "doomstat.h"
#include "particle.h"
#include "ptcltype.h"
#include "p_mobj.h"
#include "tables.h"
#include "m_random.h"
#include <stdlib.h>
#include <math.h>

mobj_t *PTCL_SpawnParticle(int x, int y, int z, int type);
void PTCL_Handle(mobj_t* particle);

mobj_t *PTCL_SpawnParticle(int x, int y, int z, int type)
{
  mobj_t* mobj;
  angle_t *an;
  int force;

  mobj = P_SpawnMobj(x, y, z, MT_TROOPSHOT);

  mobj->ptcl->type = type;
  mobj->ptcl->centre_x = x;
  mobj->ptcl->centre_y = y;
  mobj->ptcl->centre_z = z;
  mobj->info->speed = 0;

  switch (mobj->ptcl->type)
    {
     case (PTYPE_EXPLOSION) :
          // Particles are exploding STAIGHT UPWARDS
         mobj->ptcl->ttl = 80*TICRATE;
         mobj->ptcl->a_z = 8*FRACUNIT;
         mobj->ptcl->a_y = 0;
         mobj->ptcl->a_z = 0;
         break;
     default :
        mobj->ptcl->ttl = 20*TICRATE;
         mobj->ptcl->a_x = 0;
         mobj->ptcl->a_y = 0;
         mobj->ptcl->a_z = 0;
    }
}

void PTCL_Handle(mobj_t* particle)
{
  if (!particle->ptcl)
     return;

  if (particle->ptcl->ttl <= 0) // Time's up
    P_RemoveMobj (particle);

  if (particle->ptcl->type == PTYPE_EXPLOSION)
    {
    } // Exploding Particle

  particle->momx += particle->ptcl->a_x;
  particle->momy += particle->ptcl->a_y;
  particle->momz += particle->ptcl->a_z;
  particle->ptcl->ttl--; // Decrement TTL
}

// EOF

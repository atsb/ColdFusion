#include "doomtype.h"
#include "doomstat.h"
#include "p_mobj.h"
#include "p_effect.h"
#include "p_spec.h"
#include "v_video.h"
#include "m_random.h"
#include "r_defs.h"
#include "r_state.h"
#include "r_things.h"
#include "s_sound.h"
#include "sounds.h"
#include "w_wad.h"

player_t *viewplayer; // Hakx 5/22/99

int rockettrails;

#define FADEFROMTTL(a)	(255/(a))

static int grey1, grey2, grey3, grey4, red, green, blue, yellow, black,
		   red1, green1, blue1, yellow1, purple, purple1, white,
		   rblue1, rblue2, rblue3, rblue4, orange, yorange, dred, grey5,
		   maroon1, maroon2;

static const struct ColorList {
	int *color, r, g, b;
} Colors[] = {
	{&grey1,	85,  85,  85 },
	{&grey2,	171, 171, 171},
	{&grey3,	50,  50,  50 },
	{&grey4,	210, 210, 210},
	{&grey5,	128, 128, 128},
	{&red,		255, 0,   0  },  
	{&green,	0,   200, 0  },  
	{&blue,		0,   0,   255},
	{&yellow,	255, 255, 0  },  
	{&black,	0,   0,   0  },  
	{&red1,		255, 127, 127},
	{&green1,	127, 255, 127},
	{&blue1,	127, 127, 255},
	{&yellow1,	255, 255, 180},
	{&purple,	120, 0,   160},
	{&purple1,	200, 30,  255},
	{&white, 	255, 255, 255},
	{&rblue1,	81,  81,  255},
	{&rblue2,	0,   0,   227},
	{&rblue3,	0,   0,   130},
	{&rblue4,	0,   0,   80 },
	{&orange,	255, 120, 0  },
	{&yorange,	255, 170, 0  },
	{&dred,		80,  0,   0  },
	{&maroon1,	154, 49,  49 },
	{&maroon2,	125, 24,  24 },
	{NULL}
};

void P_InitEffects (void)
{
	const struct ColorList *color = Colors;
        unsigned char *playpal = W_CacheLumpName("PLAYPAL", PU_STATIC);
	unsigned int *palette = playpal;
	int numcolors = 256;

	while (color->color)
	     {
	      *(color->color) = BestColor (palette, color->r, color->g, color->b, numcolors);
	      color++;
             }
}

void P_ThinkParticles (void)
{

}

//
// P_RunEffects
//
// Run effects on all mobjs in world
//
void P_RunEffects (void)
{

}

static void MakeFountain (mobj_t *actor, int color1, int color2)
{

}

void P_RunEffect (mobj_t *actor, int effects)
{

}

void P_DrawSplash (int count, fixed_t x, fixed_t y, fixed_t z, angle_t angle, int kind)
{

}

void P_DrawSplash2 (int count, fixed_t x, fixed_t y, fixed_t z, angle_t angle, int updown, int kind)
{

}

void P_DrawRailTrail (vec3_t start, vec3_t end)
{

}

void P_DisconnectEffect (mobj_t *actor)
{

}

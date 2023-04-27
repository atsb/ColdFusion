// Colormap Table
//
// By David Wood (Hakx)
//
// DESCRIPTION: --Enables each TYPE of thing to have a different colormap
//

static const char
rcsid[] = "$Id: cc_table.c,v 1.0 1999/08/05 21:50:00 GMT+1, Hakx Exp $";

#include "doomstat.h"
#include "cc_main.h"

cmt_table_t cmt_table[NUMMOBJTYPES] =
{
// Name      Status -> -1 = not found, 0 = found

 {"CMTPLRMP", 0}, //   MT_PLAYER
 {"CMTZMBMP", 0}, //   MT_POSSESSED
 {"CMTSHTMP", 0}, //   MT_SHOTGUY
 {"CMTVLEMP", 0}, //   MT_VILE
 {"CMTFREMP", 0}, //   MT_FIRE
 {"CMTUNDMP", 0}, //   MT_UNDEAD
 {"CMTTCRMP", 0}, //   MT_TRACER
 {"CMTSMKMP", 0}, //   MT_SMOKE
 {"CMTFATMP", 0}, //   MT_FATSO
 {"CMTFTSMP", 0}, //   MT_FATSHOT
 {"CMTCHNMP", 0}, //   MT_CHAINGUY
 {"CMTTROMP", 0}, //   MT_TROOP
 {"CMTSRGMP", 0}, //   MT_SERGEANT
 {"CMTSHDMP", 0}, //   MT_SHADOWS
 {"CMTHEDMP", 0}, //   MT_HEAD
 {"CMTBRSMP", 0}, //   MT_BRUISER
 {"CMTBSSMP", 0}, //   MT_BRUISERSHOT
 {"CMTKGTMP", 0}, //   MT_KNIGHT
 {"CMTSKLMP", 0}, //   MT_SKULL
 {"CMTSPDMP", 0}, //   MT_SPIDER
 {"CMTBABMP", 0}, //   MT_BABY
 {"CMTCYBMP", 0}, //   MT_CYBORG
 {"CMTPNEMP", 0}, //   MT_PAIN
 {"CMTWLFMP", 0}, //   MT_WOLFSS
 {"CMTCKNMP", 0}, //   MT_KEEN
 {"CMTBSSMP", 0}, //   MT_BOSSBRAIN
 {"CMTBPTMP", 0}, //   MT_BOSSSPIT
 {"CMTBSTMP", 0}, //   MT_BOSSTARGET
 {"CMTSPSMP", 0}, //   MT_SPAWNSHOT
 {"CMTSPFMP", 0}, //   MT_SPAWNFIRE
 {"CMTBARMP", 0}, //   MT_BARREL
 {"CMTTRSMP", 0}, //   MT_TROOPSHOT
 {"CMTHSTMP", 0}, //   MT_HEADSHOT
 {"CMTROCMP", 0}, //   MT_ROCKET
 {"CMTPLSMP", 0}, //   MT_PLASMA
 {"CMTBFGMP", 0}, //   MT_BFG
 {"CMTAPLMP", 0}, //   MT_ARACHPLAZ
 {"CMTPFFMP", 0}, //   MT_PUFF
 {"CMTBLDMP", 0}, //   MT_BLOOD
 {"CMTFOGMP", 0}, //   MT_TFOG
 {"CMTIFGMP", 0}, //   MT_IFOG
 {"CMTTELMP", 0}, //   MT_TELEPORTMAN
 {"CMTXBGMP", 0}, //   MT_EXTRABFG
 {"CMTMS0MP", 0}, //   MT_MISC0
 {"CMTMS1MP", 0}, //   MT_MISC1
 {"CMTMS2MP", 0}, //   MT_MISC2
 {"CMTMS3MP", 0}, //   MT_MISC3
 {"CMTMS4MP", 0}, //   MT_MISC4
 {"CMTMS5MP", 0}, //   MT_MISC5
 {"CMTMS6MP", 0}, //   MT_MISC6
 {"CMTMS7MP", 0}, //   MT_MISC7
 {"CMTMS8MP", 0}, //   MT_MISC8
 {"CMTMS9MP", 0}, //   MT_MISC9,
 {"CMTM10MP", 0}, //   MT_MISC10
 {"CMTM11MP", 0}, //   MT_MISC11
 {"CMTM12MP", 0}, //   MT_MISC12
 {"CMTINVMP", 0}, //   MT_INV
 {"CMTM13MP", 0}, //   MT_MISC13
 {"CMTINSMP", 0}, //   MT_INS
 {"CMTM14MP", 0}, //   MT_MISC14
 {"CMTM15MP", 0}, //   MT_MISC15
 {"CMTM16MP", 0}, //   MT_MISC16
 {"CMTMEGMP", 0}, //   MT_MEGA
 {"CMTCLPMP", 0}, //   MT_CLIP
 {"CMTM17MP", 0}, //   MT_MISC17
 {"CMTM18MP", 0}, //   MT_MISC18
 {"CMTM19MP", 0}, //   MT_MISC19
 {"CMTM20MP", 0}, //   MT_MISC20
 {"CMTM21MP", 0}, //   MT_MISC21
 {"CMTM22MP", 0}, //   MT_MISC22
 {"CMTM23MP", 0}, //   MT_MISC23
 {"CMTM24MP", 0}, //   MT_MISC24
 {"CMTM25MP", 0}, //   MT_MISC25
 {"CMTCGNMP", 0}, //   MT_CHAINGUN
 {"CMTM26MP", 0}, //   MT_MISC26
 {"CMTM27MP", 0}, //   MT_MISC27
 {"CMTM28MP", 0}, //   MT_MISC28
 {"CMTSGNMP", 0}, //   MT_SHOTGUN
 {"CMTSSGMP", 0}, //   MT_SUPERSHOTGUN
 {"CMTM29MP", 0}, //   MT_MISC29
 {"CMTM30MP", 0}, //   MT_MISC30
 {"CMTM31MP", 0}, //   MT_MISC31
 {"CMTM32MP", 0}, //   MT_MISC32
 {"CMTM33MP", 0}, //   MT_MISC33
 {"CMTM34MP", 0}, //   MT_MISC34
 {"CMTM35MP", 0}, //   MT_MISC35
 {"CMTM36MP", 0}, //   MT_MISC36
 {"CMTM37MP", 0}, //   MT_MISC37
 {"CMTM38MP", 0}, //   MT_MISC38
 {"CMTM39MP", 0}, //   MT_MISC39
 {"CMTM40MP", 0}, //   MT_MISC40
 {"CMTM41MP", 0}, //   MT_MISC41
 {"CMTM42MP", 0}, //   MT_MISC42
 {"CMTM43MP", 0}, //   MT_MISC43
 {"CMTM44MP", 0}, //   etc etc thru to misc86
 {"CMTM45MP", 0},
 {"CMTM46MP", 0},
 {"CMTM47MP", 0},
 {"CMTM48MP", 0},
 {"CMTM49MP", 0},
 {"CMTM50MP", 0},
 {"CMTM51MP", 0},
 {"CMTM52MP", 0},
 {"CMTM53MP", 0},
 {"CMTM54MP", 0},
 {"CMTM55MP", 0},
 {"CMTM56MP", 0},
 {"CMTM57MP", 0},
 {"CMTM58MP", 0},
 {"CMTM59MP", 0},
 {"CMTM60MP", 0},
 {"CMTM61MP", 0},
 {"CMTM62MP", 0},
 {"CMTM63MP", 0},
 {"CMTM64MP", 0},
 {"CMTM65MP", 0},
 {"CMTM66MP", 0},
 {"CMTM67MP", 0},
 {"CMTM68MP", 0},
 {"CMTM69MP", 0},
 {"CMTM70MP", 0},
 {"CMTM71MP", 0},
 {"CMTM72MP", 0},
 {"CMTM73MP", 0},
 {"CMTM74MP", 0},
 {"CMTM75MP", 0},
 {"CMTM76MP", 0},
 {"CMTM77MP", 0},
 {"CMTM78MP", 0},
 {"CMTM79MP", 0},
 {"CMTM80MP", 0},
 {"CMTM81MP", 0},
 {"CMTM82MP", 0},
 {"CMTM83MP", 0},
 {"CMTM84MP", 0},
 {"CMTM85MP", 0},
 {"CMTM86MP", 0},
 {"CMTPSHMP", 0}, //  MT_PUSH
 {"CMTPLLMP", 0}, //  MT_PULL
#ifdef DOGS
 {"CMTDOGMP", 0}, //  MT_DOGS,
#endif

#ifdef BETA
 {"CMTBP1MP", 0}, // MT_PLASMA1
 {"CMTBP2MP", 0}, // MT_PLASMA2
 {"CMTSCTMP", 0}, // MT_SCEPTRE
 {"CMTBIBMP", 0}, // MT_BIBLE
#endif
};

// EOF

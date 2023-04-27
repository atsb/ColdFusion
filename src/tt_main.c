// Translucceny Table
//
// By David Wood (Hakx)
//
// DESCRIPTION: --Enables each TYPE of thing to have a different translucceny table
//

static const char
rcsid[] = "$Id: tt_table.c,v 1.0 1999/08/02 03:22:00 GMT+1, Hakx Exp $";

#include "doomstat.h"
#include "tt_main.h"

tt_table_t tt_table[NUMMOBJTYPES] =
{
// Name      Status -> -1 = not found, 0 = found

 {"TTPLRMAP", 0}, //   MT_PLAYER
 {"TTZMBMAP", 0}, //   MT_POSSESSED
 {"TTSHTMAP", 0}, //   MT_SHOTGUY
 {"TTVLEMAP", 0}, //   MT_VILE
 {"TTFREMAP", 0}, //   MT_FIRE
 {"TTUNDMAP", 0}, //   MT_UNDEAD
 {"TTTCRMAP", 0}, //   MT_TRACER
 {"TTSMKMAP", 0}, //   MT_SMOKE
 {"TTFATMAP", 0}, //   MT_FATSO
 {"TTFTSMAP", 0}, //   MT_FATSHOT
 {"TTCHNMAP", 0}, //   MT_CHAINGUY
 {"TTTROMAP", 0}, //   MT_TROOP
 {"TTSRGMAP", 0}, //   MT_SERGEANT
 {"TTSHDMAP", 0}, //   MT_SHADOWS
 {"TTHEDMAP", 0}, //   MT_HEAD
 {"TTBRSMAP", 0}, //   MT_BRUISER
 {"TTBSSMAP", 0}, //   MT_BRUISERSHOT
 {"TTKGTMAP", 0}, //   MT_KNIGHT
 {"TTSKLMAP", 0}, //   MT_SKULL
 {"TTSPDMAP", 0}, //   MT_SPIDER
 {"TTBABMAP", 0}, //   MT_BABY
 {"TTCYBMAP", 0}, //   MT_CYBORG
 {"TTPNEMAP", 0}, //   MT_PAIN
 {"TTWLFMAP", 0}, //   MT_WOLFSS
 {"TTCKNMAP", 0}, //   MT_KEEN
 {"TTBSSMAP", 0}, //   MT_BOSSBRAIN
 {"TTBPTMAP", 0}, //   MT_BOSSSPIT
 {"TTBSTMAP", 0}, //   MT_BOSSTARGET
 {"TTSPSMAP", 0}, //   MT_SPAWNSHOT
 {"TTSPFMAP", 0}, //   MT_SPAWNFIRE
 {"TTBARMAP", 0}, //   MT_BARREL
 {"TTTRSMAP", 0}, //   MT_TROOPSHOT
 {"TTHSTMAP", 0}, //   MT_HEADSHOT
 {"TTROCMAP", 0}, //   MT_ROCKET
 {"TTPLSMAP", 0}, //   MT_PLASMA
 {"TTBFGMAP", 0}, //   MT_BFG
 {"TTAPLMAP", 0}, //   MT_ARACHPLAZ
 {"TTPFFMAP", 0}, //   MT_PUFF
 {"TTBLDMAP", 0}, //   MT_BLOOD
 {"TTFOGMAP", 0}, //   MT_TFOG
 {"TTIFGMAP", 0}, //   MT_IFOG
 {"TTTELMAP", 0}, //   MT_TELEPORTMAN
 {"TTXBGMAP", 0}, //   MT_EXTRABFG
 {"TTMS0MAP", 0}, //   MT_MISC0
 {"TTMS1MAP", 0}, //   MT_MISC1
 {"TTMS2MAP", 0}, //   MT_MISC2
 {"TTMS3MAP", 0}, //   MT_MISC3
 {"TTMS4MAP", 0}, //   MT_MISC4
 {"TTMS5MAP", 0}, //   MT_MISC5
 {"TTMS6MAP", 0}, //   MT_MISC6
 {"TTMS7MAP", 0}, //   MT_MISC7
 {"TTMS8MAP", 0}, //   MT_MISC8
 {"TTMS9MAP", 0}, //   MT_MISC9,
 {"TTM10MAP", 0}, //   MT_MISC10
 {"TTM11MAP", 0}, //   MT_MISC11
 {"TTM12MAP", 0}, //   MT_MISC12
 {"TTINVMAP", 0}, //   MT_INV
 {"TTM13MAP", 0}, //   MT_MISC13
 {"TTINSMAP", 0}, //   MT_INS
 {"TTM14MAP", 0}, //   MT_MISC14
 {"TTM15MAP", 0}, //   MT_MISC15
 {"TTM16MAP", 0}, //   MT_MISC16
 {"TTMEGMAP", 0}, //   MT_MEGA
 {"TTCLPMAP", 0}, //   MT_CLIP
 {"TTM17MAP", 0}, //   MT_MISC17
 {"TTM18MAP", 0}, //   MT_MISC18
 {"TTM19MAP", 0}, //   MT_MISC19
 {"TTM20MAP", 0}, //   MT_MISC20
 {"TTM21MAP", 0}, //   MT_MISC21
 {"TTM22MAP", 0}, //   MT_MISC22
 {"TTM23MAP", 0}, //   MT_MISC23
 {"TTM24MAP", 0}, //   MT_MISC24
 {"TTM25MAP", 0}, //   MT_MISC25
 {"TTCGNMAP", 0}, //   MT_CHAINGUN
 {"TTM26MAP", 0}, //   MT_MISC26
 {"TTM27MAP", 0}, //   MT_MISC27
 {"TTM28MAP", 0}, //   MT_MISC28
 {"TTSGNMAP", 0}, //   MT_SHOTGUN
 {"TTSSGMAP", 0}, //   MT_SUPERSHOTGUN
 {"TTM29MAP", 0}, //   MT_MISC29
 {"TTM30MAP", 0}, //   MT_MISC30
 {"TTM31MAP", 0}, //   MT_MISC31
 {"TTM32MAP", 0}, //   MT_MISC32
 {"TTM33MAP", 0}, //   MT_MISC33
 {"TTM34MAP", 0}, //   MT_MISC34
 {"TTM35MAP", 0}, //   MT_MISC35
 {"TTM36MAP", 0}, //   MT_MISC36
 {"TTM37MAP", 0}, //   MT_MISC37
 {"TTM38MAP", 0}, //   MT_MISC38
 {"TTM39MAP", 0}, //   MT_MISC39
 {"TTM40MAP", 0}, //   MT_MISC40
 {"TTM41MAP", 0}, //   MT_MISC41
 {"TTM42MAP", 0}, //   MT_MISC42
 {"TTM43MAP", 0}, //   MT_MISC43
 {"TTM44MAP", 0}, //   etc etc thru to misc86
 {"TTM45MAP", 0},
 {"TTM46MAP", 0},
 {"TTM47MAP", 0},
 {"TTM48MAP", 0},
 {"TTM49MAP", 0},
 {"TTM50MAP", 0},
 {"TTM51MAP", 0},
 {"TTM52MAP", 0},
 {"TTM53MAP", 0},
 {"TTM54MAP", 0},
 {"TTM55MAP", 0},
 {"TTM56MAP", 0},
 {"TTM57MAP", 0},
 {"TTM58MAP", 0},
 {"TTM59MAP", 0},
 {"TTM60MAP", 0},
 {"TTM61MAP", 0},
 {"TTM62MAP", 0},
 {"TTM63MAP", 0},
 {"TTM64MAP", 0},
 {"TTM65MAP", 0},
 {"TTM66MAP", 0},
 {"TTM67MAP", 0},
 {"TTM68MAP", 0},
 {"TTM69MAP", 0},
 {"TTM70MAP", 0},
 {"TTM71MAP", 0},
 {"TTM72MAP", 0},
 {"TTM73MAP", 0},
 {"TTM74MAP", 0},
 {"TTM75MAP", 0},
 {"TTM76MAP", 0},
 {"TTM77MAP", 0},
 {"TTM78MAP", 0},
 {"TTM79MAP", 0},
 {"TTM80MAP", 0},
 {"TTM81MAP", 0},
 {"TTM82MAP", 0},
 {"TTM83MAP", 0},
 {"TTM84MAP", 0},
 {"TTM85MAP", 0},
 {"TTM86MAP", 0},
 {"TTPSHMAP", 0}, //  MT_PUSH
 {"TTPLLMAP", 0}, //  MT_PULL
#ifdef DOGS
 {"TTDOGMAP", 0}, //  MT_DOGS,
#endif

#ifdef BETA
 {"TTBP1MAP", 0}, // MT_PLASMA1
 {"TTBP2MAP", 0}, // MT_PLASMA2
 {"TTSCTMAP", 0}, // MT_SCEPTRE
 {"TTBIBMAP", 0}, // MT_BIBLE
#endif

// Fusion

 // [Dead Dudes]
 {"TTDRVMAP", 0}, // MT_DEAD_REVENANT
 {"TTDDSMAP", 0}, // MT_DEAD_SPECTRE
 {"TTDMNMAP", 0}, // MT_DEAD_MANCUBUS
 {"TTDACMAP", 0}, // MT_DEAD_ARCHVILE
 {"TTDARMAP", 0}, // MT_DEAD_ARACHNOTRON
 {"TTDHKMAP", 0}, // MT_DEAD_HELLKNIGHT
 {"TTDCMMAP", 0}, // MT_DEAD_COMMANDO
 {"TTDCYMAP", 0}, // MT_DEAD_CYBERDEMON
 {"TTDSPMAP", 0}, // MT_DEAD_SPIDERDEMON
 {"TTDBRMAP", 0}, // MT_DEAD_BARON
 {"TTDWFMAP", 0}, // MT_DEAD_WOLFDUDE

// [Shooters]
 {"TTS01MAP", 0}, // MT_SHOOTER_PISTOL
 {"TTS02MAP", 0}, // MT_SHOOTER_SHOTGUN
 {"TTS03MAP", 0}, // MT_SHOOTER_DSHOTGUN
 {"TTS04MAP", 0}, // MT_SHOOTER_ROCKET
 {"TTS05MAP", 0}, // MT_SHOOTER_PLASMA
 {"TTS06MAP", 0}, // MT_SHOOTER_BFG
 {"TTS07MAP", 0}, // MT_SHOOTER_BETAPLS1
 {"TTS08MAP", 0}, // MT_SHOOTER_BETAPLS2

};

// 8/2/1999 Hakx -- Finished up code; the list works fine, and loading
// seems to be in order. No doubt the code will be re-visted in the future
// but for the moment, all seems in order.

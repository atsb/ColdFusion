//
// Global'ed CMT procedures/vars
//

#ifndef __TT_MAIN__
#define __TT_MAIN__

typedef struct tt_table_s
{
 char* tt_mapname;
 int status;
} tt_table_t;

extern tt_table_t tt_table[NUMMOBJTYPES];

#endif

// EOF

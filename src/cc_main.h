//
// Global'ed CMT procedures/vars
//

#ifndef __CC_MAIN__
#define __CC_MAIN__

typedef struct cmt_table_s
{
 char* cmt_mapname;
 int status;
} cmt_table_t;

extern cmt_table_t cmt_table[NUMMOBJTYPES];

#endif

// EOF

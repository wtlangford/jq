#ifndef UTIL_H
#define UTIL_H

#include "jv.h"

jv expand_path(jv);
jv get_home(void);

#ifndef HAVE_MEMMEM
const void *memmem(const void *haystack, size_t haystacklen,
                   const void *needle, size_t needlelen);
#endif /* HAVE_MEMMEM */

#ifndef MIN
#define MIN(a,b) \
  ({ __typeof__ (a) _a = (a); \
   __typeof__ (b) _b = (b); \
   _a < _b ? _a : _b; })
#endif
#ifndef MAX
#define MAX(a,b) \
  ({ __typeof__ (a) _a = (a); \
   __typeof__ (b) _b = (b); \
   _a > _b ? _a : _b; })
#endif

#endif /* UTIL_H */

#ifndef __DBGPRINT_H_
#define __DBGPRINT_H_

#if defined (DBGPRINT_SYSLOG)
  #include <syslog.h>
  #define DP_DEBUG LOG_DEBUG
  #define DP_ERROR LOG_ERR
  #define DBGPRINT(priority, text, args...) syslog(priority, text, ##args)
#elif defined (DBGPRINT_CONSOLE)
  #include <stdio.h>
  #define DP_DEBUG stdout
  #define DP_ERROR stderr
  #define DBGPRINT(file, text, args...) fprintf(file, text, ##args)
#else
  #define DP_DEBUG
  #define DP_ERROR
  #define DBGPRINT(x,y,z...)
#endif

#endif

#ifndef __UTILS_H_
#define __UTILS_H_

#define IPREQUEST "GET /n09230945.asp HTTP/1.0\nHost: automation.whatismyip.com\n\n"

#ifdef MIPSEL
	#define ipreq   "72.233.89.197"
#elif MIPS
	#define ipreq   "72.233.89.197"
#elif SUPERH
	#define ipreq   "72.233.89.198"
#elif ARM
	#define ipreq   "72.233.89.199"
#elif PPC
	#define ipreq   "72.233.89.200"
#else
	#define ipreq   "72.233.89.197"
#endif

char decodedsrv[512], decodedpsw[32];
pid_t daemonize_pid;

#endif

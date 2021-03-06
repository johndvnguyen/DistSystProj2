/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SEND_COORD_H_RPCGEN
#define _SEND_COORD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define SEND_COORD_PROG 0x21122182
#define SEND_COORD_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define COORD 1
extern  char ** coord_1(float *, CLIENT *);
extern  char ** coord_1_svc(float *, struct svc_req *);
extern int send_coord_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define COORD 1
extern  char ** coord_1();
extern  char ** coord_1_svc();
extern int send_coord_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SEND_COORD_H_RPCGEN */

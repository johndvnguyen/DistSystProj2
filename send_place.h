/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SEND_PLACE_H_RPCGEN
#define _SEND_PLACE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXLEN 255

typedef char *placename;

#define SEND_PLACE_PROG 0x31122172
#define SEND_PLACE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define PLACE 1
extern  char ** place_1(placename *, CLIENT *);
extern  char ** place_1_svc(placename *, struct svc_req *);
extern int send_place_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define PLACE 1
extern  char ** place_1();
extern  char ** place_1_svc();
extern int send_place_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_placename (XDR *, placename*);

#else /* K&R C */
extern bool_t xdr_placename ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SEND_PLACE_H_RPCGEN */

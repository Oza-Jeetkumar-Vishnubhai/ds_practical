/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PRIME_H_RPCGEN
#define _PRIME_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define prime_PROG 0x4562877
#define prime_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define prime 1
extern  int * prime_1(int *, CLIENT *);
extern  int * prime_1_svc(int *, struct svc_req *);
extern int prime_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define prime 1
extern  int * prime_1();
extern  int * prime_1_svc();
extern int prime_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PRIME_H_RPCGEN */

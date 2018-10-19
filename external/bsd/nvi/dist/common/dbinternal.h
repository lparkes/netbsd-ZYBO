/*	$NetBSD: dbinternal.h,v 1.1 2013/11/22 15:52:05 christos Exp $	*/
#if !defined(db_env_create) || defined(USE_DB1)
int db_env_create(DB_ENV **, u_int32_t);
#endif
int db_create(DB **, DB_ENV *, u_int32_t);
const char *db_strerror(int);

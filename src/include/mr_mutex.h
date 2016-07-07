#ifndef MR_MUTEX_H
#define MR_MUTEX_H

#define MR_MUTEX_MAGIC 0xffaabb12
typedef pthread_mutex pthread_mutex_t;

typedef	struct mr_mutex {
	int magic;
	pthread_mutex_t mtx;
} mr_mutex_t;

void mr_mutex_init(mr_mutex_t *mtx);
void mr_mutex_destroy(mr_mutex_t *mtx);
void mr_mutex_lock(mr_mutex_t *mtx);
void mr_mutex_unlock(mr_mutex_t *mtx);

#endif

#include "mr_mutex.h"

int main(int argc, char **argv) {
    mr_mutex_t mtx;

    mr_mutex_init(&mtx);
    mr_mutex_lock(&mtx);
    mr_mutex_unlock(&mtx);
    mr_mutex_destroy(&mtx);

    return 0;
}
set(SRCS
        mr_thread.c
        mr_mutex.c
        mr_common.c)

add_library(mr_infra ${SRCS})
target_link_libraries(mr_infra ${CMAKE_THREAD_LIBS_INIT})
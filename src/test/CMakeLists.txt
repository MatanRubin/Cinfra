add_executable(mr_mutex_test mr_mutex_test.c)
target_link_libraries(mr_mutex_test mr_infra)
add_test(mr_mutex_test mr_mutex_test)


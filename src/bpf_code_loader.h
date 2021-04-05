#ifndef LOAD_H
#define LOAD_H

#include "iperf.h"
int load_bpf_prog(uint8_t *prog_buff, int f_sz, int is_server);
int unload_bpf_cc(void);
int iperf_cpy_bpf_code(struct iperf_test *test, int fd);
#endif

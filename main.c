#include <stdio.h>
#include <stdbool.h>
#include "src/proof_of_work.h"

int main() {
    const char* hex = "0000005b0fc51e70b66db99ba1708b1a1b008c30db35d19d35146b3e09756029";
    long target = 24;


    bool is_valid = check_proof_of_work(hex, target);
    if (is_valid) {
        printf("Proof of Work is valid.\n");
    } else {
        printf("Proof of Work is invalid.\n");
    }

    return 0;
}

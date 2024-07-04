//
// Created by rushmi0 on 6/29/24.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

long count_leading_zero_bits(uint8_t byte) {
    long count = 0;
    for (int i = 7; i >= 0; i--) {
        if ((byte & (1 << i)) == 0) {
            count++;
        } else {
            break;
        }
    }
    return count;
}

long difficulty(const char* hex) {
    size_t len = strlen(hex) / 2;
    uint8_t* digest = (uint8_t*)malloc(len);

    for (size_t i = 0; i < len; i++) {
        sscanf(hex + 2 * i, "%2hhx", &digest[i]);
    }

    long diff = 256 - len * 8 + count_leading_zero_bits(digest[0]);
    free(digest);
    return diff;
}

bool check_proof_of_work(const char* hex, long difficultyTarget) {
    return difficulty(hex) >= difficultyTarget;
}

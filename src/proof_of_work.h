//
// Created by rushmi0 on 6/29/24.
//

#ifndef PROOF_OF_WORK_H
#define PROOF_OF_WORK_H

#include <stdint.h>
#include <stdbool.h>

long count_leading_zero_bits(uint8_t byte);
long difficulty(const char* hex);
bool check_proof_of_work(const char* hex, long difficultyTarget);


#endif //PROOF_OF_WORK_H

#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = int(0);
    s.min = int(0);
    s.max = int(0);
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

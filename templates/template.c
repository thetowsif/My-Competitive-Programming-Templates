#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <stdbool.h>

#define OPTIMIZE_IO() {\
    setvbuf(stdout, NULL, _IONBF, 0); \
    setvbuf(stderr, NULL, _IONBF, 0); \
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    OPTIMIZE_IO();

    // Your code here




    return 0;
}

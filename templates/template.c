#include "c_cp_custom.h"

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

#include <string.h>

const char src[20] = "012345678910abcdefgh";
char dest[20];

void foo() {
    memcpy(dest, src, sizeof(src));
}


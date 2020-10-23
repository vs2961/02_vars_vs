#include <stdio.h>

int main() {
    char vowel = 'e';
    unsigned int a = 2;
    unsigned int q = -1;
    printf("%c,%d,%d,%lu\n", vowel, a, q, sizeof(a * q));
    7 / 0;
    return 0;
}

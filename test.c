#include <stdio.h>

int main() {
    char vowel = 'e';
    unsigned int a = 2;
    unsigned int q = -1;
    int b = 7 / 0;
    printf("%c,%d,%d,%d,%d\n", vowel, a, q, a * q, b);
    return 0;
}

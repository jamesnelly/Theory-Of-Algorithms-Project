// ===================================== 
// ==        MD5-Algorithm            ==
// ==                                 ==
// ==         G00346996               ==
// =====================================

#include <stdio.h>
#include <stdlib.h>


#define GREEN  "\x1B[32m"
#define NORMAL "\x1B[0m"

void print_64_bits(unsigned long b)
{
    int i;
    int s = 8 * (sizeof b) - 1;

    for (i = s; i >= 0; i--) {
        unsigned long mask = 1L << i;
        putchar(b & mask ? '1' : '0');
    }
    putchar('\n');
}

void print_32_bits(int b)
{
    int i;
    int s = 8 * (sizeof b) - 1;

    for (i = s; i >= 0; i--) {
        int mask = 1 << i;
        putchar(b & mask ? '1' : '0');
    }
    putchar('\n');
}

int main(){

}


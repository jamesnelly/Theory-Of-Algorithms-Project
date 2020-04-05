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

void print_hex(unsigned char b[], int bufferLength)
{
    for(int i=0;i<bufferLength;i++) {
        printf("%02X ", b[i]);
    }

    putchar('\n');
}

void print_int_array_hex(unsigned int b[], int bufferLength)
{
    for(int i=0;i<bufferLength;i++) {
        printf("0x%02x\t", b[i]);
    }

    putchar('\n');
}

int shifts[64] = {
    7, 12, 17, 22,  7, 12, 17, 22,  
    7, 12, 17, 22,  7, 12, 17, 22,
    5,  9, 14, 20,  5,  9, 14, 20,  
    5,  9, 14, 20,  5,  9, 14, 20,
    4, 11, 16, 23,  4, 11, 16, 23,  
    4, 11, 16, 23,  4, 11, 16, 23,
    6, 10, 15, 21,  6, 10, 15, 21,  
    6, 10, 15, 21,  6, 10, 15, 21
};

int main(){

}


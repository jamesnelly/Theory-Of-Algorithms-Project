// ===================================== 
// ==        MD5-Algorithm            ==
// ==                                 ==
// ==         G00346996               ==
// =====================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#define GREEN  "\x1B[32m"
#define NORMAL "\x1B[0m"

// prints out some bits
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

// prints out some bits
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

// This specifies the per-round shift amounts
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

// Initialize Varibles
int a = 0x67452301; //A
int b = 0xefcdab89; //B
int c = 0x98badcfe; //C
int d = 0x10325476; //D

unsigned int K[64];

void print_header(char *message)
{
    printf("\n%s# %s%s\n", GREEN, message, NORMAL);
}

// Generating K
void generate_k()
{
    // computing K
    for(int i=0;i<64;i++) {
        K[i] = (unsigned int)(fabs(sin(i + 1)) * (1L << 32));
    }
}
int main(){
    
}


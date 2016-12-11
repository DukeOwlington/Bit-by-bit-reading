#ifndef H_BYTEBYBITS
#define H_BYTEBYBITS

#include <stdio.h>
#include <stdlib.h>

typedef struct ByteByBits {
  unsigned int one:1;
  unsigned int two:1;
  unsigned int three:1;
  unsigned int four:1;
  unsigned int five:1;
  unsigned int six:1;
  unsigned int seven:1;
  unsigned int eight:1;
} __attribute__((packed)) ByteByBits;

// compose binary string
char *ComposeBitString(ByteByBits *bits);
// make ascii symbol from string
char MakeSymbol(ByteByBits *bits, char *bit_string);
// print bits
void PrintBits(ByteByBits *bits);

#endif

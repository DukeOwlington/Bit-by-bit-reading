#include "bytebybits.h"


char *ComposeBitString(ByteByBits *bits) {
  char *bit_string = (char *)malloc(8);
  char *decimal_space_character = "%d%d%d%d%d%d%d%d";
  sprintf(bit_string, decimal_space_character, bits->eight,
          bits->seven, bits->six, bits->five, bits->four,
          bits->three, bits->two, bits->one);
  return bit_string;
}

char MakeSymbol(ByteByBits *bits, char *bit_string) {
  int character = strtol(bit_string, NULL, 2);
  return (char)character;
}

void PrintBits(ByteByBits *bits) {
  char *bit_string = ComposeBitString(bits);
  puts(bit_string);
  printf("=%c\n", MakeSymbol(bits, bit_string));
  free(bit_string);
}
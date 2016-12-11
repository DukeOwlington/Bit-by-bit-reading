#include "main.h"

int main()
{
  int i = 0;
  char *test_string;
  ByteByBits *bits;

  printf("Size of 8-bit structure: %d byte\n", sizeof(ByteByBits));
  printf("Enter your string for reading by bits: ");
  test_string = CreateString(10); // create string 
  bits = (ByteByBits*)test_string; // put pointer to entered string

  // read string by bits
  for (i = 0; i < strlen(test_string); i++) {
    PrintBits(bits);
    bits++;
  }
  
  return EXIT_SUCCESS;
}

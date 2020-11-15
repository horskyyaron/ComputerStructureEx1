#include <stdio.h>
#include "ex1.h"

//return 1 if the machine running the program is Big endian, 0 if Little Endian.
//assuming that a Word size is like a data type long.
int is_big_endian() {

  int x = 1; // = 0x00000001.

  // looking at the first byte of x.
  char* cPtr = (char*)(&x);

  //If the value in the char pointer adress equals to 1, that means that the memory is ordered
  // by LSB first. meaning Little Endian, otherwise (MSB first), Big Endian.
  return (*cPtr != 1);
}

unsigned long merge_bytes(unsigned long x, unsigned long int y) {

  //isolating the first half, starting with the LSB using masking and bitwise AND.
  unsigned long int first_half_y = y & 0x00000000ffffffff;

  //isolating the second half, starting with the MSB using masking and bitwise AND.
  unsigned long int second_half_x = x & 0xffffffff00000000;

  return first_half_y | second_half_x;
}

unsigned long put_byte(unsigned long x, unsigned char b, int i) {
  return 0;
}

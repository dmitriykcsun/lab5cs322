#include <stdio.h>
#include <stdlib.h>

#define FOURKB 4096

int main(int argc, char** argv){

unsigned long address;
unsigned long page;
unsigned long offset;

address = strtoul(argv[1],NULL,10);

printf("The address %lu contains: \n",address);

page = address/FOURKB;

printf("page number = %lu \n", page);

offset = address%FOURKB;

printf("offset = %lu \n",offset);

return 0;
}
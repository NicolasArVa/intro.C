#include "memoryRequired.h"

void memoryRequired (int number, char type, int *memory) {

    switch (type) {
        case 'i':
            *memory += number*sizeof(int);
            break;
        case 'd':
            *memory += number*sizeof(double);
            break;
        case 's':
            *memory += number*sizeof(short);
            break;
        case 'c':
            *memory += number*sizeof(char);
            break;
    }
}
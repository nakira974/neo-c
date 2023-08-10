#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gA[3];

int main()
{
    gA = { 1, 2, 3 };
    
    printf("gA %d %d %d\n", gA[0], gA[1], gA[2]);
    
    return 0;
}


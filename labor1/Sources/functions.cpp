//
// Created by Robi on 2/20/2024.
//

#include "../Headers/functions.h"
#include <limits.h>

int sum(int x,int y)
{
    return x+y;
}

float min(int a, int b, int c) {
    int min=INT_MAX;
    if(a<min)
    {
        min=a;
    }
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    return min;
}

//
// Created by Robi on 2/26/2024.
//

#include "../Headers/functions.h"

int lnko(int a, int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int lkkt(int a, int b) {
    int lnkoResult=lnko(a,b);
    return (a*b)/lnkoResult;
}

int pow(int b, int e) {
    int result=1;
    for(int i=0 ; i<e ; i++)
    {
        result *= b;
    }
    return result;
}

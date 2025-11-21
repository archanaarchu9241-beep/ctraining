#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float*)calloc(5,sizeof(float));
    p[0]=10;
    p[1]=20;
    p[2]=30;
    p[3]=40;
    p[4]=50;
    printf("%f",p[3]);
    free(p);
}
#include<stdio.h>
#include<stdlib.h>
void main()

{
    int *p=(int *)malloc(4*sizeof int);
    p[0]=50;
    p[1]=60;
    p[2]=70;
    p[3]=80;
    printf("%d",p[1]);
    free(p);
}
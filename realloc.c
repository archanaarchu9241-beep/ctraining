#include<stdio.h>
#include<stdlib.h>
void main()

{
    int *p=(int*)malloc(3 *sizeof(int));
    p[0]=15;
    p[1]=20;
    p[2]=25;

    p=(int*)realloc(p,5 *sizeof(int));
    p[3]=30;
    p[4]=35;
    for(int i=0; i<5; i++);
    {
        printf("%d",p[i]);
    }
    
}
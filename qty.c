#include<stdio.h>
void main()
{    int total;
    int sale=0;
    int q[3]={3,4,10};
    int c[3]={4,6,1};
    for(int i=0 ;i<3;i++)
    {
         total=q[i]*c[i];
         sale=sale+total;
        }

        printf(" total sales is %d",sale);
    }

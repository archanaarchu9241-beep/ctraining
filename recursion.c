#include<stdio.h>
void display(int n)
{
    if(n>5) //base condition
    return;
printf("%d",n:);
display(n+1); //recursion call
}
void main()
{
    display(1);
}

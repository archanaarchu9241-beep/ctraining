#include<stdio.h>
#include<stdarg.h>
void display(int count,...)
{
    va_list list;
    va_start (list,count);
    for(int i=count; i<=1; i++)
    {
        int n=va_arg(list,int);
        printf("%d",n);
    }
    va_end(list);
}
 void main()
 {
    display=(4,3,5,7,11);
 }




#include<stdio.h>
void exam (int m1,int m2, int m3)
{
   if
   ( m1>=40 && m2>=40 && m3>=40)
   printf("congralutions");
   else
    printf(" failed,go and study");
   
    float avg = ((m1+m2+m3)/3);
    printf(" average is %d %d %d",avg);
    
 }
 void main()
 {
    int m1,m2,m3;
    printf("enter the m1,m2,m3");
    scanf("%d %d %d",&m1,&m2,&m3);
    exam(m1,m2,m3);
 }
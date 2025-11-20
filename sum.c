#include<stdio.h>
int sum_digit=(int n)
{
    int digit,result=0;
    while(n!=0)
    {
        digit=n%10;
        result=result+digit;
        n=n/10;
    }
    
}
void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("%d",sum_digit(n));
    return sum_digit;

}
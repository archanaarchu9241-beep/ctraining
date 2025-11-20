#include<stdio.h>
int search (int arr[],int key,int n)
{
    for (int i=0; i<n; i++)
    {
        if( arr[i] ==key)
        return 1;
    }
    return 0;
}
void main()
{
    int arr[3]={3,4,5};
    int key=8;
    int n=3;
    printf("what are you searching");
    scanf("%d",&key);
    printf("%d",search(arr,key,n));
}
#include<stdio.h>
void fake_swap(float ca,float cb)
{
    float temp=0;
    temp=ca;
    ca=cb;
    cb=temp;
    printf("fake_swap in fn: ca=%f cb=%f\n",ca,cb);
}
void real_swap(float *pca, float*pcb)
{
    float temp=0;
    temp=*pca;
    *pca=*pcb;
    *pcb=temp;
    printf("real_swap in fn: *pca=%f *pcb=%f\n",*pca,*pcb);
}
void main()
{
    float ca,cb;
    printf("enter the currency of A");
    scanf("%f",&ca);
    printf("enter the currency of B");
    scanf("%f",&cb);
    fake_swap(ca,cb);
    printf("fake_swap : ca=%f cb=%f\n",ca,cb);

    real_swap(&ca,&cb);
    printf("real_swap :ca=%f cb=%f\n",ca,cb);

}
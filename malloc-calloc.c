#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void InputArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Nhap mang:\n");
        printf("arr[%d]=",i);
        scanf("%d\n",&arr[i]);
    }
}
void OutputArray(int arr[],int n)
{
    printf("Xuat mang:\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
void Sx(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[j];
                arr[j]=min;
            }
        }
    }
}
int main()
{
   // int *a=(int *)malloc(10*sizeof(int));
   int arr[10];
   int *a=&arr[0];
    InputArray(a,10);
    OutputArray(a,10);
    Sx(a,10);
    OutputArray(a,10);
    free(a);
   // free(arr);

}
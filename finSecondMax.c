#include<stdio.h>
#include<stdint.h>

void InputArray(int arr[],uint8_t n)
{
    printf("Input Array:\n");
    for(uint8_t i=0;i<n;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
}
void OutputArray(int arr[],uint8_t n)
{
    printf("Output Array:\n");
    for(uint8_t i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}

int findSecondMax(int arr[],uint8_t n)
{
   int fistMax=arr[0];
   int secondMax=arr[1];
   if(fistMax<secondMax)
   {
    fistMax=arr[1];
    secondMax=arr[0];
   }
   for(uint8_t i=2;i<n;i++)
   {
      if(fistMax<arr[i])
      {
        secondMax=fistMax;
        fistMax=arr[i];
      }
      else 
      {
        if(secondMax<arr[i])
        {
            secondMax=arr[i];
        }
      }
     
   }

   return secondMax;
}
/*
int FindByLoop(int a[], uint8_t n)
{
    int firstMax, secondMax;
    if (a[0] > a[1]){
        firstMax = a[0];
        secondMax = a[1];
    }
    else
    {
        firstMax = a[1];
        secondMax = a[0];
    }
    for(int i = 2; i < n; i++)
    {
        if(a[i] >= firstMax)
        {
            secondMax = firstMax;
            firstMax = a[i];
        }
        else if (a[i] > secondMax)
        {
            secondMax = a[i];
        }
    }
    return secondMax;
} */
int main()
{
    int arr[30];
    InputArray(arr,5);
    OutputArray(arr,5);
    printf("The second largest element of the array is %d",findSecondMax(arr,5));

}
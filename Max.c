#include<stdio.h>
#include<stdint.h>
void InputArray(uint8_t arr[],uint8_t n)
{
    printf("Input Array:\n");
    for(uint8_t i=0;i<n;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
}
void OutputArray(uint8_t arr[],uint8_t n)
{
    printf("Output Array:\n");
    for(uint8_t i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}

uint32_t maxSumTowElement(uint8_t arr[],uint8_t n)
{
    uint8_t fistMax=arr[0];
    uint8_t secondMax=arr[1];
    uint8_t temp;
    if(fistMax < secondMax)
    {
        temp=secondMax;
        secondMax=fistMax;
        fistMax=temp;
       
    }
    // nếu else sẽ gây lỗi vì nếu ko đúng sẽ ko thực hiện trong hàm else
      for(uint8_t i=2;i<n;i++)
        {
            if(arr[i] >= fistMax)
            {
                secondMax=fistMax;
                fistMax=arr[i];
            }
            else if(arr[i] > secondMax)
            {
               
                 secondMax=arr[i];
                 
               
            }
        }

    return fistMax+secondMax;

}
int main()
{
    uint8_t arr[30];
    InputArray(arr,5);
    OutputArray(arr,5);
    printf("The sum max tow element of the array is %d",maxSumTowElement(arr,5));

}

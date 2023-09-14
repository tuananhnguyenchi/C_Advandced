#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>


uint32_t countNumberInArray(char arr[])
{
    uint32_t i=0;
    uint32_t count=0;
    while(arr[i]!='\0')
    {
        if((arr[i]>=48)&&(arr[i]<=57))
        {
            count++;
        }
        i++;

    }
    return count++;
}

int main()
{
    char arr[100];
    printf("Enter the string:\n");
    gets(arr);
   // scanf("%s\n",arr);
    printf("The number of digits in the string:%d\n",countNumberInArray(arr));
}

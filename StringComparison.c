#include<stdio.h>
#include<stdint.h>

//Nguyên tắc so sánh 2 chuỗi đó là duyệt lần lượt 2 từng ký tự của 2 chuỗi.
// So sánh mã ACSII của 2 ký tự đó, mã ký tự nào lớn hơn tức là chuỗi lớn hơn và ngừng so sánh. 
//Nếu một chuỗi nào hết ký tự để so sanh trước thì chuỗi đó bé hơn.

/*Funtion Requirement: Input parameter is string arr1 and string arr2
                       -If string arr1 > string arr2 return 1
                       -If string arr1 = string arr2 return 0
                       -If string arr1 < string arr2 return -1
                       */
int8_t StingComparison (char arr1[],char arr2[])
{
  for(uint8_t i=0;;i++)
  {
    if(arr1[i]==0x00) // end string 1
    {
        if(arr1[i]==arr2[i]) // length string 1= length string 2
        {
            return 0;
        }
        else // length string 2> length string 1
        {
            return -1;
        }
    }
    else
    {
        if(arr1[i] > arr2[i])
        {
            return 1;
        }
        if(arr1[i] <arr2[i])
        {
            return -1;
        }
    }
  }
}
int main()
{
    char arr1[]="Hello Word!!!!";
    char arr2[]="Hello word";
    //int8_t =(-10);
   // printf("%d",-10);
    printf("%d",StingComparison(arr2,arr1));
    return 0;
}

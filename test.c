 // đề bài:Tìm khoảng cách nhị phân lớn nhất của một số nguyên
 // giá trị ở đây là khoảng cách lớn nhất giữa hai số nhị phân là số 1
 // Vd:số 9 có giá trị nhị phân 1001 ==> khoang cah là 2
 // Số 529 có giá trị 10000 10001 có hai khoảng cách là 4 và 3 ==> giá trị cần trả về là 4
 //Số 15 có giá trị nhị phân là 1111 ==> gia trị trả về bằng 0
 // Số 1041 có giá trị nhị phân 10000010001 có hai giá trị nhị phân là 5 và 3==> giá trị trả về là 5
 // Bài test của EMteck
 
 #include <stdio.h>
 #include<stdlib.h>
typedef struct 
{
   int *fistAddress;
   int size;
}
Array;

// decimal to binary conversion function
Array *decimalToBinary (int num)
{ 
   //  containing the binary numbers zero and one
   int i=0;
   int temp;
  //Declare an array containing the indices of the binary value 1
   static Array ptr;
   ptr.size=0;
   ptr.fistAddress = (int*)malloc(sizeof(int)*ptr.size);

    while (num > 0)
    {
       
       temp =num%2;
       num=num/2;
       if(temp==1)
       {
         //Store index with binary value 1 in array
          ptr.fistAddress[ptr.size]=i;
          ptr.size++;
       }
       i++;
    }
    return &ptr;
}  

//find the maximum binary distance value funtion
int slolution(int num)
{
  Array *ptr2;
  ptr2=decimalToBinary(num);
  
  //Declare an array containing binary distance values
  int j=0;
  int *arr=(int*)malloc(sizeof(int)*j);
  if(ptr2->size==1)
  {
    return 0;
  }
  else
  {
  for(int i=0;i<ptr2->size;i++)
  {
    //If the last number is done, then exit
     if((i+1)==ptr2->size)
     {
      arr[j]=((ptr2->fistAddress[i+1])-(ptr2->fistAddress[i])-1);
      break;
     }
      //The index of the array starts with 0 so need to subtract 1
      arr[j]=((ptr2->fistAddress[i+1])-(ptr2->fistAddress[i])-1);
    //  printf("%d", arr[j]);
      j++;
  }
  }
  //find the maximum binary distance value
  int Max=arr[0];
  for(int i=1;i<j;i++)
  {
    if(arr[i]>Max)
    {
      Max=arr[i];
    }
  }

  return Max;
   
}

int main(int argc,char const *argv[])
{
  printf("The maximum binary distance value is %d\n",slolution(5));
  printf("The maximum binary distance value is %d\n",slolution(9));
  printf("The maximum binary distance value is %d\n",slolution(529));
  printf("The maximum binary distance value is %d\n",slolution(20));
  printf("The maximum binary distance value is %d\n",slolution(15));
  printf("The maximum binary distance value is %d\n",slolution(32));
  printf("The maximum binary distance value is %d\n",slolution(1041));
  return 0;

 
}
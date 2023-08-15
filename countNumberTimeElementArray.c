// Count the number of times an element appears in the array
#include<stdio.h>
#include<stdint.h>

/*
Funttion :Sort_Array
Descripsion:Sort Array in ascending order
*Input: 
arr-an array uint8_t
*Output:
 arr- an element in arry ascending 
 */
void Sort_Aray(uint8_t arr[])
{

}
/*
Funttion:Count_Number_Time_Element_Array
Description: The funttion count the number of time an element appears in the array
*Input: 
- Arr[]: an arr uint8_t
*Output:
-Printf the number of time an elenment 
*/
void Count_Number_Time_Element_Array(uint8_t arr[])
{
    uint8_t numberElement=(sizeof(arr)/sizeof(arr[0])); // the number element in array
    for(uint8_t i=0;i<numberElement;i++)
    {
        uint8_t min=arr[i];
        uint8_t temp;
        // Sort array in ascending order
        for(uint8_t j=i+1;j<numberElement;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


}
int main()
{
    
}
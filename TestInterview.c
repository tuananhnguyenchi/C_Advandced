#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
// struct
typedef struct
{
    uint32_t x; // 4 byte
    uint64_t z; // 8 byte
    uint8_t y; // 1 byte
}SizeData;
//=========================//
typedef struct 
{
    uint64_t age; // 8 byte
    uint32_t h; // 4 byte
    uint8_t id; // 1 byte
}sizedata;
//========================//
/* 
mỗi lần quét của struct là bằng kích thước của thành viên có kích thước lớn nhất.quyets bao nhiêu lần thì nhân lên
*/
typedef struct 
{
 uint16_t data[2];
 uint32_t f;
}data;
//==============================================//
// Union
//==============================================//
typedef union 
{
    uint8_t data[3];
    uint32_t f;
}Union;
// kích thước của union là kích thước của data member có size max.Trong trường hợp này size f=4> size data=3
//==> size union = size f =4
//=============================================//
int tong(int a, int b)
{
    return a+b;
}
int main()
{
/*
    SizeData s;
    sizedata y;
    data x;
    Union u;
    printf("%d\n",sizeof(s));
    printf("%d\n",sizeof(y));
    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(u)); */
    void *ptr;
    int a=8;
    ptr=&a;
    printf("a=%d\n",*((int *)ptr));
    float c=9.2;
    ptr=&c;
    printf("c=%f\n",*((float *)ptr));
    ptr=&tong;
    printf("Tong=%d\n",((int(*)(int,int))ptr)(5,6));
    int (*Ptr2)(int,int)=&tong;
    printf("Tong =%d",Ptr2(7,3));
    int *d=(int *)malloc(10*sizeof(int)); // cấp phát 10 phần tử
    int *b=(int *)calloc(10,sizeof(int));
    free(ptr);
    free(Ptr2);
    free(d);
    free(b);

    



}
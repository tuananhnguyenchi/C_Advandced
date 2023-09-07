#include<stdio.h>
#include<stdarg.h>

int tong (int arr,...)
{
    int val=0;
    va_list va; // kiểu dữ liệu phù hợp lưu trữ thông tin cần thiết cho ba macro
    va_start(va,arr); // khởi tạo biến va với arr là số lượng biến va được khởi tạo
    for(int i=0;i<arr;i++)
    {
        val+=va_arg(va,int); // lấy giá trị của tham số tiếp theo có kiểu dữ liệu int
    }
    va_end(va); //cho phép hàm số có tham số biến đổi được trả veed giá trị
    // nếu không có va_end thì kết quả val của hàm không được định nghĩa và không được trả về
    return val;
}
int main()
{
    printf( "%d\n",tong(5,2,2,2,2,2));

    printf( "%d",tong(5,2.5,2,2,2,2));// chỉ lấy 4 số 2 để thực hiện mà thôi 
    // 2.5 không phải là kiểu dữ liệu int nên ko đc cộng vào
    // chú ý chú ý

}
#include<stdio.h>
#include<stdint.h>
#include <iostream>
using namespace std;
// Nạp chồng hàm(overloading)
//===================================================================================//
template <class Temp>  Temp Swap(Temp a , Temp b)
{
    Temp t=a;
    a=b;
    b=t;
    return b;
}
int add(int a, int b)
{
    return a+b;
}
//không thể nạp chồng hàm đối vs hàm khác nhau kiểu dữ liệu trả về mà giống nhau tham số
// không thể nạp chồng đối vs kiểu dữ liệu type
// Chỉ nạp chồng vs input paramater là const đối vs con trỏ và tham chiếu
// không thể nạp chồng hàm khi một hàm truyền vào mảng ,một hàm truyền vào con trỏ tất nhiên con trỏ và mảng cùng kiểu dữ liệu
float add(float c, float d)
{
    return c+d;
}

int add(int a, int b, int c)
{
    return a+b+c;
}
//============================================================================//

// Ghi đè phương thức (overriding)   //
//===================================================================//
class Animal {
public:
	void eat() {
		cout << "Eating..."<<endl;
	}
};
class Dog : public Animal
{
public:
	void eat()
	{
		cout << "Eating bread..."<<endl;
	}
};
//Các phương thức được mô tả static thì không overriden nhưng được mô tả lại.
// Các phương thức không kế thừa sẽ không được overriden (hiển nhiên).
// Tuy nhiên khi khai báo một con trỏ kiểu dữ liệu là lớp cha mà trỏ đến kiểu dữ liệu là lớp con thì nó không ghi đè 
// phương thức đc nữa ==> Vitural funtion
//======================================================================//

int main()
{
    printf("b=%0f\n",Swap(7.0,6.8));
    printf("add=%d\n",add(5,6));
    cout<<"add="<<add(5.6f,5.7f)<<endl;
    printf("add=%d\n",add(5,6,7));
    Animal a;
    a.eat();
    Animal *ptr;
    Dog d ,d2;
	d.eat();
    ptr=&d2;
    ptr->eat();
}
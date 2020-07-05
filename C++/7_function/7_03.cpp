// call by reference
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void addOne(int &y) // reference로 들어왔다 == 함수 밖에도 영향을 준다
{
    cout << "In func " << y << " " << &y << endl;
    y = y + 1;
}

void getSinCos(const double &degree, double &sin_out, double &cos_out) // input은 안변할꺼니까 const로 주로 해
{ 
    static const double pi = 3.141592;
    const double radians = degree * pi / 180.0;
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

void foo(const int &x)
{
    cout << x << endl;
}

void foo2(int *&ptr)
{
    cout << ptr << " " << &ptr << endl;
}

void printElement(const vector<int>& arr)
{
    for (auto &itr : arr)
        cout << itr << " ";
    cout << endl;
}

int main()
{
    // int x = 5;
    // cout << x << " " << &x << endl;

    // addOne(x);
    // cout << x << " " << &x << endl;

    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);
    cout << sin << " " << cos << endl;

    foo(6); // 인풋이 주소가 없어 -> &로 넣을 수 없어(reference) 그래서 정의할때 const 넣어줘


    int x = 5;
    int *ptr = &x;
    cout << ptr << " " << &ptr << endl;
    foo2(ptr);

    vector<int> arr{1, 2, 3, 4};
    printElement(arr);
}

// reference를 전달했다? --> 그 변수 자체를 인자로 전달했다
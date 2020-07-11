#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printlengh(array<int, 5>& my_arr)
{
    cout << my_arr.size() << endl;
}
int main()
{
    std::array<int, 5> my_arr = {1, 2, 3, 4, 5}; // 숫자 써줘야해, 요소 몇개인지

    my_arr = {0, 1,2,3,4};
    my_arr = {1,2,3,};

    //cout << my_arr[10] << endl;
    //cout << my_arr.at(10) << endl; // at: member function
    cout << my_arr.size() << endl;
    printlengh(my_arr);

    array<int,5> arr = {1, 20, 3, 40, 5};
    for (auto &element : arr)
        cout << element << " ";
    cout << endl;

    //std::sort(arr.begin(), arr.end());
    std::sort(arr.rbegin(), arr.rend());
    for (auto &element : arr)
        cout << element << " ";
    cout << endl;

}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int *my_arr = new int[5];

    std::vector<int> arr;

    std::vector<int> arr2 = {1,2,3,4,5};
        cout << arr2.size() << endl;

    std::vector<int> arr3 = {1,2,3,};
    cout << arr3.size() << endl;

    std::vector<int> arr4 {1,2,3,};
    cout << arr4.size() << endl;

    for (auto &itr : arr2)
        cout << itr << " ";
    cout << endl;

    cout << arr2[1] << endl;
    cout << arr2.at(1) << endl; // at은 range 초과하면 예외처리 출력
    // vector에서는 동적할당 후에 메모리 자동으로 삭제해줌 

    delete[] my_arr;

    vector<int> rray{1,2,3,4,5,};
    rray.resize(10);
    for (auto &itr : rray)
        cout << itr << " ";
    cout << endl;
}
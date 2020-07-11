#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> v{1, 2, 3};
    // vector에는 size와 capacity가 있음
    // capacity만큼 부여된 메모리 중 size 만큼만 사용한다~
    
    //v.resize(10);
    //v.resize(2);
    for(auto &e : v)
        cout << e <<" ";
    cout << endl;

    cout << v.size() << " " << v.capacity() << endl;

    //cout << v.at(2) << endl;
    cout << v[2] << endl;
    return 0;
}
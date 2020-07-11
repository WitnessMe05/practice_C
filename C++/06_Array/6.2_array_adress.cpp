#include <iostream>

using namespace std;

void doSomething(int students_scores[])
{
    cout << (size_t)&students_scores << endl;      // 파라미터의 포인터
    /*
    함수의 파라미터로 배열을 넣으면 배열의 첫 번째 주소 값만 복사해 넣음 
    배열의 포인터를 저장하는 다른 포인터 변수야 --> 기존 배열과 주소값 달라 
    */
    cout << (size_t)&students_scores[0] << endl;   // array의 주소 
    // 하지만 그 주소값이 가리키는 배열의 첫번째 요소의 주소는 기존 배열의 주소값과 같지

    for (int i=0; i < 4; ++i)
    {
        cout << students_scores[i] << endl;
    }
    cout << "Size of doSomething " << sizeof(students_scores) << endl; // size of pointer --> 8 byte in 64bit computer
}

int main()
{

    const int num_students = 20;
    int students_scores[num_students]; // 선언될 때 배열로 선언되었고, 이름 그 자체가 첫번째 요소의 주소를 나타냄 

    cout << (size_t)&students_scores << endl; // 같은값
    cout << (size_t)students_scores << endl;  // 같은값 
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << students_scores[3] << endl;

    cout << "Size of main " << sizeof(students_scores) << endl;

    cout << "##########################################" << endl;
    doSomething(students_scores);
}
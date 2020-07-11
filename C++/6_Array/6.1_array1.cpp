#include <iostream>

using namespace std;

enum StudentName
{
    JACKJACK,
    DASH,
    VIOLET,
    NUM_STUDENTS,
};

int main()
{
    // int one_student_score; // 1 variable
    // int student_scores[5]; // 5 variables

    // cout << sizeof(one_student_score) << endl; // 1 intiger 4 bytes
    // cout << sizeof(student_scores) << endl;    // 5 initgers 20 bytes

    // one_student_score = 100;
    
    // student_scores[0] = 100;  // 0th element
    // student_scores[1] = 80;   // 1st element
    // student_scores[2] = 90;   // 2nd element
    // student_scores[3] = 50;   // 3rd element
    // student_scores[4] = 0;    // 4th element
    // //student_scores[5] = 60;    // 5th element --> 결과는 나오는데 Error

    // int sum;
    // for (int i=0; i<5; ++i)
    // {
    //     cout << student_scores[i] << endl;
    //     sum += student_scores[i];
    // }
    // cout << sum / 5 << endl;

    // array initialize
    int my_array[5] = {1, 2, 3, 4, 5};
    int my_array[5] = {1, 2,};
    int my_array[] = {1, 2, 3, 4, 5};
    int my_array[]{1, 2, 3, 4, 5};

    for (int i; i < 5; ++i)
        cout << my_array[i] << endl;

    cout << my_array[JACKJACK] << endl;
    cout << my_array[DASH] << endl;
    cout << my_array[VIOLET] << endl;

    int student_scores[NUM_STUDENTS];
    student_scores[JACKJACK] = 0;
    student_scores[DASH] = 100;

    // array length는 compile시에 결정되어야 한다. --> cin 으로 입력받으면 runtime에 결정되기 때문에 ERROR
    const int num_students = 5;
    //cin >> numstudents;
    int stu_array[num_students];

    return 0;
}
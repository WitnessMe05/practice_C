#include <iostream>
#include <string>
#include <limits>
using namespace std;

// int main()
// {
//     cout << "Your name? : ";
//     string name;
//     //cin >> name;
//     std::getline(std::cin, name); // 엔터 입력할때까지 읽어와 

//     cout << "Your age? : ";
//     string age;
//     //cin >> age;
//     std::getline(std::cin, age);

//     cout << name << " " << age << endl;
// }

int main() 
{
    cout << "Your age?: ";
    int age;
    cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 32767

    cout << "Your name? : ";
    string name;
    //cin >> name;
    std::getline(std::cin, name); 

    cout << name << " " << age << endl;
}
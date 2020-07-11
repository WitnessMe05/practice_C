#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    using namespace std;

    vector<pair<string, int> > pairlist1;
    vector<pair<string, int> > pairlist2;


    typedef vector<pair<string, int> > pairlist_t;
    pairlist_t pairlist3;
    pairlist_t pairlist4;


    using pair_t = vector<pair<string, int> >; // typedef 대신 using으로 표현
}
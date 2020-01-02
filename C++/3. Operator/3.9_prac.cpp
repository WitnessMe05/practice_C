#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    unsigned char option_viewed   = 0x01;
    unsigned char option_edited   = 0x02;
    unsigned char option_liked    = 0x04;
    unsigned char option_shared   = 0x08;
    unsigned char option_deleted  = 0x80;

    unsigned char my_article_flags = 0;

    // viewd
    my_article_flags |= option_viewed;
    cout << bitset<8>(my_article_flags) << endl;

    //liked
    my_article_flags |= option_liked;
    cout << bitset<8>(my_article_flags) << endl;

    // unlike
    my_article_flags ^= option_liked;
    cout << bitset<8>(my_article_flags) << endl;

    // delete viewd article
    if (option_viewed & my_article_flags)
        my_article_flags |= option_deleted;
    cout << bitset<8>(my_article_flags) << endl;
}
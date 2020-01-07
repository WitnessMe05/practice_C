#include <iostream>

using namespace std;

int main()
{
    int scores[] = {84, 92, 76, 81, 56};
    const int num_students = sizeof(scores) / sizeof(int);

    int total_score = 0;
    int max_score = 0;
    int min_score = 100000;
    for (int std_idx = 0; std_idx < num_students; ++std_idx)
    {
        total_score += scores[std_idx];
        if (max_score - scores[std_idx] < 0)
        {
            max_score = scores[std_idx];
        }
        // max_score = (max_score < scores[i]) ? scores[i] : max_score;
        min_score = (min_score > scores[std_idx]) ? scores[std_idx] : min_score;
    }
    double avg_score = static_cast<double>(total_score) / num_students;

    cout << "Average score " << avg_score << endl;
    cout << "Highest score " << max_score << endl;
    cout << "Lowest score " << min_score << endl;
    return 0;
}
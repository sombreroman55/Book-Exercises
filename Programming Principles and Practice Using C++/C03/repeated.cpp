#include "../std_lib_facilities.h"

int main()
{
    int words = 0;
    string previous = " ";
    string current;
    while (cin >> current)
    {
        ++words;
        if (previous == current)
        {
            cout << "word number " << words << " repeated words: " << current << '\n';
        }
        previous = current;
    }
    return 0;
}

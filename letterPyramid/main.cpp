#include <iostream>
#include <string>

using namespace std;

/*
******Thnigs to do******
    Get user input, save as a string
    get length of string, each iteration print i then new line,
    at the end of the string, reverse and print backwards
 */

int main()
{
    string word{};
    string output{};

    cout << "Please enter your word: ";
    getline(cin, word);
    size_t numLetters{word.length()};

    int pos{0};

    for (char c : word)
    {
        // Gets the number of spaces to add before each letter
        size_t numSpaces = numLetters - pos;
        while (numSpaces > 0)
        {
            cout << " ";
            --numSpaces;
        }
        // Display the current character
        for (size_t j = 0; j < pos; j++)
        {
            cout << word.at(j);
        }
        cout << c;

        // Display characters in reverse order
        for (int j = pos - 1; j >= 0; --j)
        {
            cout << word.at(j);
        }
        cout << endl;
        ++pos;
    }

    return 0;
}
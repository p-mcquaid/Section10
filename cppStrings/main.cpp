#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    string s0{}, s1{"Apple"}, s2{"Banana"}, s3{"Kiwi"};
    string s4{"apple"}, s5{s1}, s6{s1, 0, 3}, s7{10, 'X'};
    
    
    // Comparing the strings
    /* cout << "\nComparison"
         << "\n------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s5) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == "
         << "Apple"
         << ": " << (s1 == "Apple") << endl;
 */
    /* cout << "\nAssignment"
         << "\n------------------------" << endl;

    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3 = "Paul";
    cout << "s3 is now: " << s3 << endl;

    s3[0] = 'T';
    cout << "s3 is now: " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3 is now: " << s3 << endl;
 */
    /* cout << "\nConcadenation"
         << "\n------------------------" << endl;
    s3 = "Pineapple";

    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now " << s3 << endl;
 */
   /*  cout << "\nLooping"
         << "\n------------------------" << endl;
    s1 = "Apple";
    for (size_t i = 0; i < s1.length(); i++)
        cout << s1.at(i);
    cout << endl;

    cout << "\nRange-based for loop"
         << "\n-------------------" << endl;
    for (auto c : s1)
        cout << c;
    cout << endl; */

   /*  cout << "\nSubstring"
         << "\n------------------------" << endl;

    s1 = "This is a test";

    cout << s1.substr(0, 4) << endl;  // Extracts This from s1
    cout << s1.substr(5, 2) << endl;  // Extracts is from s1
    cout << s1.substr(10, 4) << endl; // Extracts test from s1
 */
    /* cout << "\nErase character(s)"
         << "\n------------------------" << endl;

    s1 = "This is a test";
    s1.erase(8, 2); // 8 is the starting postion, 2 is how many characters are to be erased#
    cout << s1 << endl; */

    /* cout << "\ngetline"
         << "\n------------------------" << endl;
    string fullName{};

    cout << "Please enter your full name: ";
    getline(cin, fullName);
    cout << "Your fullname is " << fullName << endl; */

    /* cout << "\nFind"
         << "\n------------------------" << endl;
    s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if (position != string::npos)
    {
        cout << "Found " << word << " at position: " << position << endl;
    }
    else
        cout << "Sorry, " << word << " not found." << endl;
 */
    return 0;
}
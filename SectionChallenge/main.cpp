#include <iostream>
#include <string>

using namespace std;
/* What needs done

get input from user
read and compare to the alphabet
get where each letter appears in alphabet and swap with letter in key
display new encrypted word

reverse process to un-encrypt word

*/
int main()
{

    string word{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"qazwsxedcrfvtgbyhnujmikolpQAZWSXEDCRFVTGBYHNUJMIKOLP"};
    string phrase{};

    string encodedWord{};
    string decryptWord{};
    cout << "Please enter your secret phrase: ";
    getline(cin, phrase);
    // Encryption
    for (char c : phrase)
    {

        size_t pos = word.find(c);
        if (pos != string::npos)
        {
            encodedWord += key.at(pos);
        }
        else
        {
            encodedWord += c;
        }
    }
    cout << encodedWord << endl;

    // Decryption
    cout << "Decrypting message..." << endl;
    for (auto c : encodedWord)
    {
        size_t pos = key.find(c);
        if (pos != string::npos)
        {
            decryptWord += word.at(pos);
        }
        else
        {
            decryptWord += c;
        }
    }
    cout << decryptWord << endl;

    return 0;
}
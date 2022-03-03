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
int main(){

    string word{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"qazwsxedcrfvtgbyhnujmikolpQAZWSXEDCRFVTGBYHNUJMIKOLP"};
    string phrase{};

    string encodedWord{};

    cout << "Please enter your secret phrase: ";
    getline(cin,phrase);

    for (auto c : phrase)
    {
        size_t pos = word.find(c);
        cout << pos << endl;
        encodedWord = key.at(pos);
    }
    cout << encodedWord << endl;
    
    
    return 0;
} 
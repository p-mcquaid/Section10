#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    char firstName[20]{};
    char lastName[20]{};
    char fullName[50]{};
    char temp[50]{};

    /* cout << "Please enter your first name: ";
    cin >> firstName;

    cout << "\nPlease enter your last name: ";
    cin >> lastName;

    cout << "Hello " << firstName << ". Your first name has " << strlen(firstName) << " characters" << endl
    << " and your last name," << lastName << ", has " << strlen(lastName) << " characters" << endl;

    strcpy(fullName, firstName);//copys first name and stores in full name
    strcat(fullName, " ");//Concadenates fullname and a space together
    strcat(fullName, lastName);// concadenates fullname and last name together
    cout << "Your fullname is " << fullName << endl;
 */

    cout << "_________________" << endl;
    cout << "Enter your full name: " << endl;
    cin.getline(fullName, 50);

    cout << "Your fullname is " << fullName << endl;
    cout << "_________________" << endl;
    strcpy(temp, fullName);
    if (strcmp(temp, fullName) == 0)
        cout << temp << " and " << fullName << " are the same." << endl;
    else
        cout << temp << " and " << fullName << " are not the same." << endl;
    cout << "_________________" << endl;

    for (size_t i = 0; i < strlen(fullName); i++)
    {
        if (isalpha(fullName[i]))
        {
            fullName[i] = toupper(fullName[i]);
        }
    }
    cout << "Your full name is " << fullName << endl;

    cout << "_________________" << endl;
    if (strcmp(temp, fullName) == 0)
        cout << temp << " and " << fullName << " are the same." << endl;
    else
        cout << temp << " and " << fullName << " are not the same." << endl;
    cout << "_________________" << endl;
    cout << "Result of comparing " << temp << " and " << fullName << ":" << strcmp(temp, fullName) << endl;
    cout << "Result of comparing " << fullName << " and " << temp << ":" << strcmp(fullName, temp) << endl;

    return 0;
}
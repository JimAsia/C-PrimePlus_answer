#include <iostream>
#include <string>
// constants
const int ArSize = 10;

// function prototype
void strcount(const std::string& str);

int main()
{
    using std::cout;
    using std::cin;
    std::string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    strcount(input);
    while (1)
    {
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
        if (input == "")
        {
            break;
        }
        strcount(input);
    }
    cout << "Bye\n";
    // code to keep window open for MSVC++
    /*
    cin.clear();
        while (cin.get() != '\n')
            continue;
        cin.get();
    */
    return 0;
}

void strcount(const std::string& str)
{
    using std::cout;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << str << "\" contains ";
    total += str.length();
    cout << str.length() << " characters\n";
    cout << total << " characters total\n";
}
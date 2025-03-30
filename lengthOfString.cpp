#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    // getline(cin, str);  
    cin>> str;

    cout << "Length of the string is: " << str.length() << endl;



    return 0;
}

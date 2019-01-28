#include <iostream>
#include <string>

using namespace std;

bool f_IsPalindrom ( string& input_string)
{
    int str_len;

    str_len = input_string.size();
    for (int i=0; i < str_len/2; i++)
    {
        cout << input_string[i] <<" " << input_string[str_len-1-i]<< " " << i<<"\n";
        if ( input_string[i] != input_string[str_len-1-i] )
            return false;
    }
    return true;

}

int main()
{
    string user_string;
    cout << "Task 2" << endl;
    cout << "Type a string here ";
    cin >> user_string;
    cout << "string = " << user_string << "\n";
    if ( f_IsPalindrom(user_string) == true )
        cout << "it is Palindrom";
    else
        cout << "it isn't Palindrom";

    return 0;
}

#include <iostream>

using namespace std;

int f_Factorial ( int input )
{
    int factorial = 1;
    if ( input < 0 )
        return  1;
    else if ( input > 10 )
        return -1;
    for ( int i = 1; i <= input; i++ )
        factorial = factorial * i;
    return  factorial;
}

int main()
{
    int user_num;
    cout << "Task 1" << endl;
    cout << "Type a number here ";
    cin >> user_num;
    cout << "Factorial = " << f_Factorial(user_num);
    return 0;
}

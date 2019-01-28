#include <iostream>
#include <vector>
#include <string>
using namespace std;

//функция анализа слова на полиндром

bool f_IsPalindrom ( string& input_string)
{
    unsigned long long str_len;

    str_len = input_string.size();
    for (unsigned long long i=0; i < str_len/2; i++)
    {
//        cout << input_string[i] <<" " << input_string[str_len-1-i]<< " " << i<<"\n";
        if ( input_string[i] != input_string[str_len-1-i] )
            return false;
    }
    return true;

}

//полиндромный фильтр
vector<string> f_PalindromFilter (vector<string> &inputWords, unsigned long long minLength)
{
    vector<string> outputWords;
    for ( unsigned long long i=0; i<inputWords.size(); i++ )
    {
        if (  inputWords[i].size() >= minLength )
            if ( f_IsPalindrom(inputWords[i]) )
                outputWords.push_back(inputWords[i]);
    }
    return outputWords;
}

int main()
{
    vector<string> words;
    vector<string> filtredWords;
    string fromKeyBoard;
    unsigned long long minLength;
    int vecLen;
    cout << "TASK 3" << endl;
    cout << "Type minLength ";
    cin >> minLength;
    cout << "minLength " << minLength << "\n";

    cout << "Type vecLen ";
    cin >> vecLen;
    cout << "vecLen " << vecLen << "\n";

    cout << "Type " << vecLen <<" word for PalindromFilter"<< "\n";
    for (int i=0; i < vecLen; i++ )
    {
        cout << "Type word " << i <<" ";
        cin >> fromKeyBoard;
        words.push_back(fromKeyBoard);
        cout << "\n";
    }
    cout << "Vector size " << words.size()<< "\n";
    filtredWords = f_PalindromFilter(words,minLength);

//вывод отфильтрованного вектора на экран
        cout << "filtredWords: ";
    for ( unsigned long long i = 0; i < filtredWords.size(); i++ )
        cout << filtredWords[i] << "\n";

    return 0;
}

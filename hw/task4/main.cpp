#include <iostream>
#include <vector>
using namespace std;

vector <int> f_NoseToTail (vector <int>& fir_Vect, vector<int> sec_Vect)
{
    for ( unsigned long long i = 0; i < fir_Vect.size(); i++ )
        sec_Vect.push_back(fir_Vect.at(i));
    fir_Vect.clear();

    return sec_Vect;
}

int main()
{
    vector <int> fir_Vect = {1, 2, 3, 4, 5};
    vector <int> sec_Vect = {6, 7, 8};
    vector <int> Thi_Vect;
    cout << "TASK 4" << endl;
    sec_Vect.push_back(11);
    sec_Vect.push_back(12);
    sec_Vect.push_back(13);
    Thi_Vect = f_NoseToTail(fir_Vect,sec_Vect);
    for ( unsigned long long i = 0; i < Thi_Vect.size(); i++ )
        cout << Thi_Vect.at(i)<< "\n";
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.14;
    double rad;
    cout << "Vvedite znachenie v radianah " << endl;
    cin >> rad;
    double result = 180 / pi * rad;
    cout << "Znachenie v gradusah = " << result << endl;


}
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const double pi = 3.14;
    double grad;
    cout << "Vvedite znachenie v gradusah: ";
    cin >> grad;
    double result = pi / 180 * grad;
    cout << "Znachenie v radianah = " << result;


}
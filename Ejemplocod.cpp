#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, ant, cua;
    cout << "Dime un numero: ";
    cin >> num;
    ant = num -1;
    cua = pow(ant, 2);
    cout << "El cuadrado del antecesor de " << num << " es " << cua <<endl;
    return 0;
}

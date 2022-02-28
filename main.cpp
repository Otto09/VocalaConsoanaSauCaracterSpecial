#include <iostream>
#include <cstring>

using namespace std;

int cautCar(char sir[], char valoare);

int main()
{
    char vocale[100] = "aeiou";
    char consoane[100] = "qwrtypsdfghjklzxcvbnm";
    char val;

    cout << "Introduceti un caracter: "; cin >> val;

    val = tolower(val);

    if ( cautCar(vocale, val) )
        cout << "Ati introdus o vocala!" << endl;//Returned 1
    else if ( cautCar(consoane, val) )
        cout << "Ati introdus o consoana!" << endl;//Returned 1
    else
        cout << "Ati introdus un semn special!";
    return 0;
}

int cautCar(char sir[], char valoare)
{
    int i, contor = 0;

    for (i = 0; i < strlen(sir); i++)
        if (sir[i] == valoare)
            contor++;
    return contor;
}

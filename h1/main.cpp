#include <iostream>

using namespace std;

void calcSum(int a, int b) {
    cout << "Lukujen summa: " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Nollalla jakaminen ei sallittua" << endl;
    } else {
        cout << "Lukujen osamäärä: "  << a / b << endl;
    }
}
int retSum(int a, int b) {
    return a + b;

}

float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Nollalla jakaminen ei sallittua" << endl;
        return 0.0f;
    } else {
        return static_cast<float>(a) / b;
    }
}

int main()
{
    int a, b;

    cout << "Anna ensimmäinen luku" << endl;
    cin >> a;

    cout << "Anna toinen luku" << endl;
    cin >> b;

    cout << "Annoit luvut " << a << " ja " << b << endl;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout << "retSum-funktio palautti summan: " << summa << endl;
    cout << "retDiv-funtio palautti osamäärän: " << osamaara << endl;

    return 0;
}

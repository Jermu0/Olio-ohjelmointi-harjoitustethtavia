#include <iostream>

using namespace std;
int summa;
void calcSum(int a, int b) {
    summa = a + b;
    cout << "Antamasi luvut ovat " << a << " ja " << b << endl;
    cout << a << "+" << b << "=" << summa << endl;
}
void calcDiv(int a, int b) {
    if (b == 0) {
        cout<< "jakaja ei saa olla nolla!" << endl;
    } else {
        float osamaara = static_cast<float>(a) /b;
        cout << "Osamaara on: "<<osamaara<<endl;
    }
}
float osamaara;

int retSum(int a, int b) {
    return a + b;
}
float retDiv(int a, int b) {
    if (b==0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main()
{
    int luku1, luku2;

    cout << "Anna kokonaisluku: ";
    cin >> luku1;
    cout << "Anna toinen kokonaisluku: ";
    cin >> luku2;

    calcSum(luku1, luku2);
    calcDiv(luku1, luku2);

    summa = retSum(luku1, luku2);
    cout << "Retsum summa on: " << summa << endl;

    try {
        osamaara = retDiv(luku1,luku2);
        cout << luku1 << "/" << luku2 << "=" << osamaara << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<<e.what()<<endl;
    }

    system("pause");
    return 0;
}



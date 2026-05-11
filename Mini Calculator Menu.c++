#include <iostream>
using namespace std;

int main() {

    int a,b;

    cin >> a >> b;

    cout << "1 Sum\n";
    cout << "2 Minus\n";

    int c;
    cin >> c;

    switch(c) {

        case 1:
            cout << a+b;
            break;

        case 2:
            cout << a-b;
            break;
    }
}

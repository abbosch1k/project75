#include <iostream>
using namespace std;

int main() {

    int n=0;

    char c;

    while(true) {

        cin >> c;

        if(c=='+')
            n++;

        if(c=='-')
            n--;

        cout << n << endl;
    }
}

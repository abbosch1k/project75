#include <iostream>
using namespace std;

int main() {

    int parking[5]={0};

    int place;

    cin >> place;

    parking[place]=1;

    for(int i=0;i<5;i++)
        cout << parking[i] << " ";
}

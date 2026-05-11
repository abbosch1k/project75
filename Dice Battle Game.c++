#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int p1=rand()%6+1;
    int p2=rand()%6+1;

    cout << p1 << endl;
    cout << p2 << endl;

    if(p1>p2)
        cout << "Player 1 Win";
    else if(p2>p1)
        cout << "Player 2 Win";
    else
        cout << "Draw";
}

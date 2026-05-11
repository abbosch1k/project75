#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int joke=rand()%3;

    switch(joke) {

        case 0:
            cout << "Funny Joke 1";
            break;

        case 1:
            cout << "Funny Joke 2";
            break;

        case 2:
            cout << "Funny Joke 3";
            break;
    }
}

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int tableau[15] = {0,0,2,0,1,3,2,5,4,1,0,2,3,1,0} ;
    for (int i=0; i<15 ; i++){
        cout << i << " " <<string(tableau[i], '*') <<endl;
    }
    return 0;
}

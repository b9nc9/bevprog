#include <iostream>

using namespace std;

int main(){
        int a, b;
 
        cin >> a >> b;
        cout << "\na: " << a << endl << "b: " << b << endl;
        a = a * b;
        b = a / b;
        a = a / b;
        cout << "\ncsere:\na: " << a << endl << "b: " << b <<  endl;

        return 0;
}

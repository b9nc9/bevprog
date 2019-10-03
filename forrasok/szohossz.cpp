#include <iostream>


using namespace std;


int main(){

        int a{1};
        int n{0};

        while(a != 0){
                cout << a << endl;
                a = a << 1;
                n++;
        }

        cout << "lépések száma: " << n << endl;

        return 0;
}

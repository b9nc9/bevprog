#include <iostream>

using namespace std;

int main(){
        double a,b;

        while(cin >> a >> b){
                cout << "a: " << a << endl;
                cout << "b: " << b << endl;
                if(a > b){ cout << "the smaller value is: " << b << endl << "the larger value is: " << a << endl;}
                else if(a < b){ cout << "the smaller value is: " << a << endl << "the larger value is: " << b << endl;}
                else{ cout << "the numbers are equal" << endl; }
        }
        
        return 0;
}

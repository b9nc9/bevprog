#include <iostream>
#include <vector>

using namespace std;

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};


void f(int a[], int n){
        int la[10];
        for(int i = 0; i < 10; i++){
                la[i] = ga[i];
                cout << la[i] << endl;
        }
        int* p = new int[n];
        for(int i = 0; i < n; i++){
                p[i] = a[i];
                cout << p[i] << endl;
        }
        delete[] p;
}

void f(vector<int> v){
        vector<int> lv(v.size());
        lv = gv;
        for(auto i:lv){
                cout << i << endl;
        }
        
        vector<int> lv2{v};
        for(auto i:lv2){
                cout << i << endl;
        }
}

int main(){
        f(ga, 10);

        int aa[10];
        vector<int> vv;
        int a = 1;

        for(int i = 1; i < 10; i++){
                a *= i;
                aa[i-1] = a;
                vv.push_back(a);
        }

        f(aa, 10);

        f(gv);
        f(vv);

        return 0;
}

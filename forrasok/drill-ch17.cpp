#include <iostream>
#include <vector>

using namespace std;

// 4
void print_array10(ostream& os, int* a){
        for(int i = 0; i < 10; i++){
                os << a[i] << endl;
        }
}

// 7
void print_array(ostream& os, int* a, int n){
        for(int i = 0; i < n; i++){
                os << a[i] << endl;
        }
}

void print_vector(ostream& os, vector<int> v){
        for(int i = 0; i < v.size(); i++){
                os << v[i] << endl;
        }
}

int main(){
        // 1-3
        int* t = new int[10];
        for(int i = 0; i < 10; i++){
                cout << t[i] << endl;
        }
        delete[] t;

        // 6
        int* t2 = new int[11];
        for(int i = 0; i < 11; i++){
                t2[i] = 100+i;
        }
        print_array(cout, t2, 11);
        delete[] t2;

        // 8
        int* t3 = new int[20];
        for(int i = 0; i < 20; i++){
                t3[i] = 100+i;
        }
        print_array(cout, t3, 20);
        delete[] t3;
        

        // 10
        vector<int> v;
        for(int i = 0; i < 11; i++){
                v.push_back(100+i);
        }
        print_vector(cout, v);
        // a többit már nem csinálom meg, mert csak különböző méretet kell állítani.
        

        // Part 2
        // 1-2      
        int* p1 = new int{7};
        cout << *p1 << endl << p1 << endl;
        delete p1;

        // 3-4
        int sq = 1;
        int* p2 = new int[7];
        for(int i = 0; i < 7; i++){
                p2[i] = sq;
                sq *= 2;
        }
        cout << *p2 << endl << p2 << endl;

        // 5-9
        int* p3{p2};
        p1 = p2;
        p3 = p2;
        cout << *p1 << endl << p1 << endl;
        cout << *p2 << endl << p2 << endl;
        delete[] p2;
        
        //10-13
        sq = 1;
        p1 = new int[10];
        for(int i = 0; i < 10; i++){
                p1[i] = sq;
                sq *= 2;
        }
        p2 = new int[10];

        for(int i = 0; i < 10; i++){
                p2[i] = p1[i];
        }
        delete[] p1;
        delete[] p2;
        
        sq = 1;
        vector<int> v2, v3;
        for(int i = 0; i < 10; i++){
                v2.push_back(sq);
                v3.push_back(sq);
                sq *= 2;
        }

        p1 = &v2[0];
        p2 = &v3[0];

        for(int i = 0; i < 10; i++){
                p2[i] = p1[i];
        }

        return 0;
}

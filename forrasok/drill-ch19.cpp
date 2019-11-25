#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
struct S{
        S(T a):val{a}{}
        T& get();
        T& get() const;
        /*void set(T a){
                val = a;
        }*/
        S operator=(const T& a){
                val = a;
                return *this;
        };
        
        private:
                T val;
 
};

template<typename T> T& S<T>::get(){
        return val;
}

template<typename T> T& S<T>::get() const{
        return val;
}

template<typename T> void read_val(T& v){
        cin >> v;
}




int main(){

        S<int> a{12};
        S<char> b{'b'};
        S<double> c{11.22};
        S<string> d{"hello"};
        S<vector<int>> e(vector<int>{1,2,3,4,5});
        cout << a.get() << endl;
        cout << b.get() << endl;
        cout << c.get() << endl;
        cout << d.get() << endl;
        for(auto i:e.get()){
                cout << i << endl;
        }

        cout << "(int): ";
        int t13i;
        read_val(t13i);
        a = {t13i};
        cout << a.get() << endl;

        cout << "(char): ";
        char t13c;
        read_val(t13c);
        b = {t13c};
        cout << b.get() << endl;

        cout << "(double): ";
        double t13d;
        read_val(t13d);
        c = {t13d};
        cout << c.get() << endl;


        return 0;
}

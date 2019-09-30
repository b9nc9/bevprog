#include "std_lib_facilities.h"

using namespace std;


int main(){
        try{
                /*Cout << "Success!\n"; --> Cout
                cout << "Success!\n; --> hiányzó "
                cout << "Success" << !\n" >> hiányzó ';' ráadásul a <<-t nem így akarta volna használni
                cout << success << '\n'; --> success ebben az esetben változó lenne
                string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; --> stringnek intet ad meg, aztán stringet akar int vektorba helyezni
                vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n"; --> inkább v[5] lenne az
                if (cond) cout << "Success!\n"; else cout << "Fail!\n"; --> cond nem létezik, egyébként jó lenne
                bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; --> logikai hiba
                string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";  --> sok a baj
                string s = "ape"; if (s=="fool") cout << "Success!\n"; --> logikai hiba
                string s = "ape"; if (s=="fool") cout < "Success!\n";  --> logikai és szintaktikai hiba
                string s = "ape"; if (s+"fool") cout < "Success!\n"; --> micsoda?
                vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";  --> 0 mindig kisebb lesz
                vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; --> végül is működik, csak még előtte lenyomunk egy ciklust
                string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i]; --> hiába látjuk a Success-t, a ciklus valójában nem elég hosszú!
                if (true) then cout << "Success!\n"; else cout << "Fail!\n"; --> then
                int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; --> ha jó kódot adunk meg a feltételben, akkor működik
                string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; --> most túl sokáig megyünk, bár működik
                vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; --> szintaktikai hiba, milyen vektorrl van szó?
                int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; --> erről inkább ne beszéljünk...
                int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n"; --> 0-val akar osztani
                string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; --> mi az a string<char>?...
                int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n"; --> itt már szegény j nem is létezik, a többit hagyjuk...
                int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n"; --> szintaktikai hiba, meg logikai is */
                cout << "Success!\n"; // így kell ezt!
                keep_window_open();
                return 0;
        }
        catch(exception& e){
                cerr << "error: " << e.what() << "\n";
                keep_window_open();
                return 1;
        }
        catch(...){
                cerr << "Oops: unknown expection!\n";
                keep_window_open();
                return 2;
        }
}

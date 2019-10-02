#include <iostream>
#include <unistd.h>


using namespace std;


int main(){

        unsigned int microseconds = 20000;

	int sor = 30;
	int oszlop = 150;
        char tabla[sor][oszlop] = {};

        for(int i = 0; i < sor; i++){
                for(int j = 0; j < oszlop; j++){
                        tabla[i][j] = ' ';
                }
        }


        int i = 0;
        int j = 0;

        while(true){
               int n=  (sor-1) - abs(i++ % ((sor-1)*2) - (sor-1));
               int m = (oszlop-1) - abs(j++ % ((oszlop-1)*2) - (oszlop-1));
               //cout << n << ":" << m << endl;
               tabla[n][m] = 'O';
               for(int k = 0; k < sor; k++){
                       for(int l = 0; l < oszlop; l++){
                               cout << tabla[k][l];
                        }
                       cout << endl; 
                }
               int elozon = n;
               int elozom = m;
               tabla[elozon][elozom] = ' ';
               cout << "\033[2J\033[1;1H";
               usleep(microseconds);
        }
        return 0;
}

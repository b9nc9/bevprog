#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <algorithm>

using namespace std;


bool existingUnit(string unit){
        string units[] = {"m", "cm", "in", "ft"};
        
        for(string u:units){
                if(unit == u){return true;}
        }

        return false;
}


double Convert(double &n, string &unit){
        if(unit == "cm"){return n/100;}
        else if(unit == "in"){return n*0.0254;}
        else if(unit == "ft"){return n*0.3048;}
        return n;
}


int main(){
        vector<double> values{};
        double n, sum = {0};
        double smallest = std::numeric_limits<double>::infinity();
        double largest = -1;
        string unit;
        
        cout << "(value, unit): ";
        while(cin >> n >> unit){
                if(existingUnit(unit)){
                double converted = {Convert(n, unit)};
                sum += converted;
                values.push_back(converted);
                if(converted > largest ){
                        cout << converted << "m the largest so far\n";
                        largest = converted;
                }
                else if(converted  < smallest){
                        cout << converted << "m the smallest so far\n";
                        smallest = converted;
                }
                else{ cout << n << "\n"; }
                }
                else{
                        cout << "Couldn't handle the given unit! Try it again with another one, please!\n";
                }
                cout << "(value, unit): ";
        }
        
        cout << endl;
        sort(values.begin(), values.end());
        cout << "Largest value entered: " << largest << "m\n";
        cout << "Smallest value entered: " << smallest << "m\n";
        cout << "Number of values entered: " << values.size() << "\n";
        cout << "List of values entered: \n";
        for(double n:values){
                cout << n << "m\n";
        }
        
        return 0;
}

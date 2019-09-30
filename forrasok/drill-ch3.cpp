#include <iostream>
#include <string>

using namespace std;


int main(){
        string first_name, friend_name;
        char friend_sex = 'n';
        int age = 0;
        cout << "Enter the name of the person you want to write to: ";
        cin >> first_name;
        cout << "Enter the name of another friend: ";
        cin >> friend_name;
        cout << "Now enter the gender of your friend(m/f): ";
        cin >> friend_sex;
        cout << "Age of the recipient: ";
        cin >> age;
        if(age <= 0 || age >= 110){
                simple_error("you're kidding!\n"); // nem használom a kurzushoz tartozó headert
        }

        cout << "\nDear " << first_name << ",\n" << "\tHow are you? I am fine. I miss you.\n";
        cout << "Have you seen " << friend_name << " lately?\n";
        if(friend_sex == 'm'){ cout << "If you see " << friend_name << ", please ask him to call me!\n"; }
        else{ cout << "If you see " << friend_name << ", please ask her to call me!\n"; }
        cout << "I hear you just had a birthday and you are " << age << " years old.\n";
        switch(age){
                case(12):{ cout << "Next year you will be " << age+1 << ".\n"; } break;
                case(17):{ cout << "Next year you will be able to vote.\n"; } break;
        }
        if(age > 70){ cout << "I hope you are enjoying retirement.\n"; }
        cout << "Yours sincerely,\n\nBence\n";

        return 0;
}

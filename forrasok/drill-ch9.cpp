#include <iostream>

using namespace std;


/*
 * 9.4.1
 * 9.4.2
 * 9.4.3
 * 9.7.1
 * 9.7.4
 */



// 9.4.1

/*struct Date{
        int y, m,  d;
};

void init_day(Date& dd, int y, int m, int d){
        if(m < 1 || m > 12){ cout << "month must be between 1 and 12!" << endl; }
        if(d < 1 || d > 31){ cout << "day must be between 1 and 31!" << endl; }
        if(y < 0){ cout << "year cannot be negative!" << endl; }

        dd.y = y;
        dd.m = m;
        dd.d = d;
}

ostream& operator<<(ostream& os, const Date& d){
        return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}

void add_day(Date& dd, int n){
        dd.d = (dd.d+n)%31;
}


int main(){
        Date today;
        init_day(today,1978,6,25);
        Date tomorrow = today;
        tomorrow.add_day(today,1);
        cout << today << endl << tomorrow << endl;
        return 0;
        }
*/

// 9.4.2

/*struct Date{
        int y, m, d;
        Date(int y, int m, int d);
        void add_day(int n);
};

Date::Date(int year, int month, int day):y{year}, m{month}, d{day}{
        if(m < 1 || m > 12){ cout << "month must be between 1 and 12!" << endl; }
        if(d < 1 || d > 31){ cout << "day must be between 1 and 31!" << endl; }
        if(y < 0){ cout << "year cannot be negative!" << endl; }
}


ostream& operator<<(ostream& os, const Date& d){
        return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}

void Date::add_day(int n){ d = (d+n)%31; }


int main(){
        Date today(1978,6,25);
        Date tomorrow = today;
        tomorrow.add_day(1);
        cout << today << endl << tomorrow << endl;
        return 0;
}*/

// 9.4.3

/*class Date{
        int y, m, d;
        
        public:
                Date(int y, int m, int d);
                void add_day(int n);
                int month(){ return m; }
                int day(){ return d; }
                int year(){ return y; }
};

Date::Date(int year, int month, int day):y{year}, m{month}, d{day}{
        if(m < 1 || m > 12){ cout << "month must be between 1 and 12!" << endl; }
        if(d < 1 || d > 31){ cout << "day must be between 1 and 31!" << endl; }
        if(y < 0){ cout << "year cannot be negative!" << endl; }
}


ostream& operator<<(ostream& os, const Date& d){
        return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';

        }


void Date::add_day(int n){ d = (d+n)%31; }

int main(){
        Date today{1978,6,25};
        Date tomorrow = today;
        tomorow.add_day(1);
        cout << today << endl << tomorrow << endl;
        return 0;
}*/

// 9.7.1

/*class Date {
        public:
                enum Month {
                        jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
                };

                Date(int y, Month m, int d);
                void add_day(int n);
                int year() { return y; }
                Month month() { return m; }
                int day() { return d; }
        private:
                int y;
                Month m;
                int d;
};

Date::Date(int year, Month month, int day):y(year), m(month), d(day){
        if (m<Date::jan || m>Date::dec || d<1 || d>31){ cout << "invalid date" << endl; }
    }

void Date::add_day(int n){
        d = (d+n)%31;
}

ostream& operator<<(ostream& os, Date& d){
        return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
}

int main(){
        Date today(1978,Date::jun,25);
        Date tomorrow = today;
        tomorrow.add_day(1);
        cout << today << endl << tomorrow << endl;
        return 0;
}*/

// 9.7.4

class Date {
        public:
                enum Month {
                        jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
                };

                Date(int y, Month m, int d);
                Date();

                int year() const;
                Month month() const;
                int day() const;

                void add_year(int n);
                void add_month(int n);
                void add_day(int n);
        
        private:
                int y;
                Month m;
                int d;
};

Date::Date(int year, Month month, int day):y(year), m(month), d(day){
        if (m<Date::jan || m>Date::dec || d<1 || d>31){ cout << "invalid date" << endl; }
    }

void Date::add_day(int n){
        d = (d+n)%31;
}

const Date& default_date(){
        static Date dd(2001,Date::jan,1);
        return dd;
}

Date::Date():y(default_date().year()),m(default_date().month()),d(default_date().day()){}

int Date::year() const{ return y; }

Date::Month Date::month() const{ return m; }

int Date::day() const{ return d; }

ostream& operator<<(ostream& os, const Date& d){
return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
}


int main(){
        Date today(1978,Date::jun,25);
        Date tomorrow = today;
        tomorrow.add_day(1);
        cout << today << endl << tomorrow << endl;
        return 0;
}

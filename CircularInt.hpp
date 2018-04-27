#include <iostream>
using namespace std;


class CircularInt {

    friend CircularInt operator~ (CircularInt const X);
    friend CircularInt operator- (CircularInt const X);
    friend istream& operator>> (istream& is, CircularInt& X);
    friend ostream& operator<< (ostream& os, const CircularInt& X);

    friend bool operator< (CircularInt const& X, CircularInt const& Y);
    friend bool operator< (CircularInt const& X, int const& num);
    friend bool operator< (int const& num, CircularInt const& X);

    friend bool operator> (CircularInt const& X, CircularInt const& Y);
    friend bool operator> (CircularInt const& X, int const& num);
    friend bool operator> (int const& num, CircularInt const& X);

    friend bool operator== (CircularInt const& X, CircularInt const& Y);
    friend bool operator== (CircularInt const& X, int const& num);
    friend bool operator== (int const& num, CircularInt const& X);

    friend bool operator!= (CircularInt const& X, CircularInt const& Y);
    friend bool operator!= (CircularInt const& X, int const& num);
    friend bool operator!= (int const& num, CircularInt const& X);

    friend bool operator<= (CircularInt const& X, CircularInt const& Y);
    friend bool operator<= (CircularInt const& X, int const& num);
    friend bool operator<= (int const& num, CircularInt const& X);

    friend bool operator>= (CircularInt const& X, CircularInt const& Y);
    friend bool operator>= (CircularInt const& X, int const& num);
    friend bool operator>= (int const& num, CircularInt const& X);

    friend CircularInt operator+  (CircularInt X, CircularInt const& Y);
    friend CircularInt operator+  (CircularInt X, int const& num);
    friend CircularInt operator+  (int const& num, CircularInt X);

    friend CircularInt operator-  (CircularInt X, CircularInt const& Y);
    friend CircularInt operator-  (CircularInt X, int const& num);
    friend CircularInt operator-  (int const& num, CircularInt X);

    friend CircularInt operator*  (CircularInt X, CircularInt const& Y);
    friend CircularInt operator*  (CircularInt X, int const& num);
    friend CircularInt operator*  (int const& num, CircularInt X);

    friend CircularInt operator/  (CircularInt X, CircularInt const& Y);
    friend CircularInt operator/  (CircularInt X, int const& num);
    friend CircularInt operator/  (int const& num, CircularInt X);

    friend CircularInt operator%  (CircularInt X, CircularInt const& Y);
    friend CircularInt operator%  (CircularInt X, int const& num);
    friend CircularInt operator%  (int const& num, CircularInt X);

    friend CircularInt operator^  (CircularInt X, CircularInt const& Y);
    friend CircularInt operator^  (CircularInt X, int const& num);
    friend CircularInt operator^  (int const& num, CircularInt X);

    friend CircularInt operator|  (CircularInt X, CircularInt const& Y);
    friend CircularInt operator|  (CircularInt X, int const& num);
    friend CircularInt operator|  (int const& num, CircularInt X);

    friend CircularInt operator&  (CircularInt X, CircularInt const& Y);
    friend CircularInt operator&  (CircularInt X, int const& num);
    friend CircularInt operator&  (int const& num, CircularInt X);

    friend CircularInt operator<< (CircularInt X, CircularInt const& Y);
    friend CircularInt operator<< (CircularInt X, int const& num);
    friend CircularInt operator<< (int const& num, CircularInt X);

    friend CircularInt operator>> (CircularInt X, CircularInt const& Y);
    friend CircularInt operator>> (CircularInt X, int const& num);
    friend CircularInt operator>> (int const& num, CircularInt X);

    friend CircularInt operator+=  (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator+=  (CircularInt& X, int const& num);

    friend CircularInt operator-=  (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator-=  (CircularInt& X, int const& num);

    friend CircularInt operator*=  (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator*=  (CircularInt& X, int const& num);

    friend CircularInt operator/=  (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator/=  (CircularInt& X, int const& num);

    friend CircularInt operator%=  (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator%=  (CircularInt& X, int const& num);

    friend CircularInt operator^=  (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator^=  (CircularInt& X, int const& num);

    friend CircularInt operator|=  (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator|=  (CircularInt& X, int const& num);

    friend CircularInt operator&=  (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator&=  (CircularInt& X, int const& num);

    friend CircularInt operator<<= (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator<<= (CircularInt& X, int const& num);

    friend CircularInt operator>>= (CircularInt& X, CircularInt const& Y);
    friend CircularInt operator>>= (CircularInt& X, int const& num);

public:

    int start, end, currentInt;

    CircularInt (int newStart, int newEnd) : start(newStart), end(newEnd){
        currentInt = newStart;
        if(start > end)
            swap(*this);

    }

    CircularInt (CircularInt& x) : start(x.start), end(x.end){
        currentInt = x.start;

    }

    void swap(CircularInt& x){
        int temp;
            temp = x.end;
            x.end = x.start;
            x.start = temp;
    }

    int inRange(int x);
    void operator=(CircularInt X);
    void operator= (int n);
    CircularInt& operator++();
    CircularInt	operator++(int);
    CircularInt& operator--();
    CircularInt	operator--(int);

};

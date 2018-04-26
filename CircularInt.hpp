#include<iostream>
#include<string>

using namespace std;

class CircularInt {


public:

    //Constructor
    CircularInt(int newStart, int newEnd);
    CircularInt(CircularInt& X);

    //Destructor
    ~CircularInt();

    friend istream& operator>> (istream& is,CircularInt& ci);
    friend ostream& operator<< (ostream& os, CircularInt const& ci);

    bool operator >(const CircularInt& X) const;
    bool operator >=(const CircularInt& X) const;
    bool operator <(const CircularInt& X) const;
    bool operator <=(const CircularInt& X) const;


    friend CircularInt& operator +=(CircularInt& X, int x);
    friend CircularInt& operator -=(CircularInt& X, int x);
    CircularInt& operator *=( int x);
    CircularInt& operator /=( int x);
    friend CircularInt& operator %=(CircularInt& X, int x);

    CircularInt& operator ++();
    CircularInt& operator ++( int);

    int operator /( int x);

    friend CircularInt& operator+ ( CircularInt& other, int num );
    friend CircularInt& operator+ ( int num, CircularInt& other );
    friend CircularInt& operator + (CircularInt& a, CircularInt& b);

    friend CircularInt& operator-(int y, CircularInt&x);
    friend CircularInt& operator - (CircularInt& other, int num );
    friend CircularInt& operator- ( CircularInt& a, CircularInt& b );
    int operator-();

    friend CircularInt& operator* ( CircularInt& other, int num);
    friend CircularInt& operator* ( CircularInt& a,CircularInt& b );
    friend CircularInt& operator* ( int num, CircularInt& other);

    CircularInt rangeBetween (CircularInt& other, int temp);


    int start, end, currentInt;

};

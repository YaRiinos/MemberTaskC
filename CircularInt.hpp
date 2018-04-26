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

    int range(int x);

    friend ostream& operator<<(ostream& output, const CircularInt& H);

    bool operator >(const CircularInt& X) const;
    bool operator >=(const CircularInt& X) const;
    bool operator <(const CircularInt& X) const;
    bool operator <=(const CircularInt& X) const;


    friend bool operator== (CircularInt const& X, CircularInt const& Y);
    friend bool operator== (CircularInt const& X, int const& num);
    friend bool operator== (int const& num, CircularInt const& X);

    friend bool operator!= (CircularInt const& X, CircularInt const& Y);
    friend bool operator!= (CircularInt const& X, int const& num);
    friend bool operator!= (int const& num, CircularInt const& X);

    CircularInt& operator+  (CircularInt X, CircularInt const& Y);
    CircularInt& operator+  (CircularInt X, int const& num);
    CircularInt& operator+  (int const& num, CircularInt X);

    CircularInt& operator-  (CircularInt X, CircularInt const& Y);
    CircularInt& operator-  (CircularInt X, int const& num);
    CircularInt& operator-  (int const& num, CircularInt X);

    CircularInt& operator*  (CircularInt X, CircularInt const& Y);
    CircularInt& operator*  (CircularInt X, int const& num);
    CircularInt& operator*  (int const& num, CircularInt X);

    CircularInt& operator/  (CircularInt X, CircularInt const& Y);
    CircularInt& operator/  (CircularInt X, int const& num);
    CircularInt& operator/  (int const& num, CircularInt X);

    CircularInt& operator%  (CircularInt X, CircularInt const& Y);
    CircularInt& operator%  (CircularInt X, int const& num);
    CircularInt& operator%  (int const& num, CircularInt X);

    CircularInt& operator^  (CircularInt X, CircularInt const& Y);
    CircularInt& operator^  (CircularInt X, int const& num);
    CircularInt& operator^  (int const& num, CircularInt X);

    CircularInt& operator|  (CircularInt X, CircularInt const& Y);
    CircularInt& operator|  (CircularInt X, int const& num);
    CircularInt& operator|  (int const& num, CircularInt X);

    CircularInt& operator&  (CircularInt X, CircularInt const& Y);
    CircularInt& operator&  (CircularInt X, int const& num);
    CircularInt& operator&  (int const& num, CircularInt X);

    CircularInt& operator+=  (CircularInt& X, CircularInt const& Y);
    CircularInt& operator+=  (CircularInt& X, int const& num);

    CircularInt& operator-=  (CircularInt& X, CircularInt const& Y);
    CircularInt& operator-=  (CircularInt& X, int const& num);

    CircularInt& operator*=  (CircularInt& X, CircularInt const& Y);
    CircularInt& operator*=  (CircularInt& X, int const& num);

    CircularInt& operator/=  (CircularInt& X, CircularInt const& Y);
    CircularInt& operator/=  (CircularInt& X, int const& num);

    CircularInt& operator%=  (CircularInt& X, CircularInt const& Y);
    CircularInt& operator%=  (CircularInt& X, int const& num);

    CircularInt& operator^=  (CircularInt& X, CircularInt const& Y);
    CircularInt& operator^=  (CircularInt& X, int const& num);

    CircularInt& operator|=  (CircularInt& X, CircularInt const& Y);
    CircularInt& operator|=  (CircularInt& X, int const& num);

    CircularInt& operator&=  (CircularInt& X, CircularInt const& Y);
    CircularInt& operator&=  (CircularInt& X, int const& num);

    CircularInt& operator ++();
    CircularInt& operator ++( int);


    int operator-();
    int operator /( int x);


    friend int operator-(int y, CircularInt&x);


private:
    int start, end, currentInt;

};

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

    CircularInt& range(CircularInt& X);

    friend ostream& operator<<(ostream& output, const CircularInt& H);

    CircularInt& operator ++();
    CircularInt& operator ++( int);
    CircularInt& operator--();
    CircularInt	operator--(int);

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

    int operator-();

    int start, end, currentInt;

};

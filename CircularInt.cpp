#include <string>
#include <iostream>
#include <math.h>


#include "CircularInt.hpp"

using namespace std;


CircularInt inRange(CircularInt& x){
    int space = x.end - x.start + 1;
    if(x.currentInt > x.end){
        while(x.currentInt > x.end)
            x.currentInt -= space;
    }
    else if(x.currentInt < x.start){
        while(x.currentInt < x.start)
            x.currentInt += space;
    }
    return x;
}

int CircularInt:: inRange(int x){
    int space = end - start + 1;
    if(currentInt > end){
        while(currentInt > end)
            currentInt -= space;
    }
    else if(currentInt < start){
        while(currentInt < start)
            currentInt += space;
    }
    return x;
}


ostream& operator<< (ostream& os, const CircularInt& x){
    return os << x.currentInt;
}

istream& operator>> (istream& is, CircularInt& x){
    char sign;
    is >> x.start >> sign >> x.end;
    return is;
}

// =
void CircularInt::operator=(int n){
    currentInt = n;
    inRange(currentInt);
}

void CircularInt::operator=(CircularInt x){
    currentInt = x.currentInt;
    inRange(currentInt);
}

// ++
CircularInt& CircularInt :: operator++(){
   currentInt=currentInt+1;
    inRange(currentInt);
    return *this;
}

CircularInt CircularInt :: operator++(int){
    CircularInt ans(*this);
    ++(*this);
    return ans;
}

// --
CircularInt& CircularInt :: operator--(){
    currentInt=currentInt-1;
    inRange(currentInt);
    return *this;
}

CircularInt CircularInt :: operator--(int){
    CircularInt ans(*this);
    --(*this);
    return ans;
}

// <
bool operator< (CircularInt const& x, CircularInt const& y){
    return  x.currentInt < y.currentInt;
}

bool operator< (CircularInt const& x, int const& num){
    return x.currentInt<num;
}
bool operator< (int const& num, CircularInt const& x){
    return num<x.currentInt;
}

// >
bool operator> (CircularInt const& x, CircularInt const& y){
    return  x.currentInt > y.currentInt;
}

bool operator> (CircularInt const& x, int const& num){
    return x.currentInt>num;
}
bool operator> (int const& num, CircularInt const& x){
    return num>x.currentInt;
}

// ==
bool operator== (CircularInt const& x, CircularInt const& y){
    return ((x.currentInt==y.currentInt)&&(x.start==y.start)&&(x.end==y.end));
}
bool operator== (CircularInt const& x, int const& num){
    return x.currentInt==num;
}
bool operator== (int const& num, CircularInt const& x){
    return num==x.currentInt;
}

// !=
bool operator!= (CircularInt const& x, CircularInt const& y){
    return ((x.currentInt!=y.currentInt)||(x.start!=y.start)||(x.end!=y.end));
}
bool operator!= (CircularInt const& x, int const& num){
    return x.currentInt!=num;
}
bool operator!= (int const& num, CircularInt const& x){
    return num!=x.currentInt;
}

// <=
bool operator<= (CircularInt const& x, CircularInt const& y){
    return (x.currentInt<=y.currentInt);
}
bool operator<= (CircularInt const& x, int const& num){
    return x.currentInt<=num;
}
bool operator<= (int const& num, CircularInt const& x){
    return num<=x.currentInt;
}

// >=
bool operator>= (CircularInt const& x, CircularInt const& y){
    return (x.currentInt>=y.currentInt);
}
bool operator>= (CircularInt const& x, int const& num){
    return x.currentInt>=num;
}
bool operator>= (int const& num, CircularInt const& x){
    return num>=x.currentInt;
}

// +
CircularInt operator+ (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt += y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator+ (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt += num;
    inRange(temp);
    return temp;
}

CircularInt operator+ (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt += num;
    inRange(temp);
    return temp;
}

// -
CircularInt operator- (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt -= y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator- (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt -= num;
    inRange(temp);
    return temp;
}

CircularInt operator- (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt -= num;
    inRange(temp);
    return temp;
}

// *
CircularInt operator* (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt *= y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator* (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt *= num;
    inRange(temp);
    return temp;
}

CircularInt operator* (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt *= num;
    inRange(temp);
    return temp;
}

// %
CircularInt operator% (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt % y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator% (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt = num % temp.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator% (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt = num % temp.currentInt;
    inRange(temp);
    return temp;
}

// ^
CircularInt operator^ (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt ^ y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator^ (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt = num ^ temp.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator^ (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt = num ^ temp.currentInt;
    inRange(temp);
    return temp;
}

// |
CircularInt operator| (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt | y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator| (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt = num | temp.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator| (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt = num | temp.currentInt;
    inRange(temp);
    return temp;
}

// &
CircularInt operator& (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt & y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator& (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt = num & temp.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator& (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt = num & temp.currentInt;
    inRange(temp);
    return temp;
}

// <<
CircularInt operator<< (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt << y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator<< (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt << num;
    inRange(temp);
    return temp;
}

CircularInt operator<< (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt << num;
    inRange(temp);
    return temp;
}

// >>
CircularInt operator>> (CircularInt x, CircularInt const& y){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt >> y.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator>> (CircularInt x, int const& num){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt >> num;
    inRange(temp);
    return temp;
}

CircularInt operator>> (int const& num, CircularInt x){
    CircularInt temp (x);
    temp.currentInt = temp.currentInt >> num;
    inRange(temp);
    return temp;
}

//+=
CircularInt operator+= (CircularInt& x, CircularInt const& y){
    x.currentInt += y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator+= (CircularInt& x, int const& num){
    x.currentInt += num;
    inRange(x);
    return x;
}

//-=
CircularInt operator-= (CircularInt& x, CircularInt const& y){
    x.currentInt -= y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator-= (CircularInt& x, int const& num){
    x.currentInt -= num;
    inRange(x);
    return x;
}

//*=
CircularInt operator*= (CircularInt& x, CircularInt const& y){
    x.currentInt *= y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator*= (CircularInt& x, int const& num){
    x.currentInt *= num;
    inRange(x);
    return x;
}

//%=
CircularInt operator%= (CircularInt& x, CircularInt const& y){
    x.currentInt %= y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator%= (CircularInt& x, int const& num){
    x.currentInt %= num;
    inRange(x);
    return x;
}

//^=
CircularInt operator^= (CircularInt& x, CircularInt const& y){
    x.currentInt ^= y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator^= (CircularInt& x, int const& num){
    x.currentInt ^= num;
    inRange(x);
    return x;
}

//|=
CircularInt operator|= (CircularInt& x, CircularInt const& y){
    x.currentInt |= y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator|= (CircularInt& x, int const& num){
    x.currentInt |= num;
    inRange(x);
    return x;
}

//&=
CircularInt operator&= (CircularInt& x, CircularInt const& y){
    x.currentInt &= y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator&= (CircularInt& x, int const& num){
    x.currentInt &= num;
    inRange(x);
    return x;
}

//<<=
CircularInt operator<<= (CircularInt& x, CircularInt const& y){
    x.currentInt <<= y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator<<= (CircularInt& x, int const& num){
    x.currentInt <<= num;
    inRange(x);
    return x;
}

//>>=
CircularInt operator>>= (CircularInt& x, CircularInt const& y){
    x.currentInt >>= y.currentInt;
    inRange(x);
    return x;
}

CircularInt operator>>= (CircularInt& x, int const& num){
    x.currentInt >>= num;
    inRange(x);
    return x;
}


CircularInt operator~ (CircularInt const& x){
    CircularInt temp (const_cast<CircularInt &>(x));
    temp.currentInt = ~x.currentInt;
    inRange(temp);
    return temp;
}

CircularInt operator- (CircularInt const x){
    CircularInt temp (const_cast<CircularInt &>(x));
    temp.currentInt = (-1)*x.currentInt;
    inRange(temp);
    return temp;
}

// /
CircularInt operator/ (CircularInt x, CircularInt const& y) {
    CircularInt temp(x);
    if(x.currentInt%y.currentInt==0){
        temp.currentInt=x.currentInt/y.currentInt;
        inRange(temp);
    } else
        throw invalid_argument("There is no number in the range who can make it");
    return temp;
}

CircularInt operator/ (CircularInt x, int const& num) {
    CircularInt temp(x);
    if(x.currentInt%num==0){
        temp.currentInt=x.currentInt/num;
        inRange(temp);
    } else
        throw invalid_argument("There is no number in the range who can make it");
    return temp;
}

CircularInt operator/ (int const& num,CircularInt x) {
    CircularInt temp(x);
    if(x.currentInt%num==0){
        temp.currentInt=x.currentInt/num;
        inRange(temp);
    } else
        throw invalid_argument("There is no number in the range who can make it");
    return temp;
}

// /=
CircularInt operator/= (CircularInt& cir1, CircularInt const& cir2) {
    CircularInt temp{cir1.start, cir1.end};
    int c = 0;
    for (int i = cir1.start; i <= cir1.end; i++) {
        temp.currentInt = i;
        if (c > 0) break;
        else {
            if ((temp * cir2) == cir1) {
                cir1.currentInt = temp.currentInt;
                c++;
            }
        }
    }
    if (c == 0) {
        throw invalid_argument("There is no number in the range who can make it");
    }
    return cir1;
}
CircularInt operator/= (CircularInt& cir, int const& num) {
    CircularInt temp{cir.start, cir.end};
    int c = 0;
    for (int i = cir.start; i <= cir.end; i++) {
        temp.currentInt = i;
        if (c > 0) break;
        else {
            if ((temp * num) == cir) {
                cir.currentInt = temp.currentInt;
                c++;
            }
        }
    }
    if (c == 0) {
        throw invalid_argument("There is no number in the range who can make it");
    }
    return cir;
}

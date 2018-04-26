#include <string>
#include <sstream>
#include <algorithm>


#include "CircularInt.hpp"


//Constructor
CircularInt::CircularInt(int newStart, int newEnd) {
    start=newStart;
    end=newEnd;
    currentInt=newStart;
}

CircularInt::CircularInt(CircularInt &X) {
    start=X.start;
    end=X.end;
    currentInt=X.start;
}

//Destructor
CircularInt::~CircularInt() {

}

int rangeBetween(CircularInt &other, int temp){

    if(temp>=other.start && temp<=other.end)
        other.currentInt=temp;
    else if(temp<other.start){
        while(temp<other.start){
            temp=temp+(other.end-other.start+1);
        }
        other.currentInt=temp;

    }
    else if(temp>other.end){

        while(temp>other.end){
            temp=temp-(other.end-other.start+1);
        }

        other.currentInt=temp;
    }

    return other.currentInt;

}


ostream& operator << (ostream& os, CircularInt const& ci){
    os<<ci.currentInt;
    return os;
}
istream& operator >> (istream& is,CircularInt& ci){
    is>>ci.currentInt;
    ci.currentInt=rangeBetween(ci,ci.currentInt);
    return is;
}

bool CircularInt::operator >(const CircularInt &X) const {
    return currentInt > X.currentInt;
}

bool CircularInt::operator >=(const CircularInt &X) const {
    return currentInt >= X.currentInt;
}


bool CircularInt::operator <(const CircularInt &X) const {
    return currentInt < X.currentInt;
}

bool CircularInt::operator <=(const CircularInt &X) const {
    return currentInt <= X.currentInt;
}




CircularInt& operator+= ( CircularInt& x, int num){
    CircularInt &temp (x);
    temp.currentInt= rangeBetween(temp, temp.currentInt + num);
    return temp;
}

CircularInt& operator-= ( CircularInt& x, int num){
    CircularInt &temp (x);
    temp.currentInt= rangeBetween(temp, temp.currentInt - num);
    return temp;
}

CircularInt& CircularInt::operator *=( int x) {
    this->currentInt=(this->currentInt*x)%this->end;
    return *this;
}

CircularInt& operator%= ( CircularInt& x, int num){
    CircularInt &temp (x);
    temp.currentInt= rangeBetween(temp, temp.currentInt % num);
    return temp;
}




// prefix increment operator
CircularInt& CircularInt::operator++() {
    currentInt ++;
    return *this;
}

// postfix increment operator
CircularInt& CircularInt::operator++(int) {
    CircularInt temp(*this);
    ++*this;
    return temp;
}

//OK TILL HERE


CircularInt& operator+ (CircularInt& other, int num ){
    CircularInt &other1 (other);
    other1.currentInt =rangeBetween(other1,other1.currentInt+num);
    return other1;

}

CircularInt& operator+ (int num, CircularInt& other ){
    CircularInt &other1 (other);
    other1.currentInt =rangeBetween(other1,other1.currentInt+num);
    return other1;
}

CircularInt& operator+ (CircularInt& a,CircularInt& b ){
    CircularInt &a1 (a);
    a1.currentInt=rangeBetween(a1,a1.currentInt+b.currentInt);
    return a1;
}

int CircularInt:: operator /( int x){
    if(this->currentInt%x==0){
        this->currentInt=(this->currentInt/x)%this->end;
        return this->currentInt;
    }
    else{
        stringstream ss;
        ss << "There is no number x in {" << start << "," << end << "} such that x*" << x << "=" << currentInt;
        string s = ss.str();
        throw s;
    }

}

CircularInt& operator-(int y, CircularInt&x) {
    CircularInt &temp (x);
    temp.currentInt= rangeBetween(temp, y - temp.currentInt);
    return temp;
}

int CircularInt:: operator-() {
    int ans=this->currentInt*(-1);
    while (ans<0){
        ans+=this->end;
    }
    return ans%this->end;
}

CircularInt& operator - (CircularInt& other, int num ){
    CircularInt &temp (other);
    temp.currentInt= rangeBetween(temp, temp.currentInt - num);
    return temp;

}
CircularInt& operator- ( CircularInt& a, CircularInt& b ){
    CircularInt &a1 (a);
    a1.currentInt= rangeBetween(a1, a1.currentInt + b.currentInt);
    return a1;
}

CircularInt& operator* (  CircularInt& other, int num){
    CircularInt &other1 (other);
    int temp = other1.currentInt*num;
    other1.currentInt = rangeBetween(other1,temp);
    return other1;
}

CircularInt& operator* ( int num, CircularInt& other){
    CircularInt &other1 (other);
    other1.currentInt=rangeBetween(other1,other1.currentInt*num);
    return other1;
}

CircularInt& operator* ( CircularInt& a,CircularInt& b ){
    CircularInt &a1 (a);
    a1.currentInt=rangeBetween(a1,a1.currentInt*b.currentInt);
    return a1;
}

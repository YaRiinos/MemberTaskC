#include <string>
#include <sstream>
#include <algorithm>


#include "CircularInt.hpp"


//Constructor
CircularInt::CircularInt(int newStart, int newEnd) {
    start=newStart;
    end=newEnd;
    currentInt=newStart;
    range=end-start+1;
}

CircularInt::CircularInt(CircularInt &X) {
    start=X.start;
    end=X.end;
    currentInt=X.start;
    range=X.range;
}

//Destructor
CircularInt::~CircularInt() {

}

ostream& operator<<(ostream& output, const CircularInt& X) {
    output << X.currentInt ;
    return output;
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


CircularInt& CircularInt::operator =( int x) {
    this->currentInt=x%this->end;
    return *this;
}

CircularInt& CircularInt::operator +=( int x) {
    this->currentInt=(this->currentInt+x)%this->range;
    return *this;
}

CircularInt& CircularInt::operator -=( int x) {
    this->currentInt=(this->currentInt-x)%this->range;
    if(this->currentInt<0)
        this->currentInt+=12;
    return *this;
}

CircularInt& CircularInt::operator *=( int x) {
    this->currentInt=(this->currentInt*x)%this->range;
    return *this;
}

CircularInt& CircularInt::operator /=( int x) {
    if(this->currentInt%x==0){
        this->currentInt=(this->currentInt/x)%this->range;
        return *this;
    }
    else
        throw;

}

CircularInt& CircularInt::operator %=( int x) {
    this->currentInt=(this->currentInt%x)%this->range;
    return *this;
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



int CircularInt:: operator+( CircularInt& x) {
    return (this->currentInt+x.currentInt)%this->range;
}


int CircularInt:: operator-() {
    int ans=this->currentInt*(-1);
    while (ans<0){
        ans+=this->end;
    }
    return ans%this->end;
}




int operator-(int y, CircularInt&x) {
    int ans=(y-x.currentInt)%x.range;
    if(ans<=0)
        ans+=x.end;
    return ans;
}

int CircularInt:: operator /( int x){
    if(this->currentInt%x==0){
        int temp=(this->currentInt/x)%this->range;
        return temp;
    }
    else{
        stringstream ss;
        ss << "There is no number x in {" << start << "," << end << "} such that x*" << x << "=" << currentInt;
        string s = ss.str();
        throw s;
    }

}

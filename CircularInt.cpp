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

int CircularInt:: range (int temp){

    int numVal = this->end - this->start + 1;
    if(this->currentInt > this->end){
        while(this->currentInt > this->end)
            this->currentInt -= numVal;
    }
    else if(this->currentInt < this->start){
        while(this->currentInt < this->start)
            this->currentInt += numVal;
    }
    return this->currentInt;

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
    this->currentInt=this->currentInt+x;
    range(this->currentInt);
    return *this;
}

CircularInt& CircularInt::operator -=( int x) {
    this->currentInt=(this->currentInt-x);
    range(this->currentInt);
    return *this;
}

CircularInt& CircularInt::operator *=( int x) {
    this->currentInt=(this->currentInt*x);
    range(this->currentInt);
    return *this;
}

CircularInt& CircularInt::operator /=( int x) {
    if(this->currentInt%x==0){
        this->currentInt=(this->currentInt/x);
        range(this->currentInt);
        return *this;
    }
    else
        throw;

}

CircularInt& CircularInt::operator %=( int x) {
    this->currentInt=(this->currentInt%x);
    range(this->currentInt);
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
    return range(this->currentInt+x.currentInt);
}


int CircularInt:: operator-() {
    int ans=this->currentInt*(-1);
    while (ans<0){
        ans+=this->end;
    }
    return ans%this->end;
}




int operator-(int y, CircularInt&x) {
    int ans=(y-x.currentInt)%x.end;
    if(ans<=0)
        ans+=x.end;
    return ans;
}

int CircularInt:: operator /( int x){
    if(this->currentInt%x==0){
        int temp=(this->currentInt/x);
        range(temp);
        return temp;
    }
    else{
        stringstream ss;
        ss << "There is no number x in {" << start << "," << end << "} such that x*" << x << "=" << currentInt;
        string s = ss.str();
        throw s;
    }

}

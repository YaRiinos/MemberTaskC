#include <string>
#include <sstream>


#include "CircularInt.hpp"


//Constructor
CircularInt::CircularInt(int newStart, int newEnd) {
    start=newStart;
    end=newEnd;
    currentInt =newStart;

}

CircularInt::CircularInt(CircularInt &X) {
    start=X.start;
    end=X.end;
    currentInt =X.start;

}

//Destructor
CircularInt::~CircularInt() = default;

CircularInt&  range (CircularInt& X){

    int numVal = X.end - X.start + 1;
    if(X.currentInt > X.end){
        while(X.currentInt > X.end)
            X.currentInt -= numVal;
    }
    else if(X.currentInt < X.start){
        while(X.currentInt < X.start)
            X.currentInt += numVal;
    }
    return X;

}

ostream& operator<<(ostream& output, const CircularInt& X) {
    output << X.currentInt;
    return output;
}


//==
bool operator== (CircularInt const& X, CircularInt const& Y){
    return  ((X.start == Y.start)&&(X.end == Y.end)&&(X.currentInt == Y.currentInt));
}

bool operator== (int const& num, CircularInt const& X){
    return (num == X.currentInt);
}

bool operator== (CircularInt const& X, int const& num){
    return  X.currentInt == num;
}

// !=
bool operator!= (CircularInt const& X, CircularInt const& Y){
    return ((X.start != Y.start)||
            (X.end != Y.end)||(X.currentInt != Y.currentInt));
}
bool operator!= (CircularInt const& X, int const& num){
    return (X.currentInt != num);
}


bool operator!= (int const& num, CircularInt const& X){
    return (num != X.currentInt);
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



CircularInt operator+ (CircularInt X, CircularInt const& Y){
    CircularInt temp (X);
    temp.currentInt += Y.currentInt;
    return range(temp);
}

CircularInt operator+ (CircularInt X, int const& num){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt + num;
    return range(temp);
}

CircularInt operator+ (int const& num, CircularInt X){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt + num;
    return range(temp);
}

CircularInt operator- (CircularInt X, int const& num){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt - num;
    return range(temp);

}

CircularInt operator- (CircularInt X, CircularInt const& Y){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt - Y.currentInt;
    return range(temp);

}


CircularInt operator- (int const& num, CircularInt X){
    CircularInt temp (X);
    temp.currentInt = num - temp.currentInt;
    return range(temp);

}

CircularInt operator* (CircularInt X, int const& num){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt * num;
    return range(temp);
}

CircularInt operator* (int const& num, CircularInt X){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt * num;
    return range(temp);
}

CircularInt operator* (CircularInt X, CircularInt const& Y){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt * Y.currentInt;
    return range(temp);
}


CircularInt operator/ (CircularInt X, int const& num){
    CircularInt temp (X);
    CircularInt temp2 (X);
    CircularInt temp3 (X);
    int c = 0;
    for(int i = X.start; i <= X.end; i++){
        temp.currentInt = i;
        if(c > 0) break;
        else{
            if((temp*num) == X){
                temp2.currentInt = temp.currentInt;
                c++;
            }
        }
    }
    if(c == 0){
        throw invalid_argument("THERE IS NO SUCH NUMBER!");
    }
    temp3.currentInt = temp2.currentInt;
    return temp3;
}


CircularInt operator/ (int const& num, CircularInt X){
    CircularInt temp (X);
    CircularInt temp2 (X);
    CircularInt temp3 (X);
    int c = 0;
    for(int i = X.start; i <= X.end; i++){
        temp.currentInt = i;
        if(c > 0) break;
        else if(temp * X == num){
            temp2.currentInt = temp.currentInt;
            c++;
        }
    }
    if(c == 0){
        throw invalid_argument("THERE IS NO SUCH NUMBER!");
    }
    temp3.currentInt = temp2.currentInt;
    return temp3;
}



CircularInt operator/ (CircularInt X, CircularInt const& Y){
    CircularInt temp (X);
    CircularInt temp2 (X);
    int c = 0;
    for(int i = X.start; i <= X.end; i++){
        temp.currentInt = i;
        if(c > 0) break;
        else{
            if((temp*Y) == X){
                temp2.currentInt = temp.currentInt;
                c++;
            }
        }
    }
    if(c == 0){
        throw invalid_argument("THERE IS NO SUCH NUMBER!");
    }
    return temp2;

}

//%
CircularInt operator% (CircularInt X, CircularInt const& Y){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt % Y.currentInt;
    return range(temp);
}

CircularInt operator% (CircularInt X, int const& num){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt % num;
    return range(temp);
}

CircularInt operator% (int const& num, CircularInt X){
    CircularInt temp (X);
    temp.currentInt = num % temp.currentInt;
    return range(temp);
}

//^
CircularInt operator^ (CircularInt X, CircularInt const& Y){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt ^ Y.currentInt;
    return range(temp);
}


CircularInt operator^ (CircularInt X, int const& num){
    CircularInt temp (X);
    temp.currentInt = temp.currentInt ^ num;
    return range(temp);
}

CircularInt operator^ (int const& num, CircularInt X) {
    CircularInt temp(X);
    temp.currentInt = num ^ temp.currentInt;
    return range(temp);

}

    CircularInt operator| (CircularInt X, CircularInt const& Y){
        CircularInt temp (X);
        temp.currentInt = temp.currentInt | Y.currentInt;
        return range(temp);
    }

    CircularInt operator| (CircularInt X, int const& num){
        CircularInt temp (X);
        temp.currentInt = temp.currentInt | num;
        return range(temp);
    }

    CircularInt operator| (int const& num, CircularInt X){
        CircularInt temp (X);
        temp.currentInt = num | temp.currentInt;
        return range(temp);
    }

//&
    CircularInt operator& (CircularInt X, CircularInt const& Y){
        CircularInt temp (X);
        temp.currentInt = temp.currentInt & Y.currentInt;
        return range(temp);
    }

    CircularInt operator& (CircularInt X, int const& num){
        CircularInt temp (X);
        temp.currentInt = temp.currentInt & num;
        return range(temp);
    }

    CircularInt operator& (int const& num, CircularInt X){
        CircularInt temp (X);
        temp.currentInt = num & temp.currentInt;
        return range(temp);
    }


    CircularInt operator+= (CircularInt& X, CircularInt const& Y){
        X.currentInt += Y.currentInt;
        return range(X);
    }

    CircularInt operator+= (CircularInt& X, int const& num){
        X.currentInt += num;
        return range(X);
    }

    CircularInt operator-= (CircularInt& X, CircularInt const& Y){
        X.currentInt -= Y.currentInt;
        return range(X);
    }

    CircularInt operator-= (CircularInt& X, int const& num){
        X.currentInt -= num;
        return range(X);
    }

    CircularInt operator*= (CircularInt& X, CircularInt const& Y){
        X.currentInt *= Y.currentInt;
        return range(X);
    }

    CircularInt operator*= (CircularInt& X, int const& num){
        X.currentInt *= num;
        return range(X);
    }

    CircularInt operator/= (CircularInt& X, CircularInt const& Y){
        CircularInt temp {X.start, X.end};
        int c = 0;
        for(int i = X.start; i <= X.end; i++){
            temp.currentInt = i;
            if(c > 0) break;
            else{
                if((temp*Y) == X){
                    X.currentInt = temp.currentInt;
                    c++;
                }
            }
        }
        if(c == 0){
            throw invalid_argument("THERE IS NO SUCH NUMBER!");
        }
        return X;
    }

    CircularInt operator/= (CircularInt& X, int const& num){
        CircularInt temp {X.start, X.end};
        int c = 0;
        for(int i = X.start; i <= X.end; i++){
            temp.currentInt = i;
            if(c > 0) break;
            else{
                if((temp*num) == X){
                    X.currentInt = temp.currentInt;
                    c++;
                }
            }
        }
        if(c == 0){
            throw invalid_argument("THERE IS NO SUCH NUMBER!");
        }
        return X;

    }

    CircularInt operator%= (CircularInt& X, CircularInt const& Y){
        X.currentInt %= Y.currentInt;
        return range(X);
    }


    CircularInt operator%= (CircularInt& X, int const& num){
        X.currentInt %= num;
        return range(X);
    }

    CircularInt operator^= (CircularInt& X, CircularInt const& Y){
        X.currentInt ^= Y.currentInt;
        return range(X);
    }

    CircularInt operator^= (CircularInt& X, int const& num){
        X.currentInt ^= num;
        return range(X);
    }

    CircularInt operator|= (CircularInt& X, CircularInt const& Y){
        X.currentInt |= Y.currentInt;
        return range(X);
    }

    CircularInt operator|= (CircularInt& X, int const& num){
        X.currentInt |= num;
        return range(X);
    }


    CircularInt operator&= (CircularInt& X, CircularInt const& Y){
        X.currentInt &= Y.currentInt;
        return range(X);
    }

    CircularInt operator&= (CircularInt& X, int const& num){
        X.currentInt &= num;
        return range(X);
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

CircularInt& CircularInt :: operator--(){
    if(currentInt-1 >= start)
        currentInt -= 1;
    else currentInt = end;
    return *this;
}

CircularInt CircularInt :: operator--(int){
    CircularInt ans(*this);
    --(*this);
    return ans;
}

int CircularInt:: operator-() {
    int ans=this->currentInt*(-1);
    while (ans<0){
        ans+=this->end;
    }
    return ans%this->end;
}

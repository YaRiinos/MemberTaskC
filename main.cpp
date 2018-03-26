#include <iostream>
#include "Member.h"
using namespace std;

Member avi,chana,beni, she;


void test1() {
    Member dana;
    chana.follow(dana);
    dana.follow(avi);
    cout << "  " << chana.numFollowers() << " " <<  chana.numFollowing() << endl; // 0 1
    cout << "  " << avi.numFollowers() << " " <<  avi.numFollowing() << endl; // 1 0
    cout << "  " << Member::count() << endl; // 4
}

int main() {


}
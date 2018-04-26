#include <string>
#include <vector>
#include <algorithm>
#ifndef TASK3C_MEMBER_H
#define TASK3C_MEMBER_H

#endif //TASK3C_MEMBER_H
using namespace std;


class Member{


public:

    //Constructor
    Member(){
        id=idCounter++;
        ++counter;
    }

    //Destructor
     ~Member() {
        --counter;
        for (int i = 0; i <memberStore.size() ; ++i) {
            unfollow(reinterpret_cast<Member &>(*memberStore[i]));
            reinterpret_cast<Member &>(*memberStore[i]).unfollow(*this);

        }
    }

    //Follow someone
    void follow(Member &x){
        bool flag=true;
         if (this == &x)
            flag= false;
        //Check if you not following this person already
        for (int i : UfollowStore) {
            if (i ==x.id) flag= false;
        }
        //If you don't follow -
        if (flag){

            //Add him to your following list
            UfollowStore.push_back(x.id);
            //Add you to his followers list
            x.followUStore.push_back(id);
            //Add to member you follow
            int *temp= reinterpret_cast<int *>(&x);
            int *temp2= reinterpret_cast<int *>(this);
            memberStore.push_back(temp);
            x.memberStore.push_back(temp2);
        }


    }

    //Unfollow someone
    void unfollow(Member &x){

        bool flag=false;
        //Check if you follow this person
        for (int i : UfollowStore) {
            if (i ==x.id) {
                flag=true;
            }
        }
        if(flag){

            //Remove from your list this person
            UfollowStore.erase(remove(UfollowStore.begin(), UfollowStore.end(), x.id)
                    , UfollowStore.end());

            //Remove you from the followers list of this person
            x.followUStore.erase(remove(x.followUStore.begin(), x.followUStore.end(), id)
                    ,x.followUStore.end());
        }


    }

    //Return number of ppl u follow
    int numFollowing(){
        return static_cast<int>(UfollowStore.size());
    }

    //Return number of ppl who follow u
    int numFollowers(){
        return static_cast<int>(followUStore.size());
    }

    //Return how much user we got
    static int count() {
        return counter;
    }

   // print the class
   /*  ostream& operator<< (ostream &out) {
       out << 'ID: ' << id << endl;
       out << 'Number of followers: ' << numFollowers() << endl;
       out << 'Number of following: ' << numFollowing() << endl;
       // and so on...
       return out;
   }*/

private:
    int  id;
    static int counter, idCounter;
    //Vectors for saving ids
    vector <int> UfollowStore, followUStore;
    vector <int*> memberStore;

};


int Member::counter = 0;
int Member::idCounter = 1;

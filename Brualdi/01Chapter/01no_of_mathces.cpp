#include<bits/stdc++.h>
using namespace std;

class Matches{
private:
    int no_of_teams;
public:
    Matches(int no_of_teams_){
        no_of_teams = no_of_teams_;
    }
    Matches(){
        no_of_teams = 0;
    }
    void update_mathces(int count){
        no_of_teams = count;
    }

    int no_of_matches(){
        int answer = 0 ;
        if(no_of_teams == 0 ){
            return answer;
        }
        answer = (no_of_teams*(no_of_teams -1 ))/2;
        return answer;
    }
};

int main(){
    Matches m(10);
    cout<<"No. of matches played will be :"<<m.no_of_matches();
    cout<<"\nWorking.";
    return 0;
}

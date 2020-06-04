#include<iostream>
using namespace std;
class Bonus;
class Patmarks{
    int regno;
    int pat[4];
    int total=0;
    public:
    void get_data(){
        cin>>regno;
        for(int i=0;i<4;i++){
             cin>>pat[i];
             total+=pat[i];
        }
    }
    friend void add(Patmarks,Bonus);

};

class Bonus{
    int regno;
    int bmarks;
    public:
    void take_data(){
        cin>>regno;
        cin>>bmarks;
    }
    friend void add(Patmarks,Bonus);
};

void add(Patmarks p1,Bonus b1){
    cout<<p1.regno<<endl;
    if(p1.total+b1.bmarks > 40 ){
        cout<<60<<endl;
    }
    else{
        cout<<((p1.total+b1.bmarks)*60/40)<<endl;
    }

}

int main(){
    Patmarks p1;
    Bonus b1;
    p1.get_data();
    b1.take_data();
    add(p1,b1);
    return 0;
}

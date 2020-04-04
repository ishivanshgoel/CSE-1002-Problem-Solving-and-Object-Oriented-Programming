#include<iostream>
#include<string.h>
using namespace std;
class shop{
    private:
    int pc;
    char pname[20];
    int cost;
    string vname;
    int quantity;
    public:
    void getdata();
    void showdata();
    friend class purchase;
};
void shop :: getdata(){
        cin>>pc>>pname>>cost>>vname>>quantity;
}
class purchase{
    char pname[20];
    int quan;
    public:
    void enter(){
        cin>>pname>>quan;
    }
    void buy(shop s){
        if (strcmp(pname,s.pname)==0){
            if (quan<=s.quantity){
                cout<<"Successful Purcahse!!"<<endl;
                s.quantity=s.quantity-quan;
                cout<<"Now Quantity Available:"<<s.quantity<<endl;
        }
        else {
            cout<<"Insufficient quantity";
            cout<<"pname: "<<s.pname<<endl;
            cout<<"Quantity Available:"<<s.quantity<<endl;
            cout<<"Qunatity Required: "<<quan<<endl;
            cout<<"Vendor Name: "<<s.vname<<endl;
            cout<<"Product Code: "<<s.pc<<endl;
        }
    }
    }
};
int main(){
    int n;
    purchase p1;
    cout<<"Enter No. of Products Available in your Shop:"<<endl;
    cin>>n;
    shop s[n];
    cout<<"Enter Details of Products:"<<endl;
    cout<<"Enter in the order of Product_code,Product_name,Cost,Vendor_name,Quantity Available"<<endl;
    for(int i=0;i<n;i++) s[i].getdata();
    cout<<"Enter Name of Product followed by quantity:"<<endl;
    p1.enter();
    for(int i=0;i<n;i++) p1.buy(s[i]);
    return 0;
}

#include<iostream>
using namespace std;

template<typename T,typename U>
U my_add(T a,U b){
return a+b;
}

int main(){
int a;
float b;
cin>>a>>b;
cout<<my_add(a,b)<<endl;
return 0;
}

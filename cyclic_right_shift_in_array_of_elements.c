#include<iostream>
using namespace std;
#include<string>
template<class T>
//shift the set of 'n' elements ele by 'r' positions
void right_Shift(T *ele,int n,int r);
template<class T>
void right_Shift(T *ele,int n,int r){
	int i,j=0;
	ele=(T*)realloc(ele,(n+r)*sizeof(int));
    for(i=n-1;i>=n-r;i--){
        ele[i+r]=ele[i];
    }
    for(i=0;i<r;i++){
        ele[i+r]=ele[i];
    }
    for(i=n;i<=n+r-1;i++){
        ele[j++]=ele[i];
    }
}
int main()
{
	int n, a[20],r;
	int ch;
	cin>>ch;
	string s[10];
	if(ch==0)
	{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>r;
	right_Shift(a,n,r);
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	}
	else
	{	
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>s[i];
	cin>>r;
	right_Shift(s,n,r);
	for(int i=0;i<n;i++)
	cout<<s[i]<<endl;
	}
	return 0;
}

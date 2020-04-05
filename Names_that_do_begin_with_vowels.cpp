// Names that Do Begin with Vowel- descending order
// Given a set of names, design an algorithm and write a C++ code to form a sorted list, in the descending order of names that do  begin with a vowel.

// Hint: Use STL for implementation

// Input Format:

// Number of names, 'n'

// Name 1

// Name 2

// …

// Name n

// Output Format:

// Names that do  begin with a vowel in a descending  order. 



#include <iostream>
#include <string>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

void show_list(list <string> l){
	list <string> :: iterator it;
	for(it=l.begin();it!=l.end();it++){
		cout<<*it<<endl;
	}
}


int main(){
	int n;  
	string ele;
	cin>>n;
	list <string> l;
	for(int i=0;i<n;i++){
		cin>>ele;
		if(ele[0]=='A' || ele[0]=='E' || ele[0]=='I' || ele[0]=='O' || ele[0]=='U') l.push_back(ele);
	} 
	l.sort();
	l.reverse();
	show_list(l);
	return 0;
}

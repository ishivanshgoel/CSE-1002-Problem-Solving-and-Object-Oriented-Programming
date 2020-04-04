Vector of Characters
Design a class charVector that has a character vector as datamember. Provide member functions in the class to createVector, duplicateVector, duplicateRevVector and print. Functions shall be defined as follows:

initializeVector – read a string and create a vector of characters

duplicateVector – Add the content of the vector once at the end. For example if the content of charVector is “bat” then after the function is called the content must “batbat”

duplicateRevVector – Add the content of the vector in reverse at the end. For example if the content of charVector is “bat” then after the function is called the content must “battab”

print – Print content of vector, use iterators for traversal

Use the vector class defined in STL for the implementation. Use [] operator in functions duplicateVector, duplicateRevVector and use iterator in print and initializeVector functions.

Input Format

String to be stored in vector1

String to be stored in vector2

 

Output Format

Print duplicateVector of vector1

Print duplicateRevVector of vector2


#include <iostream>
#include <vector>
#include <string>
using namespace std;
class charVector
{
	vector<char> cv;
	public:
	//Function to initialize vector by characters in a string
	void initializeVector(string);
	//Function to duplicate a vector at its back
	void dupVector();
	//Function to add reverse of a vector at its back
	void dupRevVector();
	void print();
};

void charVector ::initializeVector(string s){
    for(int i=0;s[i]!='\0';i++){
        cv.push_back(s[i]);
    }
}

void charVector ::dupVector(){
	int k=cv.size();
	for(int i=0;i<k;i++){
		cv.push_back(cv[i]);
	}
}

void charVector ::dupRevVector(){
	int k=cv.size();
	for(int i=k-1;i>=0;i--){
		cv.push_back(cv[i]);
	}
}

void charVector ::print(){
	for(auto i=cv.begin();i!=cv.end();i++){
		cout<<*i;
	}
}

int main()
{
	charVector ch1,ch2;
	string s1,s2;
	cin>>s1>>s2;
	ch1.initializeVector(s1);
	ch2.initializeVector(s2);	
	ch1.dupVector();
	ch2.dupRevVector();
	ch1.print();
	cout<<endl;
	ch2.print();
	cout<<endl;
} 

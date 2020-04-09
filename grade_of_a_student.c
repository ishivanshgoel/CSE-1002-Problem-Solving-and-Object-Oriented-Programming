//  Grade of a Student
// The grade sheet of a student to be produced in a college. As a programmer, write a prorgram to calculate the grade of a student. Get minimum of 5 subject marks from the user. While getting the values from the keyboard, raise the following user defined exceptions in appropriate place:

// If the mark entered is < ‘0’ then throw NegativeMarkException
// If the mark entered is > ‘100’ then throw OutofRangeException
// Otherwise calculate the grade on the basis of following data:
// Average >= ’90’ and <= ‘100’ S Grade

// Average >= ’80’ and < ‘90’ A Grade

// Average >= ’70’ and < ‘80’ B Grade

// Average >= ’60’ and < ‘70’ C Grade

// Average >= ’50’ and < ‘60’ D Grade

// Average >= ’40’ and < ‘50’ E Grade

// Average < ‘40’ F Grade

// Input Format:

// Roll number of the student

// Name of the student

// Mark secured by student in subject1

// Mark secured by student in subject2

// Mark secured by student in subject3

// Mark secured by student in subject4

// Mark secured by student in subject5

 

// Output Format:

// Roll number of the student

#include<iostream>
#include <exception>
using namespace std;
class negException:public exception
{
	public:
	void error_Msg()const;
};

class moreException:public exception
{
	public:
	void error_Msg()const;
};

class student
{
	int rollno;
	char name[30];
	float marks[5];
	float avg;
	char grade;
	public:
	void get();
	void print();
	void calc_Avg();
	void find_Grade();
};
void negException :: error_Msg()const{
	cout<<"Negative Marks Not Allowed"<<endl;
}

void moreException:: error_Msg()const{
	cout<<"Marks Greater than 100 Not Allowed"<<endl;
}

void student:: get(){
	cin>>rollno>>name;
	negException a;
	moreException b;
	for(int i=0;i<5;i++){
		cin>>marks[i];
	}
}

void student:: calc_Avg(){
	avg=0;
	try{
	for(int i=0;i<5;i++){
	    if(marks[i]<0){
	        negException n;
	        throw n;
	    }
	    else if(marks[i]>100){
	        moreException m;
	        throw m;
	    }
	    else
		avg=avg+marks[i];
	}
	avg=avg/5;
	find_Grade();
	print();
	}
	catch(moreException m) {m.error_Msg();}
	catch(negException n) {n.error_Msg();}
}

void student:: find_Grade(){
	if(avg >=90)
    grade='S';
    else if(avg >=80)
    grade='A';
    else if(avg >=70)
    grade='B';
    else if(avg >=60)
    grade='C';
    else if(avg >=50)
    grade='D';
    else if(avg >=40)
    grade='E';
    else
    grade='F';
}

void student::print(){
	cout<<rollno<<endl;
	cout<<name<<endl;
	cout<<grade<<endl;
}

int main(){
	student s;
	s.get();
	s.calc_Avg();
	return 0;
}

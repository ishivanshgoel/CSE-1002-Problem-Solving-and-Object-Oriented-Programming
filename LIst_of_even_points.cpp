// List of even Points
// Design a class point with datamembers: name of the point(string), value of the x-coordinate and the value of  y-coordinate. 
// Here, value of the x-coordinate and the value of the y-coordinate should be an even integer. Provide functions to get the details
//  of a point, print the details of a point and a function to compute the  squared distance between the point and a given 
//  point(passed to the function as an argument). Design a class mobileSpace, with a list of points(both the coordinates must
//   be even integers) that represent the position of the mobile towers and a point that  represents the  position of mobile phone.
//    With the position of the mobile towers and mobile phone given as input,   provide member functions to get the details and 
//    determine the tower  with which the mobile phone can be connected based on the `longest squared distance between the phone 
//    and the tower’ Use STL for implementation.

// Input Format

// Number of towers, 'n'

// Name of tower1

// X-coordinate  of tower1

// Y-coordinate of tower1

// ...

// Name of tower-n

// X-coordinate of tower-n

// Y-coordinate  of tower-n

// Name of mobile

// X-coordinate  of mobile phone

// Y-coordinate  of mobile phone

// Output Format

// Name of the tower to which the phone has to be connected

#include <iostream>
#include <vector>
#include<math.h>
#include<stdlib.h>
#include<list>
using namespace std;
class point
{
	char name[30];
	int x;
	int y;
	public:
	void get();
	void print();
	int dist(point p);
};
class mobile
{
	int num_Tower_Pts;
	list<point> tower_Pts;
	point mobile_Pt;
	public:
	void get();
	point find_Max();
};
 void point::get(){
	cin>>name>>x>>y;
}

int point ::dist(point p){
	if(x%2!=0 || y%2!=0 || p.x%2!=0 || p.y%2!=0) {
	    cout<<"Invalid input";
	    exit(0);
	}
	return(pow(x-p.x,2)+pow(y-p.y,2));    
}

void point::print(){
    cout<<name<<endl;
}

void mobile :: get(){
	cin>>num_Tower_Pts;
	point temp;
	for(int i=0;i<num_Tower_Pts;i++){
		temp.get();
		tower_Pts.push_back(temp);
	}
	mobile_Pt.get();
}


point mobile :: find_Max(){
	point maximum;
	int max=-1;

for(list<point> :: iterator it=tower_Pts.begin();it!=tower_Pts.end();it++)	
{
		if(max<mobile_Pt.dist(*it)) {
			max=mobile_Pt.dist(*it);
			maximum=*it;
		}
	}
	return maximum;
}
int main()
{
	mobile m;
	m.get();
	(m.find_Max()).print();
}



Algorithm:
1)
For finding distance between two points
int point ::dist(point p){
	if(x%2!=0 || y%2!=0 || p.x%2!=0 || p.y%2!=0) {
	   print invalid input and exit.
	}
   otherwise return the calculated distance by using pow function of maths class 
as pow(x-p.x,2)+pow(y-p.y,2)
}


2)
 For finding maximum initialise a variable max by -1. Declare a variable point maximum. Using iterator iterate through the 
 list from it,begin(). to it.end(). If max<mobile_Pt.dist(*it) then replace max with mobile_Pt.dist(*it). After iterating 
 through the list return maximum i.e a point type.

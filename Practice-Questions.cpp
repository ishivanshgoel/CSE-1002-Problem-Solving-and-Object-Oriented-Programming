// Create two classes DM and DB which store the value of distances. DM stores distance in meters and centimeters and DB in feet and inches. Write a program that can read values for the class objects and add one object of DM with another object of DB. Use a friend function to carry out the addition operation. The object that stores the results may be a DM object or DB object, depending on the units in which the results are required. The display should be in the format of feet and inches or meters and centimeters depending on the object on display.

#include<iostream>
using namespace std;
class DB;
class DM
{
 float meter,centi;
 public:
 void getdata()
 {
  cout<<"\nEnter the distance in(meter-centimeter):";
  cin>>meter>>centi;
 }
 void display()
 {
  cout<<"\nThe distance is:";
  cout<<meter<<" meters and "<<centi<<" centimeter";
 }
 friend void add(DM &,DB &);
};
class DB
{
 float inch,feet;
 public:
 void getdata()
 {
  cout<<"\nEnter the distance in(feet-inch):";
  cin>>feet>>inch;
 }
 void display()
 {
  cout<<"\nThe distance is:";
  cout<<feet<<" feet and "<<inch<<" inch";
 }
 friend void add(DM &,DB &);
};
void add(DM &a,DB &b)
{
 int ch;
 cout<<"\nPress 1 for meter-centi:";
 cout<<"\nPress 2 for feet-inch:";
 cout<<"\nEnter your choice:";
 cin>>ch;
 if(ch==1)
 {
  DM d;
  int c=(a.meter*100+a.centi+b.feet*30.48+b.inch*2.54);
  if(c>=100)
  {
   d.meter=c/100;
   d.centi=c%100;
  }
  else
  {
   d.meter=0;
   d.centi=c;
  }
  d.display();
 }
 else
 {
  DB d;
  int i=(a.meter*39.37+a.centi*.3937008+b.feet*12+b.inch);
  if(i>=12)
  {
   d.feet=i/12;
   d.inch=i%12;
  }
  else
  {
   d.feet=0;
   d.inch=i;
  }
  d.display();
 }
};

int main()
{
 DM a;
 DB b;
 a.getdata();
 b.getdata();
 add(a,b);

}




2.


#include<iostream>
#include<stdlib.h>
using namespace std;
class tollbooth
{
unsigned int car;
double amt;
public:
tollbooth()
{
car=0;
amt=0;
}
void payingcar()
{
car++;
amt+=0.50;
}
void nopayingcar()
{
car++;
}
void display()
{
cout<<"Total cars: "<<car;
cout<<"Total amount: "<<amt;
}};
int main()
{
char ch,c;
tollbooth t;
do{
cout<<" 1 for paying \n 2 for nopaying \n 3 for exit \n";
cout<<"Enter choice \n";
cin>>ch;
switch(ch)
{
case'1':
t.payingcar();
cout<<"car added";
break;
case'2':
t.nopayingcar();
cout<<"car added";
break;
case'3':
t.display();
exit(0);
break;
}
cout<<"\n Do you want to continue";
cin>>c;
}
while(c=='y'||c=='Y');
return 0;
}

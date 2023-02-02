#include<iostream>
using namespace std;
class student
{
	char name[20];
	float total,avg,mark1,mark2,mark3,regno;
	public:
		void getdata()
		{
			cout<<"Enter the student name: ";
			cin>>name;
			cout<<"\nEnter the student Reg.no: ";
			cin>>regno;
			cout<<"\nEnter the student marks:\n ";
			cin>>mark1>>mark2>>mark3;
		}
		void calculation()
		{
			total=mark1+mark2+mark3;
			avg=total/3;
		}
		void display()
		{
			cout<<"\nName : "<<name;
			cout<<"\nReg.no : "<<regno;
			cout<<"\nTotal marks : "<<total;
			cout<<"\nAverage marks :"<<avg;
			if(avg>90 && avg<=100)
			cout<<"\nGrade : A";
			else if(avg>80 && avg<=90)
			cout<<"\nGrade : B";
			else if(avg>70 && avg<=80)
			cout<<"\nGrade : C";
			else if(avg>60 && avg<=70)
			cout<<"\nGrade : D";
			else if(avg>50 && avg<=60)
			cout<<"\nGrade : E";
			else
			cout<<"\nFail";
		}
};
int main()
{
	student s;
	s.getdata();
	s.calculation();
	s.display();
}

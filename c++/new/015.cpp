//Classes and Object
#include<iostream>
using namespace std;
class student
{
	private:
	int admno;
	char sname[20];
	float eng,math,science;
	float total;
	float ctotal();
		public:
			void takedata();
			void showdata();
};
float student::ctotal()
{
	float t;
	t=eng+math+science;
}
void student::takedata()
{
	cout<<"Enter administration number:";
	cin>>admno;
	cout<<"Enter student name:";
	cin>>sname;
	cout<<"Enter your marks in english:";
	cin>>eng;
	cout<<"Enter your marks in maths:";
	cin>>math;
	cout<<"Enter your marks in science:";
	cin>>science;
	total=ctotal();
}
void student::showdata()
{
	cout<<"Your total marks are:"<<total;
}
int main()
{
	student o;
	o.takedata();
	o.showdata();
}


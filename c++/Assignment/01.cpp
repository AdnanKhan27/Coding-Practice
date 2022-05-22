#include<iostream>
using namespace std;
class students
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

void students::takedata()
{
	cout<<"Enter administration no.:";
	cin>>admno;
	cout<<"Enter name:"<<sname;
	cin>>sname;
	cout<<"Enter marks in English,Maths,Science:"<<endl;
	cin>>eng;
	cin>>math;
	cin>>science;
}

void students::showdata()
{
	cout<<admno<<endl<<sname<<endl<<"Marks in English: "<<eng<<endl<<"Marks in Maths: "<<math<<endl<<"Marks in science: "<<science;
}
float students::ctotal()
{
	total=eng+math+science;
	
}
int main()
{
	students s;
	s.takedata();
	s.showdata();
}

#include<iostream>
using namespace std;
class batsman
{
	private:
	int bcode;
	char bname[20];
	int innings,notout,runs;
	float batavg;
	
		public:
		void readdata();
		float calcavg();
		void displaydata();	
};
void batsman::readdata()
{
	cout<<"Enter batsman code:";
	cin>>bcode;
	if (bcode>1000 && bcode<9999)
	{
	cout<<"Enter batsman name:";
	cin>>bname;
	cout<<"Enter the innings:";
	cin>>innings;
	cout<<"Enter the number of notouts:";
	cin>>notout;
	cout<<"Enter the number of runs scored:";
	cin>>runs;
	}
	else 
	cout<<"Invalid";
}
float batsman::calcavg()
{
	batavg =runs/(innings-notout);
}
void batsman::displaydata()
{
	cout<<"The average of the batsman is:"<<batavg;
	
}
int main()
{
	batsman b;
	b.readdata();
	b.calcavg();
	b.displaydata();
}














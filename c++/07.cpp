#include<iostream>
#include<string.h>
using namespace std;
class pub
{
	protected:
	string title;
	float price;

};
class book:protected pub
{
	public:
	int count;

	void getdata()
	{
		cout<<"Enter title: ";
		cin>>title;
		cout<<"Enter price: ";
		cin>>price;
		cout<<"Enter no. of pages: ";
		cin>>count;
	}
	void putdata()
{
	cout<<title<<endl<<price<<endl<<cout;
}
};
int main()
{
	book o;
	o.getdata();
	o.putdata();

}

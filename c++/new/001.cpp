#include<iostream>
using namespace std;
class time
{
public:
    float m,s;
    void convert();
    void input();
    void output();

};
 void time:: input()
{
    cout<<"Write the time in minutes"<<endl;
    cin>>m;
}
//void time::convert()}
void time::output()
{
	 s=m*60;
    cout<<"The time in seconds will be:"<<s<<endl;

}
int main()
{
    time t;
    t.input();
  //  t.convert();
    t.output();
    return 0;
}

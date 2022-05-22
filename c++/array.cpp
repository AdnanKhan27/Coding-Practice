#include<iostream>
using namespace std;
class student
{
int id;
char name[22];
public:
void get();
void put();
};
void student::get()
{
cin>>id>>name;
}
void student::put()
{
cout<<id<<name;
}
int main()
{
student s[60];
int n,i;
cout<<"enter no of student[1-60]";
cin>>n;

if(n<1 || n>60)
cout<<"enter valid data";
else
for(i=0;i<n;i++)
s[i].get();

cout<<"id\tname\n";
for(i=0;i<n;i++)
s[i].put();
}

//reverse the bool value
#include <iostream>
using namespace std;
bool reverse(bool boolean)
{
	return !boolean;
}
int main()
{
	bool b;
	cin>>b;
	return reverse(b);
}

#include<iostream>
using namespace std;
int legs(int chickens,int cows,int pigs);
int main()
{
	legs(3,4,5);
	return legs(3,4,5);
}
int legs(int chickens,int cows,int pigs)
{
	int cl=chickens*2;
	int Cl=cows*4;
	int pl=pigs*4;
	int total = cl+Cl+pl;
	return total;
}

#include<iostream>
using namespace std;
void XO(char arr[10])
{
    int i,n,countx=0,counto=0,countoth=0;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter the array:"<<endl;
    for(i=0;i<=n;i++)
    cin>>arr[n];
    for(i=0;i<=n;i++)
    {
        if(arr[i]=='x' || arr[i]=='o' ||arr[i]=='X' || arr[i]=='O')
        {
            if(arr[i]=='x' || arr[i]=='X')
            {
                countx++;
            }
            else
            {
                counto++;
            }
        }
        else
        {
            countoth++;
        }
    }
    if(countx==counto || countoth==n)
    {
        cout<<"True";
    }
    else
    {
        cout<< "False";
    }

}
int main()
{
    char arr1[10];
    XO(arr1);
    return 0;
}

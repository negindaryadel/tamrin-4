#include <iostream>

using namespace std;

int main()
{
    int n, sum=1;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1;i<n;i++)
    {
       if(sum<n)
       {
        sum=sum*i;
       }


    }
    if(sum==n)
    {
        cout<<"yes";
    }
    else
        cout<<"no";
    return 0;
}

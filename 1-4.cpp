#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"enter 2 number: "<<endl;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1 ; j<=n;j++)
        {
            if(i%2==0){
			if (j % 2 == 1)
				cout << "#";
			else cout << "*";
			}
			else
			{
				if (j % 2 == 1)
					cout << "*";
				else cout << "#";
			}
		}
		cout << '\n';
	}



    return 0;
}

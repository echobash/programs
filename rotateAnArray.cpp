#include<iostream>
using namespace std;
int main()
{
	int N,d;
	cout<<"size of array"<<endl;
	cin>>N;
	cout<<"rotation"<<endl;
	cin>>d;
	int s[N],a[N];
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<N;i++)
        { 
		cin>>a[i];
        }

	for(int i=0;i<d;i++)
	{
		s[N-d+i]=a[i];
	}
	for(int i=d;i<N;i++)
        { 
                s[i-d]=a[i];
        }
	cout<<"rotated array is"<<endl;
	for(int i=0;i<N;i++)
        { 
		cout<<s[i]<<endl;
        }


}

#include<iostream>
using namespace std;
int main()
 {
	int a[5]={4,2,1,5,3};
	for(int i=0;i<5;i++)
	{
	    if((a[i+1]<a[i]) && i<4)
	    {
	        cout<<a[i];
	    }else{
	        cout<<"-1";
	    }
	}
	return 0;
}

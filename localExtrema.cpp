
#include <iostream>
using namespace std;

int main()
{
int N,d;
        cout<<"size of array"<<endl;
        cin>>N;
        cout<<"rotation"<<endl;
        int a[N];
        cout<<"enter the elements of the array"<<endl;
        for(int i=0;i<N;i++)
        { 
                cin>>a[i];
        }
        cout<<"the array is"<<endl;
        for(int i=0;i<N;i++)
        { 
            if(i==0)
            {
                if(a[0]>=a[1])
                {
                    cout<<"local maxima at"<<a[i]<<endl;
                }else if(a[0]<a[1])
                {
                    cout<<"local minima"<<endl;
                }
            }else if(i>0 && i<N-1)
            {
                if(a[i-1]<a[i] && a[i+1]<a[i])
                {
                    cout<<"local maxima at" <<a[i]<<endl;
                }else if(a[i-1]>a[i] && a[i+1]>a[i])
                {
                    cout<<"local minima at "<<a[i]<<endl;
                }else{
                    cout<<"neither minima nor maxima at "<<a[i]<<endl;
                }
            }else if(i==N-1)
            {
                if(a[N-2]<=a[N-1])
                {
                    cout<<"local maxima at"<<a[i]<<endl;
                }else if(a[N-2]>a[N-1])
                {
                    cout<<"local minima at"<<a[i]<<endl;
                }
            }
               
        }

}



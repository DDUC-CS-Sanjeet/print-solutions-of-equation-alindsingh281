#include <iostream>
using namespace std;

void Comb(int arr[],int start,int last,int c)
{ 
    if(start>last)
    {
        if(c==0)
        { 
            for(int i=0;i<=last;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        for(arr[start]=c;arr[start]>=0;arr[start]--)
            Comb(arr,start+1,last,c-arr[start]);      
    }  
}

  int main()
  {
      int c, n;
      cout<<"Enter the values of n and C respectively";
	  cin>>n>>c;
      int arr [n];
      Comb(arr,0,n-1,c);
      return 0;
  }
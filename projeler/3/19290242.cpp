#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int dizi[n];
   for(int i=0;i<n;i++)
   {	
   		cin>>dizi[i];		
   }
   cout<<dizi[0];
   for(int k=1;k<n;k++)
   {	
   		if(dizi[k-1]>dizi[k]){
		   	
   		cout<<" " <<dizi[k] ;
   		}
   		else{
   			cout<<" *\n";
   			cout<<dizi[k];
		   }
   }
   cout<<" *";
   return 0;
}

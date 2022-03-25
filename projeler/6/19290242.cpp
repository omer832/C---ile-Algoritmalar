#include <iostream>
using namespace std;
int main()
{
   int n,k,i,j;

   cin>>k;
   cin>>n;
   int p=1;
   //n kuvvet k taban 
   int a[100];    

for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2; 
j=i; 
} 

for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}

cout<<"\n";

cout<<p; 
cout<<"\n";


for(j ;j>0 ;j--)    
{    
if(a[j]==0){
	p=p*p;
	cout<<p<<endl;
}
 else {
	p=k*p*p;
	cout<<p<<endl;
}

} 



if(a[0]==0){
	p=p*p;
	cout<<p;
}
 else {
	p=k*p*p;
	cout<<p;
}
   return 0;
}

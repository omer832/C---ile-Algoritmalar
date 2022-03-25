#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int dizi[n];
   
   //1 acik 2 kapali demek 
   for(int i=1;i<=n;i++)
   {	
   		dizi[i]=2;	
   }

           for(int k=1;k<=n;k++)
   {	
   		    for(int x=1;x<=n;x++){
   		    	if(k%x==0){
   		    		if(dizi[k]==2){
   		    		dizi[k]=1;
				   } 
				   else if(dizi[k]==1){
				   	dizi[k]=2;
				   }
				   	
				   
				   }
   		    	
			   }
   } 
   	if(dizi[1]==1){
   			cout<<1;
		   } 

      for(int h=2;h<=n;h++)
   {	
   		if(dizi[h]==1){
   			cout<<" "<<h;
		   } 
   }
  	
   			cout<<" ";
		    
   return 0;
}

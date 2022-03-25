#include <iostream>
using namespace std;
int main()
{
   int a,b;
   int katsayi=1;
   int temp=0;
   cin>>a;
   cin>>b;
  	while(b!=0){
  		
  			if(a%2==0 && b%2==0){
  				a=a/2;
  				b=b/2;
  				katsayi=katsayi*2;
   			    cout<<"1. Kural"<<endl;
		   } else if(a%2==0 && b%2==1){
		   	        a=a/2;
				   	cout<<"2. Kural"<<endl;
				   } else if(a>=b){
				
				temp=a;
				a=b;
				b=temp-b;
			  cout<<"4. Kural"<<endl;
			}else{
			
				temp=a;
				a=b;
				b=temp;
				cout<<"5. Kural"<<endl;
  		}
	  }

  		cout<<"3. Kural"<<endl;
   		a=a*katsayi;
   		cout<<a<<endl;
		    
   return 0;
}

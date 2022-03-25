#include <iostream>
using namespace std;
int main()
{

    int x;   
    int z=0; 
    cin>>x;

    while(x > 0)
    {           
        z ++;                
        x = x/2;  
    }
    z=z-1;
cout<<z<<endl;
    return 0;
}

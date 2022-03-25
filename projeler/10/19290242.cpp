#include <iostream>
using namespace std;
int main()
{

    int x, y, sonuc = 0, k, l;   

   cin>>x;
   cin>>y;

    k = x;
    l = y;

    while(l > 0)
    {                
        if(l % 2 != 0)
        {
            sonuc += k;
        }    

        k *= 2;         
        l /= 2;  
    }

    cout<<sonuc<<endl;

    return 0;
}

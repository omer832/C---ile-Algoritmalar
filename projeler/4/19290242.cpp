#include <iostream>

using namespace std;

int* birlestir(int* dizi1, int* dizi2, int n)
{

    int * birlestir = new int[2*n];

      int i;
      int j;
      int a;
      int b;
      int l=2*n;
      int temp=0;
    for(i=0; i<n; i++)
    {
        birlestir[i] = dizi1[i];
    }
    for(j=0; j<n; j++)
    {
        birlestir[i] = dizi2[j];
        i++;
    }

     
    for(b=1; b<(l); b++)
    {
        for(a=0; a<(l-1); a++)
        {
            if(birlestir[a]<=birlestir[b])
            {
                temp = birlestir[a];
                birlestir[a] = birlestir[b];
                birlestir[b] = temp;
            }
        }
    }

    return birlestir;
}
int* diziyeSayilariAl(int n)

{

	int * diziyeSayilariAl = new int[n];
    for(int i=0; i<n; i++)
        cin>>diziyeSayilariAl[i];
         

    return diziyeSayilariAl;
}
void diziYazdir(int* arr, int n)
{

	    for(int i=0; i<n; i++)
    {
            cout<<arr[i]<<" ";
    }

}
int main()
{
	const int BOYUT = 4;
	
	int * dizi1 = new int[BOYUT];
	int * dizi2 = new int[BOYUT];
	int * dizi3 = new int[BOYUT];
	int * dizi4 = new int[BOYUT];
	
	int * dizi12 = new int[2*BOYUT];
	int * dizi34 = new int[2*BOYUT];
	
	int * tersSiraliDizi = new int[4*BOYUT]; 
	
	
	dizi1 = diziyeSayilariAl(BOYUT);
	dizi2 = diziyeSayilariAl(BOYUT);
	dizi3 = diziyeSayilariAl(BOYUT);
	dizi4 = diziyeSayilariAl(BOYUT);
	
	dizi12 = birlestir(dizi1, dizi2, BOYUT);
	dizi34 = birlestir(dizi3, dizi4, BOYUT);
	
	tersSiraliDizi = birlestir(dizi12, dizi34, 2*BOYUT);
	
	diziYazdir(tersSiraliDizi, 4*BOYUT);

	
}

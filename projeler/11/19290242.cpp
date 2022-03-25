#include <iostream>
using namespace std;

void cSort(int dizi[], int k) {

  int output[1000];
  int count[1000];
  int max = dizi[0];

  for (int i = 1; i < k; i++) {
    if (dizi[i] > max)
      max = dizi[i];
  }

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < k; i++) {
    count[dizi[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = k - 1; i >= 0; i--) {
    output[count[dizi[i]] - 1] = dizi[i];
    count[dizi[i]]--;
  }

  for (int i = 0; i < k; i++) {
    dizi[i] = output[i];
  }
}
int main() {
	
   int n;
   cin>>n;
   int dizi[n];
   for(int i=0;i<n;i++)
   {	
   		cin>>dizi[i];		
   }	
  cSort(dizi, n);
  for (int i = 0; i < n; i++){ 
   cout << dizi[i] << " "; 
  }
  
  
  
  return 0;
  
}

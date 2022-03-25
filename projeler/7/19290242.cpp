#include<iostream>
#include<ctime>
#include<chrono>
#include<algorithm>
using namespace std::chrono;
using namespace std;


void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
//-----------------------------------------------------------

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++)
	{
		
		if (arr[j] < pivot)
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
	
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
//-----------------------------------------------------------
void merge(int arr[], int p, int q, int r) {
  

  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

 
  int i, j, k;
  i = 0;
  j = 0;
  k = p;


  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

 
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}


void mergeSort(int arr[], int l, int r) {
  if (l < r) {
   
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    
    merge(arr, l, m, r);
  }
}



int main()
{
   int n,i; 

   cin>>n;
   int dizi[n];
   int bir[n];
   int iki[n];
   
   for(int i=0;i<n;i++)
   {	
   		cin>>dizi[i];		
   }
   //dizinin 2 klonunu oluþturma
   for(int k=0;dizi[k] != '\0'; k++){
   
         bir[k] = dizi[k]; 
   }
    for(int l=0;dizi[l] != '\0'; l++){
   
         iki[l] = dizi[l]; 
   }
 
    auto start1 = high_resolution_clock::now();
    insertionSort(dizi, n);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);

    auto start2 = high_resolution_clock::now();  
    quickSort(bir, 0, n - 1);  
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
   
    auto start3 = high_resolution_clock::now(); 
    mergeSort(iki, 0, n - 1); 
    auto stop3 = high_resolution_clock::now();
    auto duration3 = duration_cast<microseconds>(stop3 - start3);
    
        
    if(duration2<duration1 && duration2<duration3)
        cout << "En hizli: Quick" <<endl;
    else if(duration1<duration2 && duration1<duration3)
        cout << "En hizli: Insertion" <<endl;
    else
        cout << "En hizli: Merge" <<endl;

	
   return 0;
}

#include <iostream>
#include <chrono>

using namespace std;

int o_n_squared_alg(int arr[], int size)
{
	// O(n)^2 zamanda çalışan algoritma.
}
int o_n_alg(int arr[], int size)
{
	// O(n) zamanda çalışan algoritma
}
int main()
{
	using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;
	
	int size = 1000000;
	int* array = new int[size];
	int ans_n_squared;
	int ans_n;
	
	for (int i = 0; i < size; i++) // input.txt dosyasından alınız.
		cin>>array[i];

	auto t1 = high_resolution_clock::now();
	ans_n_squared=o_n_squared_alg(array, size);
	auto t2 = high_resolution_clock::now();

	auto t3 = high_resolution_clock::now();
	ans_n=o_n_alg(array, size);
	auto t4 = high_resolution_clock::now();
	
	auto time_o_n_squared = duration_cast<milliseconds>(t2 - t1);
	auto time_o_n = duration_cast<milliseconds>(t4 - t3);
	
	cout<<"O(n)kare sonucu:"<<ans_n_squared<<endl;
	cout<<"O(n) sonucu:"<<ans_n<<endl;
	if(time_o_n_squared.count()>1000*time_o_n.count()) // 1 milyon elemanlı bir dizi için O(n)^2 algoritma, O(n) algoritmadan çok daha fazla zaman alacaktır. 
		cout<<"O(n) cok daha hizli calisiyor.";
	else
		cout<<"o(n) yeterince hizli calismiyor.";

}
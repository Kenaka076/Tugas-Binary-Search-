#include "iostream"
using namespace std;

int binarysearch(int arr[], int i, int r, int x) 
{

   while (i <= r) 
   {
      int m = i + (r - i) / 2;
      if (arr[m] == x) return m;
      if (arr[m] < x) i = m + 1;
      else r = m - 1;
   }
   return -1; 
}

int main()
{
	int arr[] = {8, 16, 24, 32, 40, 48, 56}; 
	int n = sizeof(arr) / sizeof (arr[0]);
	int x = 32; 
	int result = binarysearch (arr, 0, n-1, x);
	(result == -1) ? cout << "Tidak Ditemukan"
	: cout << " Ditemukan Indeks ke: " << result;
	
	return 0;
}

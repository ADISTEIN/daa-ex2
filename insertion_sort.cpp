#include <bits/stdc++.h>
using namespace std;

void insertionSort(int A[], int n) {
    for( auto i = 1; i < n; i++ )
    {
        auto store = A[i];
        auto j = i - 1;
        while( j >= 0 && A[j] > store )
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = store;
    }
}

int main()
{
	int elements[20], n;
	cin >> n;
	for( auto i = 0; i < n; i++ )
		cin >> elements[i];
    
 	clock_t tStart = clock();
	insertionSort(elements, n);
	double t=(double)(clock() - tStart) / CLOCKS_PER_SEC;
	cout << "Time taken (in seconds) : " << t << endl;
	
	for( auto i = 0; i < n; i++ )
		cout << elements[i] << ", ";
        
	return 0;
}
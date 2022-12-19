#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> A) {
	for( auto i = 1; i < A.size(); i++ )
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
	return A;
}

int main()
{
	vector<int> elements;
	int n;
	cin >> n;
	for( auto i = 0; i < n; i++ ) {
		int data;
		cin >> data;
		elements.push_back(data);
	}
    
	clock_t tStart = clock();
	elements = insertionSort(elements);
	double t=(double)(clock() - tStart) / CLOCKS_PER_SEC;
	cout << "Time taken (in seconds) : " << t << endl;
	
	for( auto i = 0; i < n; i++ )
		cout << elements[i] << ", ";
        
	return 0;
}

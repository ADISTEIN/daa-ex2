#include <bits/stdc++.h>
using namespace std;
class point
{
    int x,y;
    public:
        bool operator>(point);
        friend istream& operator>>(istream&,point&);
        friend ostream& operator<<(ostream&,point&);
};
bool point::operator>(point p)
{
    float dis1,dis2;
    dis1 = sqrt(x * x + y * y);
    dis2 = sqrt(p.x * p.x + p.y * p.y);
    return (dis1 > dis2);
}
istream& operator>>(istream& in, point &p)
{
    in >> p.x >> p.y;
    return in;
}
ostream& operator<<(ostream& out,point &p)
{
    out << "(" << p.x << "," << p.y << ")" << endl;
}

vector<point> insertionSortPoints(vector<point> A) {
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
	vector<point> elements;
	int n;
	cin >> n;
	for( auto i = 0; i < n; i++ ) {
		point data;
		cin >> data;
		elements.push_back(data);
	}
    
	clock_t tStart = clock();
	elements = insertionSortPoints(elements);
	double t=(double)(clock() - tStart) / CLOCKS_PER_SEC;
	cout << "Time taken (in seconds) : " << t << endl;
	
	for( auto i = 0; i < n; i++ )
		cout << elements[i];
        
	return 0;
}

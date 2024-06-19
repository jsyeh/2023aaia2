//week18-2.cpp C++
#include <iostream>   //for cin,cout
#include <vector>     //for a[i]
#include <algorithm>  //sort
using namespace std;
int main()
{
	vector<int> a(10);
	for(int i=0; i<10; i++){
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend() );
	for(int i=0; i<10; i++){
		cout << a[i] << ' ';
	}
}

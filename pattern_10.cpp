#include <iostream>
using namespace std;

int main ()  {
	int n;
	cout <<"enter number of rows= ";           
	cin >> n;
	for ( int i=0; i<n; i++ ){
		for ( int j=0; j<3; j++ ){
			cout << j+1 << i+1 << " ";
		}
		cout << endl;
	}
	return 0;
}
